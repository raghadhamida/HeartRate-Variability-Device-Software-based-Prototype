#ifndef SESSION_H
#define SESSION_H

#include <QObject>
#include <QTimer>

class Session : public QObject
{
    Q_OBJECT

public:
    explicit Session(QObject *parent = nullptr);
    void start();
    void end();
    void updateMetrics();
    void setInterval(int breathPacerInterval);
    ~Session();



private:
    int metrics[3] = {0, 0, 0};
    int duration;
    int achievement;
    int breathPacerInterval;
    int coherenceScore;
};


#endif // SESSION_H
