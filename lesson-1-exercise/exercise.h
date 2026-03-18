#ifndef EXERCISE_H
#define EXERCISE_H

#include <QString>
#include <QDebug>

class Exercise
{
public:
    Exercise();
    Exercise(QString n, int num);
    QString toString();
    QString getName() const;
    int getNumber() const;
    void setName(QString n) {
        name = n;
    }
    void setNumber(int n1) {
        number = n1;
    }
private:
    QString name;
    int number;
};

#endif // EXERCISE_H
