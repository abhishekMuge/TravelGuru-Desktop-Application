#ifndef USERCONTROLLER_H
#define USERCONTROLLER_H

#include <QObject>

class UserController : public QObject
{
    Q_OBJECT
public:
    explicit UserController(QObject *parent = nullptr);

signals:
};

#endif // USERCONTROLLER_H
