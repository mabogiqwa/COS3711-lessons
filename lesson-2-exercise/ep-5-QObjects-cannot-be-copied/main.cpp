#include <QCoreApplication>

#include "cat.h"
#include <QDebug>

void test(Cat &cat)
{

}

//Still haven't figured this out
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Cat kitty;

    test(kitty);
    //qDebug() << kitty;

    return a.exec();
}
