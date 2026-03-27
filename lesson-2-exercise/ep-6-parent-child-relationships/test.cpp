#include "test.h"
#include <QDebug>

Test::Test(QObject *parent)
    : QObject{parent}
{
    qDebug() << this << "Constructed " << parent;
}

Test::~Test()
{
    qDebug() << this << "Deconstructed" << parent();
}
