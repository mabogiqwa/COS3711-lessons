#include <QCoreApplication>
#include <QTimer>
#include <QDebug>

#include "test.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QTimer timer;
    timer.singleShot(3000,&a, &QCoreApplication::quit);

    Test* dog = getTest(&a);
    dog->setObjectName("Spot");

    int value = a.exec();
    qDebug() << "Exit: " << value;
    return value;
}
