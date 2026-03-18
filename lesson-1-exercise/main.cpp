#include <QCoreApplication>
#include "exercise.h"
#include "exercisereader.h"
#include "exercisewriter.h"
#include <QFile>

//Serializer pattern is when we add classes that read and write the
//contents of an object.
//In this case the class exercise has the reader: ExerciseReader and
//the writer: ExerciseWriter
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    ExerciseWriter exerciseWriter1;
    QFile file("output.txt");

    Exercise e1("one", 1);
    Exercise e2("two", 2);

    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);

        exerciseWriter1.write(e1, out);
        exerciseWriter1.write(e2, out);

        file.close();
    } else {
        qDebug() << "Could not open file for writing";
    }



    return a.exec();
}
