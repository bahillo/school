#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug()<<"Hola este es mi primer cambio";

    qDebug()<<"Segundo cambio";

    qDebug()<<"Tercer cambio";

    qDebug()<<"primer cambio dentro del branch";




    return a.exec();
}
