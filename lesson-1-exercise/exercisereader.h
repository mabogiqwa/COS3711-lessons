#ifndef EXERCISEREADER_H
#define EXERCISEREADER_H

#include "exercise.h"
#include <QStringList>

class ExerciseReader
{
public:
    ExerciseReader();
    void read(Exercise& h1, QTextStream &in);
};

#endif // EXERCISEREADER_H
