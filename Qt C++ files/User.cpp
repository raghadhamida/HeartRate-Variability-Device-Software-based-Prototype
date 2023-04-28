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
    qDebug() <<"Start a new Session";

    //Button to end a new session 2
    qDebug() <<"End current Session";

    //Settings 3
    qDebug() <<"Settings";

    //Log/History 4
    qDebug() <<"Show Log/History";

    // Reset 5
    qDebug() <<"Reset";


}
void User::displaySettings(){
    qDebug() <<"Challenge Level";
    qDebug() <<"BreadPacer";

    currentSession.updateMetrics();

}

void User::selectMenuOption(int option){
    if(option==1){
        isSessionOn=true;
        currentSession = Session();
        currentSession.start();
        history.addSession();
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
        QVector<Session> sessions = history.getSessions();
        for(int i=0;i<sessions.size();i++){
            // update metrics vector to null
            sessions[i].updateMetrics();
        }

    }

}
void User::selectSession(Session s){
    s.end();
}
