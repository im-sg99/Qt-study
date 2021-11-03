#include "Block.h"

Block::Block():QPixmap(),QGraphicsPixmapItem()
{
    QPixmap box(":/Images/box.png");
    QRect rect1(0, 0, 60, 45);
    redBlock = box.copy(rect1);
    QRect rect2(60, 0, 60, 45);
    yellowBlock = box.copy(rect2);
    QRect rect3(120, 0, 60, 45);
    boxBlock = box.copy(rect3);

    QPixmap house(":/Iamge/house.png");
    QRect rect4(0,0,60,90);
    yellowHouse = house.copy(rect4);
    QRect rect5(60,0,60,90);
    blueHouse = house.copy(rect5);
    QRect rect6(120,0,60,90);
    redHouse = house.copy(rect6);

    QPixmap tree(":/Image/tree.png");
    this->tree =tree;
    QPixmap bush(":/Image/bush.png");
    this->bush=bush;

}


QPixmap Block::getBlock(int a){

    switch (a) {
    case 1:
        return redBlock;
    case 2:
        return yellowBlock;
    case 3:
        return boxBlock;
    case 4:
        return yellowHouse;
    case 5:
        return blueHouse;
    case 6:
        return redHouse;
    case 7:
        return tree;
    case 8:
        return bush;

    }
    return bush;
}



/*

void MainWindow::createBlock(){
    int length = 0;

        for(int obji=0;obji<16;obji++){
            for(int objj=0;objj<16;objj++){
                if(length < blockCount && obj[objj][obji]!='0'){
                    blocks[length]->cur_x = obji*50;
                    blocks[length]->cur_y = objj*50;
                    blocks[length]->type = 0;
                    blocks[length]->mode = 0;
                    blocks[length]->close();
                    if(obj[objj][obji]=='1')                    blocks[length]->itemPic = 3;
                    else if(obj[objj][obji]=='2')               blocks[length]->itemPic = 4;
                    else if(obj[objj][obji]=='3')               blocks[length]->itemPic = 5;

                    length++;
                }
            }
        }
        for(int i=length;i<blockCount;i++){
            blocks[i]->cur_x = 1000;
            blocks[i]->cur_y = 1000;
            blocks[i]->type = 0;
            blocks[i]->mode = 0;
            blocks[i]->itemPic = 3;
            blocks[i]->close();
        }
}

 */
