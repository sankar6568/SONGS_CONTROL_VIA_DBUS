/********************************************************************************
** Form generated from reading UI file 'application.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPLICATION_H
#define UI_APPLICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Application
{
public:
    QWidget *centralwidget;
    QPushButton *play;
    QPushButton *pause;
    QPushButton *stop;
    QPushButton *nextsong;
    QPushButton *prevsong;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Application)
    {
        if (Application->objectName().isEmpty())
            Application->setObjectName(QString::fromUtf8("Application"));
        Application->resize(595, 215);
        centralwidget = new QWidget(Application);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        play = new QPushButton(centralwidget);
        play->setObjectName(QString::fromUtf8("play"));
        play->setGeometry(QRect(110, 60, 89, 25));
        pause = new QPushButton(centralwidget);
        pause->setObjectName(QString::fromUtf8("pause"));
        pause->setGeometry(QRect(240, 60, 89, 25));
        stop = new QPushButton(centralwidget);
        stop->setObjectName(QString::fromUtf8("stop"));
        stop->setGeometry(QRect(300, 120, 89, 25));
        nextsong = new QPushButton(centralwidget);
        nextsong->setObjectName(QString::fromUtf8("nextsong"));
        nextsong->setGeometry(QRect(360, 60, 89, 25));
        prevsong = new QPushButton(centralwidget);
        prevsong->setObjectName(QString::fromUtf8("prevsong"));
        prevsong->setGeometry(QRect(480, 60, 89, 25));
        Application->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Application);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 595, 22));
        Application->setMenuBar(menubar);
        statusbar = new QStatusBar(Application);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Application->setStatusBar(statusbar);

        retranslateUi(Application);

        QMetaObject::connectSlotsByName(Application);
    } // setupUi

    void retranslateUi(QMainWindow *Application)
    {
        Application->setWindowTitle(QCoreApplication::translate("Application", "Application", nullptr));
        play->setText(QCoreApplication::translate("Application", "Play", nullptr));
        pause->setText(QCoreApplication::translate("Application", "Pause", nullptr));
        stop->setText(QCoreApplication::translate("Application", "Stop", nullptr));
        nextsong->setText(QCoreApplication::translate("Application", "NextSong", nullptr));
        prevsong->setText(QCoreApplication::translate("Application", "PrevSong", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Application: public Ui_Application {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLICATION_H
