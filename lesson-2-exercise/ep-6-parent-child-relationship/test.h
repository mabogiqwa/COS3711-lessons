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

Test* getTest(QObject *parent);

#endif // TEST_H
