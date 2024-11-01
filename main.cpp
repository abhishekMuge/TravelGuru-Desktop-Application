#include "mainwindow.h"

#include <QApplication>
#include <QIcon>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("TravelGur: Your Daily Travel Partner");
    w.setWindowIcon(QIcon(":/images/icon.jpg"));

    w.showMaximized();
    return a.exec();
}
