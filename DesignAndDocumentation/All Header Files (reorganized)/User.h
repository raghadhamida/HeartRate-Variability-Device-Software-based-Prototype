#ifndef USER_H
#define USER_H

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
    void displayGraph();
    void selectMenuOption();
    void selectArrowButton();
private:
    bool isDeviceOn;
    bool isSessionOn;
    const char* menuOptions[3];
};

#endif // USER_H
