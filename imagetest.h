#ifndef IMAGETEST_H
#define IMAGETEST_H
#include <QPixmap>
#include <QGraphicsPixmapItem>
#include <QPainter>
#include <QGraphicsItem>
#include <QWidget>
#include <QTimer>

class imagetest:public QGraphicsPixmapItem
{
public:
    explicit imagetest(QGraphicsItem *parent=0);
    void keyPressEvent(QKeyEvent * event);
    void keyReleaseEvent(QKeyEvent * event);
    void FrameImage(int,int);
    void timerEvent();

protected:
    QPixmap PicChar[4][7];

private:
    int speed=10;
    QPoint position;
    bool moving_left,moving_right,moving_up,moving_down;
};

#endif // IMAGETEST_H
