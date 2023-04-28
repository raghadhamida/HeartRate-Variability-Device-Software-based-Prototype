#ifndef USER_H
#define USER_H

#include "session.h"
#include "history.h"
#include <QDebug>
//this is the user interface
//it has the suggested menu screen and on/off functions-
//-as well as the menu and arrow button functionality from the project specs

class User
{
public:
    User();
    void on();
    void off();
    void displayMenu();
    void displaySettings();
    void displayGraph();
    void selectMenuOption(int);
    void selectArrowButton();
    void selectSession(Session s);
private:
    bool isDeviceOn;
    bool isSessionOn;
    const char* menuOptions[3];
    Session currentSession;
    History history;
};

#endif // USER_H
