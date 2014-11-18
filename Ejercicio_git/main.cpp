#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug()<<"Hola este es mi primer cambio";

    qDebug()<<"Segundo cambio";




    return a.exec();
}
