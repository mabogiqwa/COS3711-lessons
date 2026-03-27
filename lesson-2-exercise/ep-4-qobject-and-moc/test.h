#ifndef TEST_H
#define TEST_H

#include <QObject>
#include <QDebug>

class Test : public QObject
{
    Q_OBJECT
public:
    explicit Test(QObject *parent = nullptr);

signals:
    void close(); //signal

public slots:
    void doStuff(); //slot
};

#endif // TEST_H
