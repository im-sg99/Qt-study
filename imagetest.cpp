#include "imagetest.h"
#include "bomb.h"
#include <QKeyEvent>
#include <QGraphicsScene>

imagetest::imagetest(QGraphicsItem *parent):QGraphicsPixmapItem(parent)
{
    QPixmap original(":/Images/BazziMove.png");

    for(int i=0;i<4;i++){
        for(int j=0;j<7;j++){
            QRect rect(j*80, i*80, 80, 80);
            PicChar[i][j]=original.copy(rect);
        }
        setPixmap(PicChar[0][0]);
    }
}

void imagetest::timerEvent(){

    if (moving_left) {if(pos().x() > -10){setPos(x()-speed,y());setPixmap(PicChar[2][0]);}}
    else if (moving_right) {if(pos().x() +70 < 900){setPos(x()+speed,y());setPixmap(PicChar[3][0]);}}
    else if (moving_up) {if(pos().y() > -25){setPos(x(),y()-speed);setPixmap(PicChar[1][0]);}}
    else if (moving_down) {if(pos().y() +80 < 780){setPos(x(),y()+speed);setPixmap(PicChar[0][0]);}}
}

void imagetest::keyPressEvent(QKeyEvent *event)
{
    switch(event->key())  {
    case Qt::Key_A : moving_left = true; break;
    case Qt::Key_D : moving_right = true; break;
    case Qt::Key_W : moving_up = true; break;
    case Qt::Key_S : moving_down = true; break;
    }
    timerEvent();
}

void imagetest::keyReleaseEvent(QKeyEvent *event)
{
    switch(event->key())  {
    case Qt::Key_A : moving_left = false; break;
    case Qt::Key_D : moving_right = false; break;
    case Qt::Key_W : moving_up = false; break;
    case Qt::Key_S : moving_down = false; break;
    }
    timerEvent();
}

void imagetest::setBomb(QKeyEvent *event){
    if (event->key() == Qt::Key_Space){

            Bomb * bomb = new Bomb();
            scene()->addItem(bomb);
    }
}
