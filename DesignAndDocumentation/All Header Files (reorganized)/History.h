#ifndef HISTORY_H
#define HISTORY_H

#include <vector>
#include "Session.h"

class History {
private:
    std::vector<Session> sessions; //stores the sessions (obj's)
public:
    History(); // constructor
    void addSession();
    void deleteSession(int index); // takes an index parameter
    void getSessions();
};

#endif

