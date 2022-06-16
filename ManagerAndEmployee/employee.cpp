#include "employee.h"
#include <QDebug>

Employee::Employee(QObject *parent)
    : QObject{parent}
{

}
void Employee::stopWorking()
{
    qInfo() << "Employee stop working!";
}
void Employee::leaveFactory()
{
    qInfo() << "Employee leave factory!";
}
