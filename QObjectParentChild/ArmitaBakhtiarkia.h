#ifndef ARMITABAKHTIARKIA_H
#define ARMITABAKHTIARKIA_H

#include <QObject>


class ArmitaBakhtiarkia : public QObject
{
    Q_OBJECT
public:
    explicit ArmitaBakhtiarkia(QObject *parent = nullptr);
    ~ArmitaBakhtiarkia();
};

#endif // ARMITABAKHTIARKIA_H
