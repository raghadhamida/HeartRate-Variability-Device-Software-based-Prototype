#ifndef HISTORY_H
#define HISTORY_H

#include <vector>
#include "session.h"

class History
{
public:
    History(); // constructor
    void addSession();
    void deleteSession(int index); // takes an index parameter
    void getSessions();
private:
    std::vector<Session> sessions; //stores the sessions (obj's)
};

#endif // HISTORY_H
