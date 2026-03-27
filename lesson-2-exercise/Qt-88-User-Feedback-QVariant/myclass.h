#ifndef MYCLASS_H
#define MYCLASS_H

#include <QtCore>

class MyClass
{
public:
    MyClass();
    int Number;
};
Q_DECLARE_METATYPE(MyClass); //Registering class as metatype

#endif // MYCLASS_H
