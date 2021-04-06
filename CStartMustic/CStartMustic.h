#ifndef _CSTART_MUSIC_H_
#define _CSTART_MUSIC_H_

#include <QMediaPlayer>
#include <QtWidgets/QMainWindow>
#include "ui_CStartMustic.h"
#include <string.h>
#include <QMediaPlaylist>

class CStartMustic : public QMainWindow
{
	Q_OBJECT

public:
	CStartMustic(QWidget *parent = Q_NULLPTR);
private:
	Ui::CStartMusticClass ui;


	QMediaPlayer *player;
	QMediaPlaylist *playlist = NULL;
	QTableWidgetItem *columnHeaderItem0 = NULL;

	/*player->setMedia(QUrl::fromLocalFile(filePath));
	player->setVolume(50);*/

private slots:
	void show1Widget();
	void show2Widget();
	void addMusic();
	void playMusic();
	void nextMusic();
	void prevMusic();
	void upDateSlider(qint64 postion);
	void upDateVlol(int val);
	void clickPlay(int i, int j);
	void upDatePlayTime(qint64 postion);
	QString getTime(int playtime);
};


#endif // !_CSTART_MUSIC_H_

