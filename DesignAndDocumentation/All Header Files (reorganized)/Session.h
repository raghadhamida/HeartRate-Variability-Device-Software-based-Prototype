#ifndef SESSION_H
#define SESSION_H

#include <QDebug>
#include <QObject>
#include <QTimer>

class Session : public QObject {
    Q_OBJECT

public:
    explicit Session(QObject* parent = nullptr);
    Session(const Session& other);
    Session& operator=(const Session& other);
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
