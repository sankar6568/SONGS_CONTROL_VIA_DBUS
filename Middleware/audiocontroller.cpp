//#include "audiocontroller.h"
//#include <qdebug.h>
//#include <QDBusConnection>
//#include <QDBusMessage>
//#include <QDBusInterface>
//#include <qaudiooutput.h>
//#include <qmediaplayer.h>
//#include <QMediaPlayer>

//AudioController::AudioController(QObject *parent)
//    : QObject{parent}
//{
// QDBusConnection::sessionBus().registerObject("/audio", this, QDBusConnection::ExportAllSlots);
////    songPaths << "/C:/Users/sankar/Music/Senorita.mp3" << "/home/navii/song2.mp3" << "/home/navii/song3.mp3"
////              << "/home/navii/song4.mp3" << "C:/Users/sankar/Music/Senorita.mp3";
////     mediaPlayer.setMedia(QUrl::fromLocalFile(songPaths[currentIndex]));
//    qDebug()<<"AudioController initialized";
//}

//void AudioController::play(const QString &songPath)
//{

//    qDebug()<<"string get from play"<<songPath;
//    mediaPlayer.setMedia(QUrl::fromLocalFile(songPath));
//    mediaPlayer.play();

//}

//void AudioController::pause(const QString &songPath)
//{
//     qDebug()<<"string get from pause:"<<songPath;
//    mediaPlayer.setMedia(QUrl::fromLocalFile(songPath));
//   mediaPlayer.pause();
////   qDebug()<<"string get from pause";

//}

//void AudioController::nextsong()
//{
//   if (!songPaths.isEmpty())
//   {
//       currentIndex = (currentIndex + 1) % songPaths.size();
//       playCurrentSong();
//   }
//   qDebug() << "Playing next song";
//}

//void AudioController::prevsong()
//{
//   if (!songPaths.isEmpty())
//   {
//       currentIndex = (currentIndex - 1 + songPaths.size()) % songPaths.size();
//       playCurrentSong();
//   }
//   qDebug() << "Playing previous song";
//}
//void AudioController::playCurrentSong()
//{
//   mediaPlayer.setMedia(QUrl::fromLocalFile(songPaths[currentIndex]));
//   mediaPlayer.play();
//}

//void AudioController::stop(const QString &songPath)
//{

//   mediaPlayer.setMedia(QUrl::fromLocalFile(songPath));
//   mediaPlayer.stop();
//}
#include "audiocontroller.h"
#include <qdebug.h>
#include <QDBusConnection>
#include <QDBusMessage>
#include <QDBusInterface>
#include <qaudiooutput.h>
#include <qmediaplayer.h>
#include <QMediaPlayer>

AudioController::AudioController(QObject *parent)
    : QObject{parent}
{
    QDBusConnection::sessionBus().registerObject("/audio", this, QDBusConnection::ExportAllSlots);
    qDebug() << "AudioController initialized";
}

void AudioController::play(const QString &songPath)
{
    qDebug() << "string get from play" << songPath;


    // If paused, resume playback; otherwise, start playing the song
    if (mediaPlayer.state() == QMediaPlayer::PausedState) {
        mediaPlayer.play();
    } else {
        mediaPlayer.setMedia(QUrl::fromLocalFile(songPath));
        mediaPlayer.play();
    }
}

void AudioController::pause(const QString &songPath)
{
    qDebug() << "string get from pause:" << songPath;

    // If playing, pause the song; if already paused, do nothing
    if (mediaPlayer.state() == QMediaPlayer::PlayingState) {
        mediaPlayer.pause();
    }
}

void AudioController::stop(const QString &songPath)
{
    qDebug() << "string get from stop:" << songPath;

    // Stop the playback
    mediaPlayer.stop();
}

void AudioController::nextsong()
{
    if (!songPaths.isEmpty())
    {
        currentIndex = (currentIndex + 1) % songPaths.size();
        playCurrentSong();
        qDebug() << "Playing next song";
    }
}

void AudioController::prevsong()
{
    if (!songPaths.isEmpty())
    {
        currentIndex = (currentIndex - 1 + songPaths.size()) % songPaths.size();
        playCurrentSong();
        qDebug() << "Playing previous song";
    }
}

void AudioController::playCurrentSong()
{
    mediaPlayer.setMedia(QUrl::fromLocalFile(songPaths[currentIndex]));
    mediaPlayer.play();
}
