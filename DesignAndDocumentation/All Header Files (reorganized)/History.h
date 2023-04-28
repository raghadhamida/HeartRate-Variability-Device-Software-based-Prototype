#ifndef HISTORY_H
#define HISTORY_H

#include <vector>
#include <QDebug>
#include "session.h"

class History
{
public:
    History(); // constructor
    void addSession();
    void deleteSession(int index); // takes an index parameter
    QVector<Session> getSessions();
private:
    QVector<Session> sessions; //stores the sessions (obj's)
};

#endif // HISTORY_H
