#include "Player.h"
#include "bomb.h"
#include <QKeyEvent>
#include <QGraphicsScene>

Player::Player(QGraphicsItem *parent):QGraphicsPixmapItem(parent)
{
    QPixmap original(":/Images/BazziMove.png");

    for(int i=0;i<4;i++){
        for(int j=0;j<7;j++){
            QRect rect(j*80, i*80, 80, 80);
            PicChar[i][j]=original.copy(rect);}
        setPixmap(PicChar[0][0]);}

    for(int z=0;z<13;z++) {
        y_Pos[z]=80+z*60; }
}

void Player::timerEvent(){

    if (moving_left) {if(pos().x() > -10){setPos(x()-speed,y());setPixmap(PicChar[2][0]);}}
    else if (moving_right) {if(pos().x() +70 < 900){setPos(x()+speed,y());setPixmap(PicChar[3][0]);}}
    else if (moving_up) {if(pos().y() > -25){setPos(x(),y()-speed);setPixmap(PicChar[1][0]);z_Value();}}
    else if (moving_down) {if(pos().y() +80 < 780){setPos(x(),y()+speed);setPixmap(PicChar[0][0]);z_Value();}}
}

void  Player::keyPressEvent(QKeyEvent *event)
{
    switch(event->key())  {
    case Qt::Key_A : moving_left = true; break;
    case Qt::Key_D : moving_right = true; break;
    case Qt::Key_W : moving_up = true; break;
    case Qt::Key_S : moving_down = true; break;
    }
    timerEvent();
}

void Player::keyReleaseEvent(QKeyEvent *event)
{
    switch(event->key())  {
    case Qt::Key_A : moving_left = false; break;
    case Qt::Key_D : moving_right = false; break;
    case Qt::Key_W : moving_up = false; break;
    case Qt::Key_S : moving_down = false; break;
    }
    timerEvent();
}

void  Player::setBomb(QKeyEvent *event){   //미구현
    if (event->key() == Qt::Key_Space){

            Bomb * bomb = new Bomb();
            scene()->addItem(bomb);
    }    
}

void Player::z_Value(){                                  //위치에 따른 z order 시도

    if(pos().y()<y_Pos[0]) setZValue(0);
    else if(pos().y()<y_Pos[1]) setZValue(1);
    else if(pos().y()<y_Pos[2]) setZValue(2);
    else if(pos().y()<y_Pos[3]) setZValue(3);
    else if(pos().y()<y_Pos[4]) setZValue(4);
    else if(pos().y()<y_Pos[5]) setZValue(5);
    else if(pos().y()<y_Pos[6]) setZValue(6);
    else if(pos().y()<y_Pos[7]) setZValue(7);
    else if(pos().y()<y_Pos[8]) setZValue(8);
    else if(pos().y()<y_Pos[9]) setZValue(9);
    else if(pos().y()<y_Pos[10]) setZValue(10);
    else if(pos().y()<y_Pos[11]) setZValue(11);
    else if(pos().y()<y_Pos[12]) setZValue(12);


}
