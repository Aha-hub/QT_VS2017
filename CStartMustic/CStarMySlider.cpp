#include "CStarMySlider.h"
#include <QDebug>
CStarMySlider::CStarMySlider(QWidget * parent)
{

}

CStarMySlider::~CStarMySlider()
{
}

namespace {

}
void CStarMySlider::mousePressEvent(QMouseEvent * ev)
{
	/*
	// 获取当前点击位置,得到的这个鼠标坐标是相对于当前QSlider的坐标
	// Returns the position of the mouse cursor, relative to the widget that received the event.
	// If you move the widget as a result of the mouse event, use the global position returned by 
	// globalPos() to avoid a shaking motion.
	*/
	int currentX = ev->pos().x();

	//获取当前点击的位置占整个Slider的百分比
	double per = currentX * 1.0 / this->width();

	// 利用算得的百分比得到具体数字
	int value = per * (this->maximum() - this->minimum()) + this->minimum();

	qDebug() << value;

	// 设定滑动条位置
	this->setValue(value);

	// 滑动条移动事件等事件也用到了mousePressEvent,加这句话是为了不对其产生影响，
	// 是的Slider能正常相应其他鼠标事件
	QSlider::mousePressEvent(ev);

}

bool CStarMySlider::eventFilter(QObject * obj, QEvent * event)
{
	slider = new CStarMySlider{};
	slider->installEventFilter(this);

	if (obj == slider)
	{
		if (event->type() == QEvent::MouseButtonPress)           //判断类型
		{
			QMouseEvent *mouseEvent = static_cast<QMouseEvent *>(event);
			if (mouseEvent->button() == Qt::LeftButton) //判断左键
			{
				int dur = slider->maximum() - slider->minimum();
				int pos = slider->minimum() + dur * ((double)mouseEvent->x() / slider->width());
				if (pos != slider->sliderPosition())
				{
					slider->setValue(pos);
				}
			}
		}
	}
	return QObject::eventFilter(obj, event);
}
