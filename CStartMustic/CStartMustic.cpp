#include "CStartMustic.h"
#include <QString>
#include <QFileDialog>
#include <QDebug>
#include <QMediaPlayer>
#include <QUrl>
#include <QTime>
#include <QSlider>
#include <string>
#include <QListWidget>
#include <sstream>

CStartMustic::CStartMustic(QWidget *parent)
	: QMainWindow(parent)
{

	
	player = new QMediaPlayer(this);
	playlist = new QMediaPlaylist(this);
	columnHeaderItem0 = new QTableWidgetItem();
	ui.setupUi(this);

	ui.tableWidgetLocal->setRowCount(0);

	connect(ui.localMusic_Btn, &QPushButton::clicked, this, &CStartMustic::show1Widget);	// 切换本地音乐
	connect(ui.onlineMusic_btn, &QPushButton::clicked, this, &CStartMustic::show2Widget);	// 切换在线音乐
	connect(ui.playpausBtn, &QPushButton::clicked, this, &CStartMustic::playMusic);			// 暂停/播放
	connect(ui.next_Btn, &QPushButton::clicked, this, &CStartMustic::nextMusic);			// 下一曲
	connect(ui.previous_Btn, &QPushButton::clicked, this, &CStartMustic::prevMusic);		// 上一曲
	connect(ui.addMusic_Btn, &QPushButton::clicked, this, &CStartMustic::addMusic);			// 添加音乐


	connect(ui.tableWidgetLocal, &QTableWidget::cellDoubleClicked, this, &CStartMustic::clickPlay); // 点击播放音乐、

	connect(ui.timeSlider, &QSlider::sliderMoved, player, &QMediaPlayer::setPosition);		// 进度条控制音乐进度

	connect(ui.vloumeSlider, &QSlider::sliderMoved, this, &CStartMustic::upDateVlol);		// 声音进度条控制声音大小
	connect(player, &QMediaPlayer::positionChanged, this, &CStartMustic::upDatePlayTime);	// 
	connect(player, &QMediaPlayer::durationChanged, this, &CStartMustic::upDateSlider);		// 音乐进度更新进度条更新
	connect(player, &QMediaPlayer::durationChanged, this, &CStartMustic::getTime);
}

//************************************
// Method:    show1Widget
// FullName:  CStartMustic::show1Widget
// Access:    private 
// Returns:   void
// Qualifier: 
//************************************
void CStartMustic::show1Widget()
{
	ui.tabWidget->setCurrentIndex(0);
}

void CStartMustic::show2Widget()
{
	ui.tabWidget->setCurrentIndex(1);
}

void CStartMustic::addMusic()
{

	int i, j=0, k;
	QStringList fileList = QFileDialog::getOpenFileNames(this, tr(""),
		"E:\\Music", tr("*.mp3;;*.*"));

	if (ui.tableWidgetLocal->rowCount() < fileList.count())
	{
		ui.tableWidgetLocal->setRowCount(fileList.count());
	}
	for (i = 0; i < fileList.count(); i++)
	{
		QString listi = fileList[i];
		playlist->addMedia(QUrl(listi));
		player->setMedia(playlist);
		QString musicName, singerName;
		int head, midd, tail;
		head = listi.lastIndexOf("/") + 1;
		tail = listi.indexOf(".");
		listi = listi.mid(head, tail - head);
		midd = listi.indexOf("-");
		musicName = listi.left(midd - 1);
		singerName = listi.mid(midd + 2);

		ui.tableWidgetLocal->setItem(i, 0, new QTableWidgetItem());
		QTableWidgetItem *wigetitem = ui.tableWidgetLocal->item(i, 0);
		wigetitem->setText(singerName);
		wigetitem->setFlags(wigetitem->flags() & ~Qt::ItemIsEditable);
		wigetitem->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);

		ui.tableWidgetLocal->setItem(i, 1, new QTableWidgetItem());
		wigetitem = ui.tableWidgetLocal->item(i, 1);
		wigetitem->setText(musicName);
		wigetitem->setFlags(wigetitem->flags() & ~Qt::ItemIsEditable);
		wigetitem->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);

		ui.tableWidgetLocal->setItem(i, 2, new QTableWidgetItem());
		wigetitem = ui.tableWidgetLocal->item(i, 2);
		playlist->setCurrentIndex(i);
		wigetitem->setText(getTime(player->duration()));
		qDebug() << player->duration();
		wigetitem->setFlags(wigetitem->flags() & ~Qt::ItemIsEditable);
		wigetitem->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);

		ui.tableWidgetLocal->setSelectionBehavior(QAbstractItemView::SelectRows);
	}
}

//************************************
// Method:    playMusic
// FullName:  CStartMustic::playMusic
// Access:    private 
// Returns:   void
// Qualifier: 播放音乐
//************************************
void CStartMustic::playMusic()
{
	if (player->state() == QMediaPlayer::PlayingState )
	{
		// qDebug() << "1111111111111111111111111111111111111111111111";
		ui.playpausBtn->setText(QString::fromLocal8Bit("播放"));
		player->pause();
	}
	else if(player->state() == QMediaPlayer::PausedState )
	{
		// qDebug() << "22222222222222222222222222222222222222222222222222";
		ui.playpausBtn->setText(QString::fromLocal8Bit("暂停"));
		player->play();
	}
	else {
		player->play();
	}
}

//************************************
// Method:    getduration
// FullName:  CStartMustic::getduration
// Access:    private 
// Returns:   void
// Qualifier: 获取，显示 音乐播放时间
// Parameter: qint64 playtime
//************************************


void CStartMustic::nextMusic()
{
	int currentIndex = playlist->currentIndex();
	if (++currentIndex == playlist->mediaCount()) currentIndex = 0;
	playlist->setCurrentIndex(currentIndex);
	player->play();
}


// 上一首
void CStartMustic::prevMusic()
{
	int currentIndex = playlist->currentIndex();
	// qDebug() << currentIndex << "-------------------------------------------------------------";
	if (--currentIndex == -1) 
		currentIndex = playlist->mediaCount()-1;
	playlist->setCurrentIndex(currentIndex);
	player->play();
}



// 更新音量
void CStartMustic::upDateVlol(int val)
{
	player->setVolume(val);
	ui.showVolume->setText(QString("%1").arg(val));
}

void CStartMustic::clickPlay(int i, int j)
{
	// qDebug() << i << " " << j;	// i
	int currentIndex = i;
	playlist->setCurrentIndex(currentIndex);
	player->play();
	// qDebug() << player->metaData(QStringLiteral("Title")).toString();
}


QString CStartMustic::getTime(int playtime)
{
	int h, m, s;
	playtime /= 1000;  // 获得的时间是以毫秒为单位的
	h = playtime / 3600;
	m = (playtime - h * 3600) / 60;
	s = playtime - h * 3600 - m * 60;
	qDebug() << playtime << "----------------";
	return QString("%1:%2").arg(m).arg(s);
}

void CStartMustic::upDateSlider(qint64 postion)
{

	int currentIndex = playlist->currentIndex();
	ui.timeSlider->setRange(0, postion);	// 进度条
	columnHeaderItem0 = ui.tableWidgetLocal->item(currentIndex, 0);
	ui.musicNameLable->setText(columnHeaderItem0->text());   // 音乐名称
	ui.showTime->setText(getTime(postion));
}

void CStartMustic::upDatePlayTime(qint64 postion)
{
	ui.timeSlider->setValue(postion);
	// qDebug() << ui.timeSlider->value();
	ui.showTime2->setText(getTime(ui.timeSlider->value()));
}