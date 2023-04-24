#include "session.h"

//constructor initializing private members
Session::Session(QObject *parent)
    : QObject(parent)
{
    breathPacerInterval = 10;
    duration = 0;
    achievement = 0;
    metrics[0] = 0;
    metrics[1] = 0;
    metrics[2] = 0;
}

Session::~Session(){}//destructor

//function to initialize and start the session timer
void Session::start() {
    QTimer* timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, [this]() {
        duration += 5;
        coherenceScore = calculateCoherenceScore(); // Calculate coherence score
        qDebug() << "Coherence Score: " << coherenceScore;
        updateMetrics();
        if (duration >= 300) { // End session after 5 minutes
            timer->stop();
            end();
        } else {
            timer->start(5000); // Restart timer for next update in 5 seconds
        }
    });
    timer->start(5000); // Start the timer for the first update
}

//updating the metrics on the screen every 5 seconds
void Session::updateMetrics() {
    int newMetrics[3] = {0, 0, 0}; // Initialize new metrics to zero
    newMetrics[0] = coherenceScore;
    newMetrics[1] = duration;
    newMetrics[2] = metrics[0] + metrics[1] + metrics[2]; // Add up current metrics for achievement
    // Sum up new metrics with old metrics
    metrics[0] += newMetrics[0];
    metrics[1] += newMetrics[1];
    metrics[2] += newMetrics[2];
    // Update Achievement
    achievement = metrics[0] + metrics[1] + metrics[2];
}

//setting the breath pacer interval
void Session::setInterval(int breathPacerInterval){
    this->breathPacerInterval = breathPacerInterval;
}

//ending the session
void Session::end() {
    qDebug() << "Session ended. Final Metrics:";
    qDebug() << "Coherence Score: " << metrics[0];
    qDebug() << "Session Length: " << metrics[1];
    qDebug() << "Achievement Score: " << metrics[2];
}
