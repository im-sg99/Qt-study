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



//플레이어 움직임 프레임 변화 참고용
/* void MainWindow::player1Action(){
    player1->moveinterval++;
        if(player1->moveinterval==player1->stepLength){
            player1->moveinterval=0;
            switch(player1->direct){
                case 0:
                    if(!player1->onestepstop)    player1->playerPic=(player1->playerPic+1)%6;
                    else    player1->playerPic=0;
                break;
                case 1:
                    if(!player1->onestepstop)    player1->playerPic=(player1->playerPic+1)%6+6;
                    else    player1->playerPic=6;
                break;
                case 2:
                    if(!player1->onestepstop)    player1->playerPic=(player1->playerPic+1)%6+12;
                    else    player1->playerPic=12;
                break;
                case 3:
                    if(!player1->onestepstop)    player1->playerPic=(player1->playerPic+1)%6+18;
                    else    player1->playerPic=18;
                break;
            }
        }

        player2->moveinterval++;
            if(player2->moveinterval==player2->stepLength){
                player2->moveinterval=0;
                switch(player2->direct){
                    case 0:
                        if(!player2->onestepstop)    player2->playerPic=(player2->playerPic+1)%6+24;
                        else    player2->playerPic=24;
                    break;
                    case 1:
                        if(!player2->onestepstop)    player2->playerPic=(player2->playerPic+1)%6+30;
                        else    player2->playerPic=30;
                    break;
                    case 2:
                        if(!player2->onestepstop)    player2->playerPic=(player2->playerPic+1)%6+36;
                        else    player2->playerPic=36;
                    break;
                    case 3:
                        if(!player2->onestepstop)    player2->playerPic=(player2->playerPic+1)%6+42;
                        else    player2->playerPic=42;
                    break;
                }
            }*/
