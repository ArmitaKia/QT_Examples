#include <QCoreApplication>
#include "ArmitaBakhtiarkia.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    auto parent = new ArmitaBakhtiarkia();
    auto child1 = new ArmitaBakhtiarkia(parent);
    auto child2 = new ArmitaBakhtiarkia(parent);
    auto child1Child1 = new ArmitaBakhtiarkia(child1);
    auto child1Child2 = new ArmitaBakhtiarkia(child1);

    parent->setObjectName("parent");
    child1->setObjectName("child1");
    child2->setObjectName("child2");
    child1Child1->setObjectName("child1Child1");
    child1Child2->setObjectName("child1Child2");

    delete parent;

    qInfo() << "Object deleted!";

    return a.exec();
}
