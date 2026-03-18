#include "exercisereader.h"

ExerciseReader::ExerciseReader() {}

void ExerciseReader::read(Exercise &exerciseObj, QTextStream &in)
{
    QString line = in.readLine();
    QStringList parts = line.split(",");
    int num;
    if (parts.size() == 2) {
        exerciseObj.setName(parts[0]);
        num = parts[1].toInt();
        exerciseObj.setNumber(num);
    }
}
