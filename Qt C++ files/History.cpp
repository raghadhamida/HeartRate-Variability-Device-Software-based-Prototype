#include "history.h"

// Constructor initializes the sessions array
History::History() {
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
void History::getSessions() {
    // Check if there are any sessions to display
    if (sessions.size() == 0) {
        qDebug() << "No sessions to display.";
        return;
    }
    // Display each session in the sessions vector
    for (int i = 0; i < sessions.size(); i++) {
        qDebug() << "Session " << i+1 << ":";
        sessions[i].displaySession();
    }
}

