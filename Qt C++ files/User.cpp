#include "user.h"
#include "session.h"

User::User()
{

}

void User::on(){
    if(!isDeviceOn){
        isDeviceOn=true;
        displayMenu();
    }


}
void User::off(){
    if(isDeviceOn){
        isDeviceOn=false;
        isSessionOn=false;
        currentSession.end();
    }

}
void User::displayMenu(){

    //button to start a new session 1
    cout<<"Start a new Session"<<endl;

    //Button to end a new session 2
    cout<<"End current Session"<<endl;

    //Settings 3
    cout<<"Settings"<<endl;

    //Log/History 4
    cout<<"Show Log/History"<<endl;

    // Reset 5
    cout<<"Reset"<<endl;


}
void User::displaySettings(){
    cout<<"Challenge Level"<<endl;
    cout<<"BreadPacer"<<endl;

    currentSession.updateMetrics();

}

void User::selectMenuOption(int option){
    if(option==1){
        isSessionOn=true;
        currentSession = Session();
        currentSession.start();
        history.addSession(currentSession);
    }
    if(option==2){
        if(isSessionOn){
            isSessionOn=false;
            currentSession.end();
        }

    }
    if(option==3){
        displaySettings();

    }
    if(option==4){
        history.getSessions();
    }
    if(option==5){
        vector<Session> sessions = history.getSessions();
        for(int i=0;i<sessions.size();i++){
            // update metrics vector to null
            sessions[i].updateMetrics();
        }

    }

}
void User::selectSession(Session s){
    s.getSummary();
}
void User::sessionDelete(Session s){
    history.deleteSession(s);
}
