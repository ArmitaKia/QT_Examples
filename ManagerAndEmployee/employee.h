#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <QObject>

class Employee : public QObject
{
    Q_OBJECT
public:
    explicit Employee(QObject *parent = nullptr);

public slots:
    void stopWorking();
    void leaveFactory();

};

#endif // EMPLOYEE_H
