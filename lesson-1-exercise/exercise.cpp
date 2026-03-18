//Serialization
#include "exercise.h"

Exercise::Exercise() {}

Exercise::Exercise(QString n, int num)
{
    name = n;
    number = num;
}

QString Exercise::toString()
{
    return QString("User(Name: %1, ID: %2").arg(name).arg(number);
}

QString Exercise::getName() const
{
    return name;
}

int Exercise::getNumber() const
{
    return number;
}
