#ifndef PULSEREADING_H
#define PULSEREADING_H

#include <QObject>

class PulseReading : public QObject
{
    Q_OBJECT
private:
    bool isActive;
public:
    explicit PulseReading(QObject *parent = nullptr);
    void startReading();
    void stopReading();
    void setIndicator();
signals:
    void pulseReadingStarted();
    void pulseReadingStopped();
};

#endif // PULSEREADING_H
