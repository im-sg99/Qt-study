#include "Game.h"

Game::Game(){

    //타이틀 제목 설정
    this->setWindowTitle("Crazy Arcade");
    this->setWindowIcon(QIcon(":/Images/icon.png"));

    // 화면크기 설정
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,900,780);
    //오브젝트가 화면을 넘어가도 스크롤이 안생기게 하기
    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(900,780);

    AddMap();
    AddPlayer();
    AddBlock();

}

void Game::AddMap(){
    map =new Map();
    Blige();
}

void Game::AddPlayer(){   
    imagetest1 = new imagetest();
    imagetest1->setPos(350,250);
    imagetest1->setFlag(QGraphicsItem::ItemIsFocusable);
    imagetest1->setFocus();
    scene->addItem(imagetest1);
}

void Game::AddBlock(){  //블록을 만들어야 되는데 오류가 남

    int BlockArray[15][13] =
    {
        {	0,	0,	0,	3,	1,	2,	7,	1,	5,	2,	5,	0,	5   },
        {	2,	6,	0,	6,	2,	6,	8,	2,	3,	1,	0,	0,	0	},
        {	1,	3,  2,	3,	1,	2,	7,	1,	5,	2,	5,	1,	5   },
        {	2,	6,	1,	6,	2,	6,	8,	2,	3,	1,	3,	2,	1	},
        {	1,	3,	2,	3,	1,	2,	7,	1,	5,	2,	5,	1,	5	},
        {	8,	7,	8,	7,	0,	7,	8,	0,	8,	7,	8,	7,	8	},
        {	0,	3,	0,	3,	3,	3,	0,	3,	0,	3,	0,	3,	0	},
        {	0,	0,	0,	0,	0,	3,	0,	0,	3,	0,	0,	3,	0	},
        {	3,	0,	3,	0,	0,	0,	3,	0,	3,	0,	3,	0,	3	},
        {	8,	7,	8,	7,	7,	0,	8,	7,	8,	7,	8,	7,	8	},
        {	4,	1,	4,	2,	1,	1,	7,	1,	2,	3,	1,	3,	2	},
        {	1,	2,	3,	1,	6,	2,	8,	6,	1,	6,	2,	1,	1	},
        {	4,	0,	4,	2,	1,	1,	7,	1,	2,	3,	1,	3,	2	},
        {	0,	0,	3,	1,	6,	2,	8,	6,	1,	6,	2,	1,	0	},
        {	4,	0,	4,	2,	1,	1,	7,	1,	2,	3,	0,	0,	0	}
    };

 /*    QGraphicsPixmapItem* blockItem[15][13];
   for(int i=0;i<15;i++){
        for (int j=0;j<13 ;j++ ) {
            if(0!=BlockArray[i][j]){
            pixmapItem[i][j]=scene->addPixmap(block->getBlock(BlockArray[i][j]));
            pixmapItem[i][j]->setPos(i*60,j*60);
            }
            }
        }
    }

    blockItem[0][1]=scene->addPixmap(block->getBlock(1));
    blockItem[0][1]->setPos(0,60);*/
}

//빌리지 타일 구성
void Game::Blige(){
    QGraphicsPixmapItem* pixmapItem[15][13];
    pixmapItem[0][0] = scene->addPixmap(map->getTile(2));
    pixmapItem[1][0] = scene->addPixmap(map->getTile(1));
    pixmapItem[2][0] = scene->addPixmap(map->getTile(2));
    pixmapItem[3][0] = scene->addPixmap(map->getTile(1));
    pixmapItem[4][0] = scene->addPixmap(map->getTile(2));
    pixmapItem[5][0] = scene->addPixmap(map->getTile(1));
    pixmapItem[6][0] = scene->addPixmap(map->getTile(3));
    pixmapItem[7][0] = scene->addPixmap(map->getTile(4));
    pixmapItem[8][0] = scene->addPixmap(map->getTile(3));
    pixmapItem[9][0] = scene->addPixmap(map->getTile(1));
    pixmapItem[10][0] = scene->addPixmap(map->getTile(2));
    pixmapItem[11][0] = scene->addPixmap(map->getTile(1));
    pixmapItem[12][0] = scene->addPixmap(map->getTile(2));
    pixmapItem[13][0] = scene->addPixmap(map->getTile(1));
    pixmapItem[14][0] = scene->addPixmap(map->getTile(2));
    //맵 첫번째 줄
    pixmapItem[0][1] = scene->addPixmap(map->getTile(1));
    pixmapItem[1][1] = scene->addPixmap(map->getTile(2));
    pixmapItem[2][1] = scene->addPixmap(map->getTile(1));
    pixmapItem[3][1] = scene->addPixmap(map->getTile(2));
    pixmapItem[4][1] = scene->addPixmap(map->getTile(1));
    pixmapItem[5][1] = scene->addPixmap(map->getTile(2));
    pixmapItem[6][1] = scene->addPixmap(map->getTile(3));
    pixmapItem[7][1] = scene->addPixmap(map->getTile(4));
    pixmapItem[8][1] = scene->addPixmap(map->getTile(3));
    pixmapItem[9][1] = scene->addPixmap(map->getTile(2));
    pixmapItem[10][1] = scene->addPixmap(map->getTile(1));
    pixmapItem[11][1] = scene->addPixmap(map->getTile(2));
    pixmapItem[12][1] = scene->addPixmap(map->getTile(1));
    pixmapItem[13][1] = scene->addPixmap(map->getTile(2));
    pixmapItem[14][1] = scene->addPixmap(map->getTile(1));
    //맵 두번째
    pixmapItem[0][2] = scene->addPixmap(map->getTile(2));
    pixmapItem[1][2] = scene->addPixmap(map->getTile(1));
    pixmapItem[2][2] = scene->addPixmap(map->getTile(2));
    pixmapItem[3][2] = scene->addPixmap(map->getTile(1));
    pixmapItem[4][2] = scene->addPixmap(map->getTile(2));
    pixmapItem[5][2] = scene->addPixmap(map->getTile(1));
    pixmapItem[6][2] = scene->addPixmap(map->getTile(5));
    pixmapItem[7][2] = scene->addPixmap(map->getTile(5));
    pixmapItem[8][2] = scene->addPixmap(map->getTile(5));
    pixmapItem[9][2] = scene->addPixmap(map->getTile(1));
    pixmapItem[10][2] = scene->addPixmap(map->getTile(2));
    pixmapItem[11][2] = scene->addPixmap(map->getTile(1));
    pixmapItem[12][2] = scene->addPixmap(map->getTile(2));
    pixmapItem[13][2] = scene->addPixmap(map->getTile(1));
    pixmapItem[14][2] = scene->addPixmap(map->getTile(2));
    //맵 3
    pixmapItem[0][3] = scene->addPixmap(map->getTile(1));
    pixmapItem[1][3] = scene->addPixmap(map->getTile(2));
    pixmapItem[2][3] = scene->addPixmap(map->getTile(1));
    pixmapItem[3][3] = scene->addPixmap(map->getTile(2));
    pixmapItem[4][3] = scene->addPixmap(map->getTile(1));
    pixmapItem[5][3] = scene->addPixmap(map->getTile(2));
    pixmapItem[6][3] = scene->addPixmap(map->getTile(3));
    pixmapItem[7][3] = scene->addPixmap(map->getTile(4));
    pixmapItem[8][3] = scene->addPixmap(map->getTile(3));
    pixmapItem[9][3] = scene->addPixmap(map->getTile(2));
    pixmapItem[10][3] = scene->addPixmap(map->getTile(1));
    pixmapItem[11][3] = scene->addPixmap(map->getTile(2));
    pixmapItem[12][3] = scene->addPixmap(map->getTile(1));
    pixmapItem[13][3] = scene->addPixmap(map->getTile(2));
    pixmapItem[14][3] = scene->addPixmap(map->getTile(1));
    //맵 4
    pixmapItem[0][4] = scene->addPixmap(map->getTile(2));
    pixmapItem[1][4] = scene->addPixmap(map->getTile(1));
    pixmapItem[2][4] = scene->addPixmap(map->getTile(2));
    pixmapItem[3][4] = scene->addPixmap(map->getTile(1));
    pixmapItem[4][4] = scene->addPixmap(map->getTile(2));
    pixmapItem[5][4] = scene->addPixmap(map->getTile(1));
    pixmapItem[6][4] = scene->addPixmap(map->getTile(3));
    pixmapItem[7][4] = scene->addPixmap(map->getTile(4));
    pixmapItem[8][4] = scene->addPixmap(map->getTile(3));
    pixmapItem[9][4] = scene->addPixmap(map->getTile(1));
    pixmapItem[10][4] = scene->addPixmap(map->getTile(2));
    pixmapItem[11][4] = scene->addPixmap(map->getTile(1));
    pixmapItem[12][4] = scene->addPixmap(map->getTile(2));
    pixmapItem[13][4] = scene->addPixmap(map->getTile(1));
    pixmapItem[14][4] = scene->addPixmap(map->getTile(2));
    //맵 5
    pixmapItem[0][5] = scene->addPixmap(map->getTile(1));
    pixmapItem[1][5] = scene->addPixmap(map->getTile(2));
    pixmapItem[2][5] = scene->addPixmap(map->getTile(1));
    pixmapItem[3][5] = scene->addPixmap(map->getTile(2));
    pixmapItem[4][5] = scene->addPixmap(map->getTile(1));
    pixmapItem[5][5] = scene->addPixmap(map->getTile(2));
    pixmapItem[6][5] = scene->addPixmap(map->getTile(3));
    pixmapItem[7][5] = scene->addPixmap(map->getTile(4));
    pixmapItem[8][5] = scene->addPixmap(map->getTile(3));
    pixmapItem[9][5] = scene->addPixmap(map->getTile(2));
    pixmapItem[10][5] = scene->addPixmap(map->getTile(1));
    pixmapItem[11][5] = scene->addPixmap(map->getTile(2));
    pixmapItem[12][5] = scene->addPixmap(map->getTile(1));
    pixmapItem[13][5] = scene->addPixmap(map->getTile(2));
    pixmapItem[14][5] = scene->addPixmap(map->getTile(1));
    //맵 6
    pixmapItem[0][6] = scene->addPixmap(map->getTile(2));
    pixmapItem[1][6] = scene->addPixmap(map->getTile(1));
    pixmapItem[2][6] = scene->addPixmap(map->getTile(2));
    pixmapItem[3][6] = scene->addPixmap(map->getTile(1));
    pixmapItem[4][6] = scene->addPixmap(map->getTile(2));
    pixmapItem[5][6] = scene->addPixmap(map->getTile(1));
    pixmapItem[6][6] = scene->addPixmap(map->getTile(3));
    pixmapItem[7][6] = scene->addPixmap(map->getTile(4));
    pixmapItem[8][6] = scene->addPixmap(map->getTile(3));
    pixmapItem[9][6] = scene->addPixmap(map->getTile(1));
    pixmapItem[10][6] = scene->addPixmap(map->getTile(2));
    pixmapItem[11][6] = scene->addPixmap(map->getTile(1));
    pixmapItem[12][6] = scene->addPixmap(map->getTile(2));
    pixmapItem[13][6] = scene->addPixmap(map->getTile(1));
    pixmapItem[14][6] = scene->addPixmap(map->getTile(2));
    //맵 7
    pixmapItem[0][7] = scene->addPixmap(map->getTile(1));
    pixmapItem[1][7] = scene->addPixmap(map->getTile(2));
    pixmapItem[2][7] = scene->addPixmap(map->getTile(1));
    pixmapItem[3][7] = scene->addPixmap(map->getTile(2));
    pixmapItem[4][7] = scene->addPixmap(map->getTile(1));
    pixmapItem[5][7] = scene->addPixmap(map->getTile(2));
    pixmapItem[6][7] = scene->addPixmap(map->getTile(3));
    pixmapItem[7][7] = scene->addPixmap(map->getTile(4));
    pixmapItem[8][7] = scene->addPixmap(map->getTile(3));
    pixmapItem[9][7] = scene->addPixmap(map->getTile(2));
    pixmapItem[10][7] = scene->addPixmap(map->getTile(1));
    pixmapItem[11][7] = scene->addPixmap(map->getTile(2));
    pixmapItem[12][7] = scene->addPixmap(map->getTile(1));
    pixmapItem[13][7] = scene->addPixmap(map->getTile(2));
    pixmapItem[14][7] = scene->addPixmap(map->getTile(1));
    //맵 8
    pixmapItem[0][8] = scene->addPixmap(map->getTile(2));
    pixmapItem[1][8] = scene->addPixmap(map->getTile(1));
    pixmapItem[2][8] = scene->addPixmap(map->getTile(2));
    pixmapItem[3][8] = scene->addPixmap(map->getTile(1));
    pixmapItem[4][8] = scene->addPixmap(map->getTile(2));
    pixmapItem[5][8] = scene->addPixmap(map->getTile(1));
    pixmapItem[6][8] = scene->addPixmap(map->getTile(3));
    pixmapItem[7][8] = scene->addPixmap(map->getTile(4));
    pixmapItem[8][8] = scene->addPixmap(map->getTile(3));
    pixmapItem[9][8] = scene->addPixmap(map->getTile(1));
    pixmapItem[10][8] = scene->addPixmap(map->getTile(2));
    pixmapItem[11][8] = scene->addPixmap(map->getTile(1));
    pixmapItem[12][8] = scene->addPixmap(map->getTile(2));
    pixmapItem[13][8] = scene->addPixmap(map->getTile(1));
    pixmapItem[14][8] = scene->addPixmap(map->getTile(2));
    //맵 9
    pixmapItem[0][9] = scene->addPixmap(map->getTile(1));
    pixmapItem[1][9] = scene->addPixmap(map->getTile(2));
    pixmapItem[2][9] = scene->addPixmap(map->getTile(1));
    pixmapItem[3][9] = scene->addPixmap(map->getTile(2));
    pixmapItem[4][9] = scene->addPixmap(map->getTile(1));
    pixmapItem[5][9] = scene->addPixmap(map->getTile(2));
    pixmapItem[6][9] = scene->addPixmap(map->getTile(3));
    pixmapItem[7][9] = scene->addPixmap(map->getTile(4));
    pixmapItem[8][9] = scene->addPixmap(map->getTile(3));
    pixmapItem[9][9] = scene->addPixmap(map->getTile(2));
    pixmapItem[10][9] = scene->addPixmap(map->getTile(1));
    pixmapItem[11][9] = scene->addPixmap(map->getTile(2));
    pixmapItem[12][9] = scene->addPixmap(map->getTile(1));
    pixmapItem[13][9] = scene->addPixmap(map->getTile(2));
    pixmapItem[14][9] = scene->addPixmap(map->getTile(1));
    //맵 10
    pixmapItem[0][10] = scene->addPixmap(map->getTile(2));
    pixmapItem[1][10] = scene->addPixmap(map->getTile(1));
    pixmapItem[2][10] = scene->addPixmap(map->getTile(2));
    pixmapItem[3][10] = scene->addPixmap(map->getTile(1));
    pixmapItem[4][10] = scene->addPixmap(map->getTile(2));
    pixmapItem[5][10] = scene->addPixmap(map->getTile(1));
    pixmapItem[6][10] = scene->addPixmap(map->getTile(5));
    pixmapItem[7][10] = scene->addPixmap(map->getTile(5));
    pixmapItem[8][10] = scene->addPixmap(map->getTile(5));
    pixmapItem[9][10] = scene->addPixmap(map->getTile(1));
    pixmapItem[10][10] = scene->addPixmap(map->getTile(2));
    pixmapItem[11][10] = scene->addPixmap(map->getTile(1));
    pixmapItem[12][10] = scene->addPixmap(map->getTile(2));
    pixmapItem[13][10] = scene->addPixmap(map->getTile(1));
    pixmapItem[14][10] = scene->addPixmap(map->getTile(2));
    //맵 11
    pixmapItem[0][11] = scene->addPixmap(map->getTile(1));
    pixmapItem[1][11] = scene->addPixmap(map->getTile(2));
    pixmapItem[2][11] = scene->addPixmap(map->getTile(1));
    pixmapItem[3][11] = scene->addPixmap(map->getTile(2));
    pixmapItem[4][11] = scene->addPixmap(map->getTile(1));
    pixmapItem[5][11] = scene->addPixmap(map->getTile(2));
    pixmapItem[6][11] = scene->addPixmap(map->getTile(3));
    pixmapItem[7][11] = scene->addPixmap(map->getTile(4));
    pixmapItem[8][11] = scene->addPixmap(map->getTile(3));
    pixmapItem[9][11] = scene->addPixmap(map->getTile(2));
    pixmapItem[10][11] = scene->addPixmap(map->getTile(1));
    pixmapItem[11][11] = scene->addPixmap(map->getTile(2));
    pixmapItem[12][11] = scene->addPixmap(map->getTile(1));
    pixmapItem[13][11] = scene->addPixmap(map->getTile(2));
    pixmapItem[14][11] = scene->addPixmap(map->getTile(1));
    //맵 12
    pixmapItem[0][12] = scene->addPixmap(map->getTile(2));
    pixmapItem[1][12] = scene->addPixmap(map->getTile(1));
    pixmapItem[2][12] = scene->addPixmap(map->getTile(2));
    pixmapItem[3][12] = scene->addPixmap(map->getTile(1));
    pixmapItem[4][12] = scene->addPixmap(map->getTile(2));
    pixmapItem[5][12] = scene->addPixmap(map->getTile(1));
    pixmapItem[6][12] = scene->addPixmap(map->getTile(3));
    pixmapItem[7][12] = scene->addPixmap(map->getTile(4));
    pixmapItem[8][12] = scene->addPixmap(map->getTile(3));
    pixmapItem[9][12] = scene->addPixmap(map->getTile(1));
    pixmapItem[10][12] = scene->addPixmap(map->getTile(2));
    pixmapItem[11][12] = scene->addPixmap(map->getTile(1));
    pixmapItem[12][12] = scene->addPixmap(map->getTile(2));
    pixmapItem[13][12] = scene->addPixmap(map->getTile(1));
    pixmapItem[14][12] = scene->addPixmap(map->getTile(2));
    //맵 13

    //맵 출력 및 위치 잡기
    for(int i=0;i<15;i++){
        for (int j=0;j<13 ;j++ ) {
            pixmapItem[i][j]->setPos(i*60,j*60);
        }
    }
}

