#include "application.h"
#include "ui_application.h"
#include "application.h"
#include "application_interface.h"

Application::Application(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Application)
{
    ui->setupUi(this);
    songPath = "/home/sankar/Music/Senorita.mp3";

    app = new org::example::Examples::AppInterface("org.example.AppExample", "/App",
                                                   QDBusConnection::sessionBus(), this);
   // QDBusConnection::sessionBus().registerObject("/App", this);
}

Application::~Application()
{
    delete ui;
}


void Application::on_play_clicked()
{
     //qDebug()<<"Play button clicked before";
    app->play(songPath);
     //qDebug()<<"Play button clicked"<<songPath;
}


void Application::on_pause_clicked()
{
    app->pause(songPath);
    qDebug()<<"pause button clicked,song path:"<<songPath;
}


void Application::on_nextsong_clicked()
{
    app->nextsong();
}


void Application::on_prevsong_clicked()
{
    app->prevsong();
}


void Application::on_stop_clicked()
{
    app->stop(songPath);
}

