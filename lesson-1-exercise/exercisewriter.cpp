#include "exercisewriter.h"

ExerciseWriter::ExerciseWriter() {}

void ExerciseWriter::write(Exercise &exerciseObj, QTextStream &out)
{
    out << exerciseObj.getName() << "," << exerciseObj.getNumber() << "\n";
}
