#ifndef PLAYER_H
#define PLAYER_H
#include <QPixmap>
#include <QGraphicsPixmapItem>
#include <QGraphicsItem>
#include <QWidget>
//아직 안씁니다.
class Player:public QGraphicsPixmapItem
{
public:
    explicit Player(QGraphicsItem *parent=0);
    void Move(QKeyEvent * event);
    void getimage(int a,int b,int x,int y);


protected:
    QPixmap PicChar[4][7];
};

#endif // PLAYER_H
