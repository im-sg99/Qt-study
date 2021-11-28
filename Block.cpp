#include "Block.h"

Block::Block():QPixmap(),QGraphicsPixmapItem()
{
    QPixmap box(":/Images/box.png");
    QRect rect1(0, 0, 40, 45);
    pixmapblock[0] = box.copy(rect1).scaled(60,67);
    QRect rect2(40, 0, 40, 45);
    pixmapblock[1] = box.copy(rect2).scaled(60,67);
    QRect rect3(80, 0, 40, 45);
    pixmapblock[2] = box.copy(rect3).scaled(60,67);

    QPixmap house(":/Images/house.png");
    QRect rect4(0,0,60,90);
    pixmapblock[3] = house.copy(rect4);
    QRect rect5(60,0,60,90);
    pixmapblock[4] = house.copy(rect5);
    QRect rect6(120,0,60,90);
    pixmapblock[5] = house.copy(rect6);

    QPixmap tree(":/Images/tree.png");
    this->pixmapblock[6] =tree.scaled(60,100);
    QPixmap bush(":/Images/bush.png");
    this->pixmapblock[7]=bush;

}

QPixmap Block::getBlock(int block){
    switch (block) {
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

int* Block::GetPixmapInfo(){
    static int BlockArray[]={
            0,	0,	0,	3,	1,	2,	7,	1,	5,	2,	5,	0,	5,
            2,	6,	0,	6,	2,	6,	8,	2,	3,	1,	0,	0,	0,
            1,	3, 2, 3,	1,	2,	7,	1,	5,	2,	5,	1,	5,
            2,	6,	1,	6,	2,	6,	8,	2,	3,	1,	3,	2,	1,
            1,	3,	2,	3,	1,	2,	7,	1,	5,	2,	5,	1,	5,
            8,	7,	8,	7,	0,	7,	8,	0,	8,	7,	8,	7,	8,
            0,	3,	0,	3,	3,	3,	0,	3,	0,	3,	0,	3,	0,
            0,	0,	0,	0,	0,	3,	0,	0,	3,	0,	0,	3,	0,
            3,	0,	3,	0,	0,	0,	3,	0,	3,	0,	3,	0,	3,
            8,	7,	8,	7,	7,	0,	8,	7,	8,	7,	8,	7,	8,
            4,	1,	4,	2,	4,	1,	7,	1,	2,	3,	1,	3,	2,
            1,	2,	3,	1,	3,	2,	8,	6,	1,	6,	2,	6,	1,
            4,	0,	4,	2,	4,	1,	7,	1,	2,	3,	1,	3,	2,
            0,	0,	3,	1,	3,	2,	8,	6,	1,	6,	2,	6,	0,
            4,	0,	4,	2,	4,	1,	7,	1,	2,	3,	0,	0,	0
    };
    return BlockArray;
}

//1.빨간블럭 2.주황블럭 3.박스블럭 4.노란지붕 5.파란지붕 6.빨간지붕 7.나무 8.부쉬
