#include <QCoreApplication>

#include "test.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Test test;

    //signal and slot. What this says is that when close is emitted then the application must be closed.
    QObject::connect(&test, &Test::close, &a, &QCoreApplication::quit, Qt::QueuedConnection);

    test.doStuff();

    int val = a.exec();

    qInfo() << "Exit value: " << val;

    return val;
}
