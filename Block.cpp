#include "Block.h"

Block::Block():QPixmap(),QGraphicsPixmapItem()
{
    QPixmap box(":/Images/box.png");
    QRect rect1(0, 0, 60, 45);
    pixmapblock[0] = box.copy(rect1);
    QRect rect2(60, 0, 60, 45);
    pixmapblock[1] = box.copy(rect2);
    QRect rect3(120, 0, 60, 45);
    pixmapblock[2] = box.copy(rect3);

    QPixmap house(":/Iamge/house.png");
    QRect rect4(0,0,60,90);
    pixmapblock[3] = house.copy(rect4);
    QRect rect5(60,0,60,90);
    pixmapblock[4] = house.copy(rect5);
    QRect rect6(120,0,60,90);
    pixmapblock[5] = house.copy(rect6);

    QPixmap tree(":/Image/tree.png");
    this->pixmapblock[6] =tree;
    QPixmap bush(":/Image/bush.png");
    this->pixmapblock[7]=bush;

}

QPixmap Block::getBlock(int a){

    switch (a) {
    case 1:return pixmapblock[0];
    case 2:return pixmapblock[1];
    case 3:return pixmapblock[2];
    case 4:return pixmapblock[3];
    case 5:return pixmapblock[4];
    case 6:return pixmapblock[5];
    case 7:return pixmapblock[6];
    case 8:return pixmapblock[7];
    }
    return pixmapblock[7];
}

//1.빨간블럭 2.주황블럭 3.박스블럭 4.노란지붕 5.파란지붕 6.빨간지붕 7.나무 8.부쉬
