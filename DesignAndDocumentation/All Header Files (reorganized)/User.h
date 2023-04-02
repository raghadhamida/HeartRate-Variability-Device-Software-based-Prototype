class User { 
//this is the user interface
//it has the suggested menu screen and on/off functions-
//-as well as the menu and arrow button functionality from the project specs
private:
	bool isDeviceOn;
	bool isSessionOn; 
	string[] menuOptions;
public:
	void on(); 
	void off(); 
	void displayMenu(); 
	void displayGraph(); 
	void selectMenuOption();
	void selectArrowButton();
};
