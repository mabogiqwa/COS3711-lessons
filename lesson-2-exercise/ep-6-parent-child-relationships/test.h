#ifndef TEST_H
#define TEST_H

#include <QObject>
#include <QTimer>
#include "test.h"

class Test : public QObject
{
    Q_OBJECT
public:
    explicit Test(QObject *parent = nullptr);

    ~Test();

signals:
};

Test* getTest(QObject *parent)
{
    return new Test(parent); //parent-child relationship
}

#endif // TEST_H
