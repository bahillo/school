#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug()<<"Hola este es mi primer cambio";

    qDebug()<<"Segundo cambio";

    qDebug()<<"Tercer cambio";

    qDebug()<<"primer cambio dentro del branch";

    qDebug()<<"segundo cambio branch";




    return a.exec();
}
