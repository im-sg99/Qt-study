#ifndef PLAYER_H
#define PLAYER_H
#include <QPixmap>
#include <QGraphicsPixmapItem>
#include <QPainter>
#include <QGraphicsItem>
#include <QWidget>
#include <QTimer>

class Player:public QGraphicsPixmapItem
{
public:
    explicit Player(QGraphicsItem *parent=0);
    void keyPressEvent(QKeyEvent * event);
    void keyReleaseEvent(QKeyEvent * event);
    void FrameImage(int,int);
    void timerEvent();
    void setBomb(QKeyEvent *event);
    void z_Value();

protected:
    QPixmap PicChar[4][7];

private:
    int speed=10;
    QPoint position;
    bool moving_left,moving_right,moving_up,moving_down;
    int y_Pos[13];
};

#endif // PLAYER_H
