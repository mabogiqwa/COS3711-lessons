#include <QCoreApplication>
#include <QVariant>
#include <QDebug>
#include <QString>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QVariant v = 123.02;

    qDebug() << v.toInt();
    qDebug() << v.toDouble();

    if (v.conConvert<QString>()) {
        qDebug() << v.toString();
    }

    return a.exec();
}
