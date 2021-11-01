#include "imagetest.h"
#include <QKeyEvent>

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

void imagetest::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_A){
        if(pos().x()>0)
        setPos(x()-15,y());
        setPixmap(PicChar[2][0]);
    }else if(event->key() == Qt::Key_D){
        if(pos().x() +80 < 900)
        setPos(x()+15,y());
        setPixmap(PicChar[3][0]);
    }else if(event->key() == Qt::Key_W){
        if(pos().y()  > 0)
        setPos(x(),y()-15);
        setPixmap(PicChar[1][0]);
    }else if(event->key() == Qt::Key_S){
        if(pos().y() +80 < 780)
        setPos(x(),y()+15);
        setPixmap(PicChar[0][0]);
    }
}
