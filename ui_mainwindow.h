/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *convert1;
    QComboBox *currencyTo;
    QLineEdit *from;
    QComboBox *currencyFrom;
    QLabel *ans;
    QLabel *to;
    QLabel *label;
    QToolButton *Refresh;
    QToolButton *exhange_button;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(792, 655);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:rgb(40, 56, 72)"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        convert1 = new QPushButton(centralwidget);
        convert1->setObjectName("convert1");
        convert1->setGeometry(QRect(200, 420, 411, 71));
        convert1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"	font: 600 14pt \"Yu Gothic UI Semibold\";\n"
"	border:2px solid black;\n"
"	background-color: white;\n"
"	border-radius: 25px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(222, 222, 222)\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:rgb(190, 192, 193)\n"
"}"));
        currencyTo = new QComboBox(centralwidget);
        QIcon icon;
        icon.addFile(QString::fromUtf8("img/free-icon-russia-4628645.png"), QSize(), QIcon::Normal, QIcon::Off);
        currencyTo->addItem(icon, QString());
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("img/free-icon-united-states-of-america-323310.png"), QSize(), QIcon::Normal, QIcon::Off);
        currencyTo->addItem(icon1, QString());
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("img/free-icon-european-union-197615.png"), QSize(), QIcon::Normal, QIcon::Off);
        currencyTo->addItem(icon2, QString());
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("img/free-icon-china-323363.png"), QSize(), QIcon::Normal, QIcon::Off);
        currencyTo->addItem(icon3, QString());
        currencyTo->setObjectName("currencyTo");
        currencyTo->setGeometry(QRect(160, 270, 131, 61));
        currencyTo->setStyleSheet(QString::fromUtf8("QComboBox QAbstractItemView {\n"
"  color: rgb(85, 170, 255);	\n"
"  background-color: #373e4e;\n"
"  padding: 10px;\n"
"  selection-background-color: rgb(39, 44, 54);\n"
"  font: 600 14pt \"Yu Gothic UI Semibold\";\n"
"}\n"
"QComboBox::drop-down \n"
"{\n"
"    width: 0px;\n"
"    height: 0px;\n"
"    border: 0px;\n"
"}\n"
"QComboBox{\n"
"border: 2px solid black;\n"
"	background-color: white;\n"
"font: 600 14pt \"Yu Gothic UI Semibold\";\n"
"\n"
"}"));
        from = new QLineEdit(centralwidget);
        from->setObjectName("from");
        from->setGeometry(QRect(290, 180, 371, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Yu Gothic UI Semibold")});
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(false);
        from->setFont(font);
        from->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	\n"
"	border: 2px solid black;\n"
"	background-color: white;\n"
"	font: 600 14pt \"Yu Gothic UI Semibold\";\n"
"\n"
"\n"
"}"));
        currencyFrom = new QComboBox(centralwidget);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/img/free-icon-russia-4628645.png"), QSize(), QIcon::Normal, QIcon::Off);
        currencyFrom->addItem(icon4, QString());
        currencyFrom->addItem(icon1, QString());
        currencyFrom->addItem(icon2, QString());
        currencyFrom->addItem(icon3, QString());
        currencyFrom->setObjectName("currencyFrom");
        currencyFrom->setGeometry(QRect(160, 180, 131, 61));
        currencyFrom->setFont(font);
        currencyFrom->setStyleSheet(QString::fromUtf8("QComboBox QAbstractItemView {\n"
"  color: rgb(85, 170, 255);	\n"
"  background-color: #373e4e;\n"
"  padding: 10px;\n"
"  selection-background-color: rgb(39, 44, 54);\n"
"  font: 600 14pt \"Yu Gothic UI Semibold\";\n"
"\n"
"}\n"
"QComboBox::drop-down \n"
"{\n"
"    width: 0px;\n"
"    height: 0px;\n"
"    border: 0px;\n"
"}\n"
"QComboBox{\n"
"border: 2px solid black;\n"
"	background-color: white;\n"
"font: 600 14pt \"Yu Gothic UI Semibold\";\n"
"\n"
"}"));
        ans = new QLabel(centralwidget);
        ans->setObjectName("ans");
        ans->setGeometry(QRect(160, 40, 501, 101));
        ans->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	\n"
"	font: 600 20pt \"Yu Gothic UI Semibold\";\n"
"	border: 2px solid black;\n"
"	background-color: white;\n"
"border-radius:13px;\n"
"\n"
"}"));
        ans->setAlignment(Qt::AlignCenter);
        to = new QLabel(centralwidget);
        to->setObjectName("to");
        to->setGeometry(QRect(290, 270, 371, 61));
        to->setFont(font);
        to->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	\n"
"	border: 2px solid black;\n"
"	background-color: white;\n"
"	font: 600 14pt \"Yu Gothic UI Semibold\";\n"
"\n"
"}"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 530, 541, 24));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:white;\n"
"font: 600 9pt \"Yu Gothic UI Semibold\";\n"
"font-size:20px;\n"
"\n"
"}"));
        Refresh = new QToolButton(centralwidget);
        Refresh->setObjectName("Refresh");
        Refresh->setGeometry(QRect(180, 60, 51, 60));
        Refresh->setMinimumSize(QSize(30, 60));
        Refresh->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"\n"
"	font: 600 14pt \"Yu Gothic UI Semibold\";\n"
"	border:2px solid black;\n"
"	background-color: white;\n"
"	border-radius: 10px;\n"
"	border: 2px solid transparent;\n"
"}\n"
"\n"
"QToolButton:hover\n"
"{\n"
"	background-color: rgb(222, 222, 222)\n"
"}\n"
"\n"
"QToolButton:pressed\n"
"{\n"
"	background-color:rgb(190, 192, 193)\n"
"}"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("img/refresh.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Refresh->setIcon(icon5);
        Refresh->setIconSize(QSize(50, 50));
        exhange_button = new QToolButton(centralwidget);
        exhange_button->setObjectName("exhange_button");
        exhange_button->setGeometry(QRect(350, 350, 101, 41));
        exhange_button->setStyleSheet(QString::fromUtf8("QToolButton { \n"
"     \n"
"  \n"
"     background-color: rgb(40, 56, 72);\n"
"     border-radius: 10px;\n"
"     color: white;\n"
"	 opacity: 0.5;\n"
" }\n"
"\n"
"QToolButton:pressed\n"
"{\n"
"	background-color:rgb(60, 83, 107)\n"
"}\n"
"\n"
""));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/img/img/arrows.png"), QSize(), QIcon::Normal, QIcon::Off);
        exhange_button->setIcon(icon6);
        exhange_button->setIconSize(QSize(100, 100));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 190, 121, 41));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	\n"
"	font: 600 18pt \"Yu Gothic UI Semibold\";\n"
"\n"
"	background-color: rgb(40, 56, 72);\n"
" 	color:white;\n"
"\n"
"}"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 280, 111, 41));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	\n"
"	font: 600 18pt \"Yu Gothic UI Semibold\";\n"
"\n"
"	background-color: rgb(40, 56, 72);\n"
"color:white;\n"
"\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 792, 30));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        currencyTo->setCurrentIndex(0);
        currencyFrom->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        convert1->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\275\320\262\320\265\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        currencyTo->setItemText(0, QCoreApplication::translate("MainWindow", "RUB", nullptr));
        currencyTo->setItemText(1, QCoreApplication::translate("MainWindow", "USD", nullptr));
        currencyTo->setItemText(2, QCoreApplication::translate("MainWindow", "EUR", nullptr));
        currencyTo->setItemText(3, QCoreApplication::translate("MainWindow", "CNY", nullptr));

        from->setText(QString());
        currencyFrom->setItemText(0, QCoreApplication::translate("MainWindow", "RUB", nullptr));
        currencyFrom->setItemText(1, QCoreApplication::translate("MainWindow", "USD", nullptr));
        currencyFrom->setItemText(2, QCoreApplication::translate("MainWindow", "EUR", nullptr));
        currencyFrom->setItemText(3, QCoreApplication::translate("MainWindow", "CNY", nullptr));

        ans->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\275\320\262\320\265\321\200\321\202\320\265\321\200 \320\262\320\260\320\273\321\216\321\202", nullptr));
        to->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "\320\241\320\262\320\265\320\264\320\265\320\275\320\270\321\217 \320\246\320\265\320\275\321\202\321\200\320\260\320\273\321\214\320\275\320\276\320\263\320\276 \320\221\320\260\320\275\320\272\320\260 \320\240\320\276\321\201\321\201\320\270\320\271\321\201\320\272\320\276\320\271 \320\244\320\265\320\264\320\265\321\200\320\260\321\206\320\270\320\270", nullptr));
        Refresh->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        exhange_button->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\234\320\265\320\275\321\217\321\216", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\273\321\203\321\207\320\260\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
