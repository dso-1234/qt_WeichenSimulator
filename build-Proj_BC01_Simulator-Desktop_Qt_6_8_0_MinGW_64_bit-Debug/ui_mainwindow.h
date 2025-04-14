/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *stateLabel;
    QLabel *ledEndL;
    QLabel *ledEndR;
    QPushButton *cmdLeButton;
    QPushButton *cmdRiButton;
    QLabel *errorSetLeft;
    QLabel *errorSetRight;
    QPushButton *errorQuit1Button;
    QPushButton *errorQuit2Button;
    QPushButton *errorQuit3Button;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        stateLabel = new QLabel(centralwidget);
        stateLabel->setObjectName("stateLabel");

        gridLayout->addWidget(stateLabel, 0, 0, 1, 2);

        ledEndL = new QLabel(centralwidget);
        ledEndL->setObjectName("ledEndL");

        gridLayout->addWidget(ledEndL, 1, 0, 1, 1);

        ledEndR = new QLabel(centralwidget);
        ledEndR->setObjectName("ledEndR");

        gridLayout->addWidget(ledEndR, 1, 1, 1, 1);

        cmdLeButton = new QPushButton(centralwidget);
        cmdLeButton->setObjectName("cmdLeButton");

        gridLayout->addWidget(cmdLeButton, 2, 0, 1, 1);

        cmdRiButton = new QPushButton(centralwidget);
        cmdRiButton->setObjectName("cmdRiButton");

        gridLayout->addWidget(cmdRiButton, 2, 1, 1, 1);

        errorSetLeft = new QLabel(centralwidget);
        errorSetLeft->setObjectName("errorSetLeft");

        gridLayout->addWidget(errorSetLeft, 3, 0, 1, 1);

        errorSetRight = new QLabel(centralwidget);
        errorSetRight->setObjectName("errorSetRight");

        gridLayout->addWidget(errorSetRight, 3, 1, 1, 1);

        errorQuit1Button = new QPushButton(centralwidget);
        errorQuit1Button->setObjectName("errorQuit1Button");

        gridLayout->addWidget(errorQuit1Button, 4, 0, 1, 1);

        errorQuit2Button = new QPushButton(centralwidget);
        errorQuit2Button->setObjectName("errorQuit2Button");

        gridLayout->addWidget(errorQuit2Button, 4, 1, 1, 1);

        errorQuit3Button = new QPushButton(centralwidget);
        errorQuit3Button->setObjectName("errorQuit3Button");

        gridLayout->addWidget(errorQuit3Button, 5, 0, 1, 2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Weichensteuerung", nullptr));
        stateLabel->setText(QCoreApplication::translate("MainWindow", "Zustand IST: INVALID", nullptr));
        ledEndL->setText(QCoreApplication::translate("MainWindow", "Endlage Links", nullptr));
        ledEndL->setStyleSheet(QCoreApplication::translate("MainWindow", "background-color: gray; border: 1px solid black;", nullptr));
        ledEndR->setText(QCoreApplication::translate("MainWindow", "Endlage Rechts", nullptr));
        ledEndR->setStyleSheet(QCoreApplication::translate("MainWindow", "background-color: gray; border: 1px solid black;", nullptr));
        cmdLeButton->setText(QCoreApplication::translate("MainWindow", "cmd Le", nullptr));
        cmdRiButton->setText(QCoreApplication::translate("MainWindow", "cmd Ri", nullptr));
        errorSetLeft->setText(QCoreApplication::translate("MainWindow", "Error Set Left", nullptr));
        errorSetLeft->setStyleSheet(QCoreApplication::translate("MainWindow", "background-color: gray; border: 1px solid black;", nullptr));
        errorSetRight->setText(QCoreApplication::translate("MainWindow", "Error Set Right", nullptr));
        errorSetRight->setStyleSheet(QCoreApplication::translate("MainWindow", "background-color: gray; border: 1px solid black;", nullptr));
        errorQuit1Button->setText(QCoreApplication::translate("MainWindow", "Error Quit 1", nullptr));
        errorQuit2Button->setText(QCoreApplication::translate("MainWindow", "Error Quit 2", nullptr));
        errorQuit3Button->setText(QCoreApplication::translate("MainWindow", "Error Quit 3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
