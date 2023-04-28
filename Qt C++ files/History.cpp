#include "history.h"

// Constructor initializes the sessions array
History::History() : sessions(QVector<Session>()){
    // Set the sessions array to an empty vector
    sessions = QVector<Session>();
}

// Implementation of addSession method
void History::addSession() {
    // Create a new session object
    Session newSession;
    // Add the new session object to the sessions vector
    sessions.append(newSession);
}

// Implementation of deleteSession method
void History::deleteSession(int sessionIndex) {
    // Check if the session index is valid
    if (sessionIndex < 0 || sessionIndex >= sessions.size()) {
        qDebug() << "Invalid session index.";
        return;
    }
    // Remove the session at the specified index from the sessions vector
    sessions.remove(sessionIndex);
}


// Implementation of getSessions method
// Get the sessions from the history object
QVector<Session> History::getSessions()  {
    return sessions;
}
