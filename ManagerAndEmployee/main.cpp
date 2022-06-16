#include <QCoreApplication>
#include "manager.h"
#include "employee.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    auto manager = new Manager();
    auto employee = new Employee();

    QObject::connect(manager,&Manager::factoryClosed,employee,&Employee::stopWorking);
    QObject::connect(manager,&Manager::factoryClosed,employee,&Employee::leaveFactory);
    manager->closeFactory();


    return a.exec();
}
