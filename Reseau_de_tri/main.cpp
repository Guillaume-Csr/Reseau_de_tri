#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtWidgets>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow w;

    w.setWindowTitle("Network_App");
    w.show();

    return app.exec();
}
