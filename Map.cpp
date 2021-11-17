#include "Map.h"

Map::Map():QPixmap(),QGraphicsPixmapItem()
{

    //tile이미지를 5개로 분할 번호순으로 그린블럭,진한그린블럭,그레이블럭,센터라인블럭,횡단보도블럭
    QPixmap original(":/Images/tile.png");
    QRect rect1(0, 0, 60, 60);
    PicMap[0]= original.copy(rect1);
    QRect rect2(60, 0, 60, 60);
    PicMap[1] = original.copy(rect2);
    QRect rect3(120, 0, 60, 60);
    PicMap[2] = original.copy(rect3);
    QRect rect4(180, 0, 60, 60);
    PicMap[3] = original.copy(rect4);
    QRect rect5(240, 0, 60, 60);
    PicMap[4] = original.copy(rect5);

}

QPixmap Map::getTile(int a){

    switch (a) {
    case 1:return PicMap[0];
    case 2:return PicMap[1];
    case 3:return PicMap[2];
    case 4:return PicMap[3];
    case 5:return PicMap[4];
    }
    return PicMap[0];
}
