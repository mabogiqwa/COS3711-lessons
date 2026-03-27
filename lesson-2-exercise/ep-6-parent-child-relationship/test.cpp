#include "test.h"
#include <QDebug>

Test::Test(QObject *parent)
    : QObject{parent}
{
    qDebug() << this << "Constructed " << parent;
}

Test::~Test()
{
    foreach(QObject* child, children()) {
        qDebug() << this << " - child - " << child;
    }
    qDebug() << this << "Deconstructed" << parent();
}

Test* getTest(QObject *parent)
{
    return new Test(parent); //parent-child relationship
}
