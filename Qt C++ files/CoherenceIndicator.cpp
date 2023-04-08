class CoherenceIndicator
{
private:
    int coherenceLevel;
    QLed *led;  //the LED light widget
public:
    CoherenceIndicator(QLed *ledWidget) : coherenceLevel(0), led(ledWidget)
    {
        //constructor initializes LED widget to off
        led->setColor(Qt::black);
        led->turnOff();
    }
    
    void setLevel(int level)
    {
        coherenceLevel = level;
        setLED();
    }
    
    void setLED() {
        //set LED light based on coherence level
        if (coherenceLevel <= 33)
        {
            led->setColor(Qt::red);
        }
        else if (coherenceLevel <= 66)
        {
            led->setColor(Qt::blue);
        }
        else
        {
            led->setColor(Qt::green);
        }
        led->turnOn();
    }
};
