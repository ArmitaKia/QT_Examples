#include "manager.h"
#include <QDebug>

Manager::Manager(QObject *parent)
    : QObject{parent}
{

}
void Manager::closeFactory()
{
    qInfo() << "Factory closed!";
    emit this->factoryClosed();
}
