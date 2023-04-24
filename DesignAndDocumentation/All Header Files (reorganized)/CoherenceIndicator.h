#ifndef COHERENCEINDICATOR_H
#define COHERENCEINDICATOR_H

#include <string>
#include <QTimer>
//this class indicates the coherence level of the user
class CoherenceIndicator
{
public:
    CoherenceIndicator(std::string ledWidget);
    void setLevel(int level);
    void setLED(); //light that changes depending on coherence level

private:
    int coherenceLevel;
    std::string led;  //the LED light widget
};

#endif // COHERENCEINDICATOR_H
