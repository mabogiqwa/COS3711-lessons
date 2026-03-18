#ifndef EXERCISEWRITER_H
#define EXERCISEWRITER_H

#include "exercise.h"

class ExerciseWriter
{
public:
    ExerciseWriter();
    void write(Exercise& exerciseObj, QTextStream &out);
};

#endif // EXERCISEWRITER_H
