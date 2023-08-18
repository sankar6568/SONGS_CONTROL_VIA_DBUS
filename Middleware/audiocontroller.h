#ifndef AUDIOCONTROLLER_H
#define AUDIOCONTROLLER_H

#include <QObject>
// #include <gst/gst.h>
//#include <QDBusAbstractAdaptor>
#include <audiocontroller.h>
#include <QMediaPlayer>
#include <QGraphicsObject>



class AudioController : public QObject
{
    Q_OBJECT

     Q_CLASSINFO("D-Bus Interface", "org.example.AudioControl")
public:

     explicit AudioController(QObject *parent = nullptr);
    //QRectF boundingRect() const;

    // AudioPlayerAdaptor(AudioController *controller);
public slots:
    void play(const QString &songPath);
    void pause(const QString &songPath);
    void nextsong();
    void prevsong();
    void stop(const QString &songPath);
    void playCurrentSong();
signals:

private:
    QMediaPlayer mediaPlayer;
    QStringList songPaths;
    int currentIndex;

};

#endif // AUDIOCONTROLLER_H
