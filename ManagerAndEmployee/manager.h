#ifndef MANAGER_H
#define MANAGER_H

#include <QObject>

class Manager : public QObject
{
    Q_OBJECT
public:
    explicit Manager(QObject *parent = nullptr);
    void closeFactory();

signals:
    void factoryClosed();


};

#endif // MANAGER_H
