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
    m_map = new Map();

    int* pixmapInfo = m_map->GetPixmapInfo();

    int pxRow = m_map->PixmapRow;
    int pxCol = m_map->PixmapColumn;

    for(int r=0; r<pxRow; r++) {
        for(int c=0; c<pxCol; c++) {

            int idx = (pxCol * r) + c;
            int type = *(pixmapInfo + idx);
            auto tile = m_map->getTile(type);

            auto pixmap = scene.addPixmap(tile);
            pixmap->setPos(c*60, r*60);
        }
    }
}

void Game::InitializePlayer(){
    m_player = new Player();
    m_player->setPos(350,250);
    m_player->setFlag(QGraphicsItem::ItemIsFocusable);
    m_player->setFocus();
    m_scene->addItem(m_player);
}
