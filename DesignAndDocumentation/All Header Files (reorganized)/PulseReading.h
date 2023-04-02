class PulseReading { 
//responsible for reading the pulse.
//the bool is the symbol indicating an active pulse reading
//has functions to start & stop as well as to indicate output
private:
	bool isActive;
public:
	void startReading();
	void stopReading(); 
	void setIndicator();
};
