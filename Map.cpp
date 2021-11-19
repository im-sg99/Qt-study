#include "Map.h"

Map::Map():QPixmap(),QGraphicsPixmapItem()
{
    //tile이미지를 5개로 분할 번호순으로 그린블럭,진한그린블럭,그레이블럭,센터라인블럭,횡단보도블럭

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


int* Map::GetPixmapInfo() {

}
