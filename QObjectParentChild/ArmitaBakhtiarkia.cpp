#ifndef ARMITABAKHTIARKIA_CPP
#define ARMITABAKHTIARKIA_CPP

#include "ArmitaBakhtiarkia.h"
#include <QDebug>
ArmitaBakhtiarkia::ArmitaBakhtiarkia(QObject *parent)
    : QObject{parent}
{
    qInfo() << this << " Created";
}

ArmitaBakhtiarkia::~ArmitaBakhtiarkia()
{
    qInfo() << this << " Destroyed";
}

#endif // ARMITABAKHTIARKIA_CPP
