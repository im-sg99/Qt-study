#include "Player.h"
#include <QKeyEvent>


//아직 안씁니다.
Player::Player(QGraphicsItem *parent):QGraphicsPixmapItem(parent)
{
    QPixmap original(":/Images/DaoMove.png");

    for(int i=0;i<4;i++){
        for(int j=0;j<7;j++){
            QRect rect(j*60, i*60, 60, 60);
            PicChar[i][j]=original.copy(rect);
            PicChar[i][j]=PicChar[i][j].scaled(80,80);
        }
        setPixmap(PicChar[0][0]);


}
}

void Player::getimage(int a,int b,int x,int y){
    setPos(x,y);
    setPixmap(PicChar[a][b]);
}

void Player::Move(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Left){
        if(pos().x()>0)
        setPos(x()-15,y());
        setPixmap(PicChar[2][0]);
    }else if(event->key() == Qt::Key_Right){
        if(pos().x() +60 < 800)
        setPos(x()+15,y());
        setPixmap(PicChar[3][0]);
    }else if(event->key() == Qt::Key_Up){
        if(pos().y()  > 0)
        setPos(x(),y()-15);
        setPixmap(PicChar[1][0]);
    }else if(event->key() == Qt::Key_Down){
        if(pos().y() +60 < 600)
        setPos(x(),y()+15);
        setPixmap(PicChar[0][0]);
    }
}



