#ifndef IMAGETEST_H
#define IMAGETEST_H
#include <QPixmap>
#include <QGraphicsPixmapItem>
#include <QPainter>
#include <QGraphicsItem>
#include <QWidget>

class imagetest:public QGraphicsPixmapItem
{
public:
    explicit imagetest(QGraphicsItem *parent=0);
    void keyPressEvent(QKeyEvent * event);


protected:
    QPixmap PicChar[4][7];
};

#endif // IMAGETEST_H
