#include "pulsereading.h"
#include "src/coherenceindicator.h"

PulseReading::PulseReading(QObject *parent) : QObject(parent)
{
    isActive = false; //default state
}

void PulseReading::startReading()
{
    isActive = true; //when it is active
    emit pulseReadingStarted(); //emits the signal (CHECK THIS)
}

void PulseReading::stopReading()
{
    isActive = false; //when not active
    emit pulseReadingStopped(); //emits the signal (CHECK THIS)
}

/*
void PulseReading::setIndicator(CoherenceIndicator& indicator, int coherenceLevel)
{ //takes reference to a CoherenceIndicator object and int coherence level as args
    indicator.setLevel(coherenceLevel); //sets coherence level using setLevel() from CoherenceIndicator
}
*/
