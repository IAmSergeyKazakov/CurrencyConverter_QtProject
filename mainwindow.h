#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QXmlStreamReader>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QFile>
#include <QUrl>
#include <QDebug>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:


private:

    Ui::MainWindow *ui;
    void changeToImg(int a);
    void changeFromImg(int a);
    void getCurrency(QNetworkReply *reply);

    QNetworkAccessManager *manager;
    const QNetworkReply *replyF;
    const QString begin = "begin";
    const QString end = "end";
    QString xmlText, xmlTextConv, CurrencyData, FirstItem, SecondItem, ThirdItem, FourtItem, urlText;
    float Sum;
    bool block = false;
    bool ConvertRub = false;

private slots:
    void convertation(float const &number,QString &string1,QString &string2);

    void on_convert1_clicked();

    void on_Refresh_clicked();

    void on_exhange_button_clicked();

    QString getCourse(QString &xmlText, QString &firstPosition,QString &secondPosition);



};
#endif // MAINWINDOW_H
