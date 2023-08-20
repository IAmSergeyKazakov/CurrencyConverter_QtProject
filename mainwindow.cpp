#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtWidgets>
#include <QNetworkAccessManager>
#include <QMainWindow>
#include <QDebug>
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    manager = new QNetworkAccessManager(this);

    connect (manager, &QNetworkAccessManager::finished, this, &MainWindow::getCurrency);

    urlText = "http://www.cbr.ru/scripts/XML_daily.asp?"; // URL, к которому будем получать данные
    urlText = urlText.trimmed();
    manager->get( QNetworkRequest( QUrl(urlText) ) );

    ui->from->setFocus();

    ui->currencyFrom->setCurrentIndex(1);
}


MainWindow::~MainWindow()
{
    delete ui;
    ui = nullptr;
    delete manager;
    manager = nullptr;
    delete replyF;
    replyF = nullptr;
}

void MainWindow::on_convert1_clicked()
{
    if(ui->currencyFrom->currentIndex() == 0 && ui->currencyTo->currentIndex() == 0)
    {
        return ;
    }
    else if(ui->currencyFrom->currentIndex() == 0 && ui->currencyTo->currentIndex() == 1)
    {
        FirstItem = "USD";
        SecondItem = "EUR";
        ConvertRub = true;
    }
    else if (ui->currencyFrom->currentIndex() == 0 && ui->currencyTo->currentIndex() == 2)
    {
        FirstItem = "EUR";
        SecondItem = "EGP";
        ConvertRub = true;
    }
    else if (ui->currencyFrom->currentIndex() == 0 && ui->currencyTo->currentIndex() == 3)
    {
        FirstItem = "CNY";
        SecondItem = "MDL";
        ConvertRub = true;
    }


    else if(ui->currencyFrom->currentIndex() == 1 && ui->currencyTo->currentIndex() == 0)
    {
        FirstItem = "USD";
        SecondItem = "EUR";
    }
    else if (ui->currencyFrom->currentIndex() == 1 && ui->currencyTo->currentIndex() == 1)
    {
        return ;
    }
    else if (ui->currencyFrom->currentIndex() == 1 && ui->currencyTo->currentIndex() == 2)
    {
        FirstItem = "EUR";
        SecondItem = "EGP";
        ThirdItem = "USD";
        FourtItem = "EUR";
        block = true;
    }
    else if (ui->currencyFrom->currentIndex() == 1 && ui->currencyTo->currentIndex() == 3)
    {
        FirstItem = "CNY";
        SecondItem = "MDL";
        ThirdItem = "USD";
        FourtItem = "EUR";
        block = true;
    }


    else if(ui->currencyFrom->currentIndex() == 2 && ui->currencyTo->currentIndex() == 0)
    {
        FirstItem = "EUR";
        SecondItem = "EGP";
    }
    else if (ui->currencyFrom->currentIndex() == 2 && ui->currencyTo->currentIndex() == 1)
    {
        FirstItem = "USD";
        SecondItem = "EUR";
        ThirdItem = "EUR";
        FourtItem = "EGP";
        block = true;
    }
    else if (ui->currencyFrom->currentIndex() == 2 && ui->currencyTo->currentIndex() == 2)
    {
        return ;
    }
    else if (ui->currencyFrom->currentIndex() == 2 && ui->currencyTo->currentIndex() == 3)
    {
        FirstItem = "CNY";
        SecondItem = "MDL";
        ThirdItem = "EUR";
        FourtItem = "EGP";
        block = true;
    }


    else if(ui->currencyFrom->currentIndex() == 3 && ui->currencyTo->currentIndex() == 0)
    {
        FirstItem = "CNY";
        SecondItem = "MDL";
    }
    else if (ui->currencyFrom->currentIndex() == 3 && ui->currencyTo->currentIndex() == 1)
    {
        FirstItem = "USD";
        SecondItem = "EUR";
        ThirdItem = "CNY";
        FourtItem = "MDL";
        block = true;
    }
    else if (ui->currencyFrom->currentIndex() == 3 && ui->currencyTo->currentIndex() == 2)
    {
        FirstItem = "EUR";
        SecondItem = "EGP";
        ThirdItem = "CNY";
        FourtItem = "MDL";
        block = true;
    }
    else if (ui->currencyFrom->currentIndex() == 3 && ui->currencyTo->currentIndex() == 3)
    {
        return ;
    }
    QString course;

    course = getCourse(xmlText, FirstItem, SecondItem);

    float FirstNumber = ui->from->text().toFloat();

    float SecondtNumber = course.toFloat();

    Sum = FirstNumber * SecondtNumber;

    if (ConvertRub == true)
    {
        Sum = FirstNumber / SecondtNumber;
        ConvertRub = false;
    }

    course = QString::number(Sum);

    convertation(SecondtNumber,ThirdItem,FourtItem);

    if (block == false)
    {
        ui->to->setText(course);
    }

    block = false;
}

void MainWindow::on_Refresh_clicked()
{
    QString urlText = "http://www.cbr.ru/scripts/XML_daily.asp?"; // URL, к которому будем получать данные
    urlText = urlText.trimmed();
    manager->get( QNetworkRequest( QUrl(urlText) ) );
}


void MainWindow::convertation(float const &number,QString &firstPosition,QString &secondPosition)
{
    QString course;
    course = getCourse(xmlTextConv, firstPosition, secondPosition );
    const float FirstNumber = ui->from->text().toFloat();
    const float SecondtNumber = course.toFloat();
    const float CurrentCourse = SecondtNumber / number;
    const float SumNumbers = FirstNumber * CurrentCourse;
    course = QString::number(SumNumbers);
    ui->to->setText(course);
}

void MainWindow::getCurrency(QNetworkReply *reply)
{
    if( reply->error() == QNetworkReply::NoError)
    {
        QString data = QString::fromUtf8( reply->readAll() );
        CurrencyData = data;
    }
}

void MainWindow::on_exhange_button_clicked()
{
    const int frst = ui->currencyFrom->currentIndex();
    const int scnd = ui->currencyTo->currentIndex();
    ui->currencyFrom->setCurrentIndex(scnd);
    ui->currencyTo->setCurrentIndex(frst);
    on_convert1_clicked();
}

QString MainWindow::getCourse(QString &xmlText, QString &firstPosition,QString &secondPosition)
{
    xmlText = CurrencyData;
    xmlText = xmlText.replace(QString(firstPosition), QString(begin));
    xmlText = xmlText.replace(QString(secondPosition), QString(end));

    const int startPos = xmlText.indexOf(begin);
    const int endPos = xmlText.indexOf(end);
    const int length = endPos - startPos;

    xmlText = xmlText.mid(startPos, length);
    xmlText.remove(begin);

    xmlText = xmlText.replace(QString("<Value>"), QString(begin));
    xmlText = xmlText.replace(QString("</Value>"), QString(end));

    const int startPos2 = xmlText.indexOf(begin);
    const int endPos2 = xmlText.indexOf(end);
    const int length2 = endPos2 - startPos2;

    xmlText = xmlText.mid(startPos2, length2);
    xmlText = xmlText.remove(begin);
    xmlText = xmlText.replace(QString(","), QString("."));

    return xmlText;
}







