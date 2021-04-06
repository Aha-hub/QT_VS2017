#ifndef _CSTART_QTABWIDGET_H_
#define _CSTART_QTABWIDGET_H_

#include <QObject>
#include <QSlider>
#include <QMouseEvent>

class CStarMySlider : public QSlider
{
public:
	CStarMySlider(QWidget *parent = nullptr);
	~CStarMySlider();

private:

	CStarMySlider* slider;

	//************************************
	// Method:    mousePressEvent
	// FullName:  CStarMySlider::mousePressEvent
	// Access:    private 
	// Returns:   void
	// Qualifier: ÷ÿ–¥ mousePressEvent ∑Ω∑®
	// Parameter: QMouseEvent * ev
	//************************************
	void mousePressEvent(QMouseEvent *ev);
	bool eventFilter(QObject *obj, QEvent *event);
	
};

#endif // _CSTART_QTABWIDGET_H_