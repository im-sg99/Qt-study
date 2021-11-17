#include "bomb.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include "Game.h"

extern Game * game;

Bomb::Bomb(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent){

        QPixmap png(":/bomb_already.png");
        QRect a(0,0,37,45); bomb[0]=png.copy(a);
        QRect b(37,0,37,45); bomb[1]=png.copy(b);
        QRect c(74,0,37,45); bomb[2]=png.copy(c);
        QRect d(101,0,37,45); bomb[3]=png.copy(d);
        setPixmap(bomb[0]);

        // 타이머
        QTimer * timer = new QTimer(this);
        connect(timer,SIGNAL(timeout()),this,SLOT(explosion()));
        timer->start(50);

}
void Bomb::explosion(){
    //충돌하는 모든 오브젝트
    //QList<QGraphicsItem *> colliding_items = collidingItems();
    setPos(x(),y());
    //scene()->removeItem(this);
}
