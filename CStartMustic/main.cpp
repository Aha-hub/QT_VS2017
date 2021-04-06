#include "CStartMustic.h"
#include <QtWidgets/QApplication>
#include <QTextCodec>
int main(int argc, char *argv[])
{
	QTextCodec::setCodecForLocale(QTextCodec::codecForName("system"));
	QApplication a(argc, argv);
	CStartMustic w;
	w.show();
	return a.exec();
}
