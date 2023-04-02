class Session {
private:
	int[] metrics; //to store the metrics
	int duration; 
	int challengeLevel; 
	int interval; //the breath pacer interval
public:
	void start(); //(these two funcs are-
	void end(); //-for starting and ending session)
	void updateMetrics(); 
	void setChallengeLevel(); 
	void setInterval(); 
	void getSummary();
};
