#include "Game.h"

Game::Game(){

    //타이틀 제목 설정
    this->setWindowTitle("Crazy Arcade");
    this->setWindowIcon(QIcon(":/Images/icon.png"));

    //오브젝트가 화면을 넘어가도 스크롤이 안생기게 하기
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(900,780);

    // 화면크기 설정
    m_scene = new QGraphicsScene();
    m_scene->setSceneRect(0,0,900,780);

    InitializeMap(*m_scene);

    // QGraphicsPixmapItem* AA = m_scene->addPixmap(QPixmap(":/Images/bush.png")) ;
    // AA->setPos(60,36);

    setScene(m_scene);
}

void Game::InitializeMap(QGraphicsScene &scene){
    m_map =new Map();
    Blige(scene);
}

void Game::InitializePlayer(){
    m_player = new Player();
    m_player->setPos(350,250);
    m_player->setFlag(QGraphicsItem::ItemIsFocusable);
    m_player->setFocus();
    m_scene->addItem(m_player);
}

//빌리지 타일 구성
void Game::Blige(QGraphicsScene &scene){
    int blockArray[13][15] = {{	2,	1,	2,	1,	2,	1,	3,	4,	3,	1,	2,	1,	2,	1,	2	},
                              {	1,	2,	1,	2,	1,	2,	3,	4,	3,	2,	1,	2,	1,	2,	1	},
                              {	2,	1,	2,	1,	2,	1,	5,	5,	5,	1,	2,	1,	2,	1,	2	},
                              {	1,	2,	1,	2,	1,	2,	3,	4,	3,	2,	1,	2,	1,	2,	1	},
                              {	2,	1,	2,	1,	2,	1,	3,	4,	3,	1,	2,	1,	2,	1,	2	},
                              {	1,	2,	1,	2,	1,	2,	3,	4,	3,	2,	1,	2,	1,	2,	1	},
                              {	2,	1,	2,	1,	2,	1,	3,	4,	3,	1,	2,	1,	2,	1,	2	},
                              {	1,	2,	1,	2,	1,	2,	3,	4,	3,	2,	1,	2,	1,	2,	1	},
                              {	2,	1,	2,	1,	2,	1,	3,	4,	3,	1,	2,	1,	2,	1,	2	},
                              {	1,	2,	1,	2,	1,	2,	3,	4,	3,	2,	1,	2,	1,	2,	1	},
                              {	2,	1,	2,	1,	2,	1,	5,	5,	5,	1,	2,	1,	2,	1,	2	},
                              {	1,	2,	1,	2,	1,	2,	3,	4,	3,	2,	1,	2,	1,	2,	1	},
                              {	2,	1,	2,	1,	2,	1,	3,	4,	3,	1,	2,	1,	2,	1,	2	}};

    QGraphicsPixmapItem* pixmapItem[13][15];

    for(int r=0; r<13; r++) {
        for(int c=0; c<15; c++) {
            int type = blockArray[r][c];
            auto tile = m_map->getTile(type);
            pixmapItem[r][c] = scene.addPixmap(tile);
        }
    }

    //맵 출력 및 위치 잡기
    for(int r=0; r<13; r++) {
        for(int c=0; c<15; c++) {
            pixmapItem[r][c]->setPos(c*60, r*60);
        }
    }
}

