/********************************************************************************
** Form generated from reading UI file 'myapp.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYAPP_H
#define UI_MYAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyAppClass
{
public:
    QWidget *centralWidget;
    QLineEdit *inputViewer;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_0;
    QPushButton *pushButton_enter;
    QPushButton *pushButton_sum;
    QPushButton *pushButton_diff;
    QPushButton *pushButton_prod;
    QPushButton *pushButton_div;
    QPlainTextEdit *stackViewer;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MyAppClass)
    {
        if (MyAppClass->objectName().isEmpty())
            MyAppClass->setObjectName(QStringLiteral("MyAppClass"));
        MyAppClass->resize(244, 358);
        centralWidget = new QWidget(MyAppClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        inputViewer = new QLineEdit(centralWidget);
        inputViewer->setObjectName(QStringLiteral("inputViewer"));
        inputViewer->setGeometry(QRect(10, 110, 141, 21));
        pushButton_clear = new QPushButton(centralWidget);
        pushButton_clear->setObjectName(QStringLiteral("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(160, 110, 71, 23));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(10, 140, 41, 31));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(60, 140, 41, 31));
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(110, 140, 41, 31));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 180, 41, 31));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(60, 180, 41, 31));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(110, 180, 41, 31));
        pushButton_1 = new QPushButton(centralWidget);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setGeometry(QRect(10, 220, 41, 31));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(60, 220, 41, 31));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(110, 220, 41, 31));
        pushButton_0 = new QPushButton(centralWidget);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));
        pushButton_0->setGeometry(QRect(10, 260, 41, 31));
        pushButton_enter = new QPushButton(centralWidget);
        pushButton_enter->setObjectName(QStringLiteral("pushButton_enter"));
        pushButton_enter->setGeometry(QRect(60, 260, 91, 31));
        pushButton_sum = new QPushButton(centralWidget);
        pushButton_sum->setObjectName(QStringLiteral("pushButton_sum"));
        pushButton_sum->setGeometry(QRect(160, 140, 71, 31));
        pushButton_diff = new QPushButton(centralWidget);
        pushButton_diff->setObjectName(QStringLiteral("pushButton_diff"));
        pushButton_diff->setGeometry(QRect(160, 180, 71, 31));
        pushButton_prod = new QPushButton(centralWidget);
        pushButton_prod->setObjectName(QStringLiteral("pushButton_prod"));
        pushButton_prod->setGeometry(QRect(160, 220, 71, 31));
        pushButton_div = new QPushButton(centralWidget);
        pushButton_div->setObjectName(QStringLiteral("pushButton_div"));
        pushButton_div->setGeometry(QRect(160, 260, 71, 31));
        stackViewer = new QPlainTextEdit(centralWidget);
        stackViewer->setObjectName(QStringLiteral("stackViewer"));
        stackViewer->setGeometry(QRect(10, 0, 221, 101));
        MyAppClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MyAppClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 244, 21));
        MyAppClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MyAppClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MyAppClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MyAppClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MyAppClass->setStatusBar(statusBar);

        retranslateUi(MyAppClass);
        QObject::connect(pushButton_clear, SIGNAL(clicked()), inputViewer, SLOT(clear()));
        QObject::connect(pushButton_0, SIGNAL(clicked()), MyAppClass, SLOT(inputDigit()));
        QObject::connect(pushButton_1, SIGNAL(clicked()), MyAppClass, SLOT(inputDigit()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), MyAppClass, SLOT(inputDigit()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), MyAppClass, SLOT(inputDigit()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), MyAppClass, SLOT(inputDigit()));
        QObject::connect(pushButton_5, SIGNAL(clicked()), MyAppClass, SLOT(inputDigit()));
        QObject::connect(pushButton_6, SIGNAL(clicked()), MyAppClass, SLOT(inputDigit()));
        QObject::connect(pushButton_7, SIGNAL(clicked()), MyAppClass, SLOT(inputDigit()));
        QObject::connect(pushButton_8, SIGNAL(clicked()), MyAppClass, SLOT(inputDigit()));
        QObject::connect(pushButton_9, SIGNAL(clicked()), MyAppClass, SLOT(inputDigit()));
        QObject::connect(pushButton_sum, SIGNAL(clicked()), MyAppClass, SLOT(selectOp()));
        QObject::connect(pushButton_diff, SIGNAL(clicked()), MyAppClass, SLOT(selectOp()));
        QObject::connect(pushButton_prod, SIGNAL(clicked()), MyAppClass, SLOT(selectOp()));
        QObject::connect(pushButton_div, SIGNAL(clicked()), MyAppClass, SLOT(selectOp()));
        QObject::connect(pushButton_enter, SIGNAL(clicked()), MyAppClass, SLOT(enterNumber()));

        QMetaObject::connectSlotsByName(MyAppClass);
    } // setupUi

    void retranslateUi(QMainWindow *MyAppClass)
    {
        MyAppClass->setWindowTitle(QApplication::translate("MyAppClass", "GUI RPN", 0));
        pushButton_clear->setText(QApplication::translate("MyAppClass", "clear", 0));
        pushButton_7->setText(QApplication::translate("MyAppClass", "7", 0));
        pushButton_8->setText(QApplication::translate("MyAppClass", "8", 0));
        pushButton_9->setText(QApplication::translate("MyAppClass", "9", 0));
        pushButton_4->setText(QApplication::translate("MyAppClass", "4", 0));
        pushButton_5->setText(QApplication::translate("MyAppClass", "5", 0));
        pushButton_6->setText(QApplication::translate("MyAppClass", "6", 0));
        pushButton_1->setText(QApplication::translate("MyAppClass", "1", 0));
        pushButton_2->setText(QApplication::translate("MyAppClass", "2", 0));
        pushButton_3->setText(QApplication::translate("MyAppClass", "3", 0));
        pushButton_0->setText(QApplication::translate("MyAppClass", "0", 0));
        pushButton_enter->setText(QApplication::translate("MyAppClass", "Enter", 0));
        pushButton_sum->setText(QApplication::translate("MyAppClass", "+", 0));
        pushButton_diff->setText(QApplication::translate("MyAppClass", "-", 0));
        pushButton_prod->setText(QApplication::translate("MyAppClass", "x", 0));
        pushButton_div->setText(QApplication::translate("MyAppClass", "/", 0));
    } // retranslateUi

};

namespace Ui {
    class MyAppClass: public Ui_MyAppClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYAPP_H
