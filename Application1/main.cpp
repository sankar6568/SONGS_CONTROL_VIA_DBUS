#include "application.h"

//#include <QtWidgets>
#include <QtDBus>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
     Application w;
//    Application application;
//    application.show();
    w.show();
    return a.exec();
}
