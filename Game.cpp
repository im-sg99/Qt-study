#include "Game.h"

#include <QSaveFile>
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

    setScene(m_scene);
}

void Game::InitializeMap(QGraphicsScene &scene){
    QLinkedList<QGraphicsPixmapItem *> pixmaps = m_mapgen.GetPixmapInfo();

    QLinkedList<QGraphicsPixmapItem*>::iterator it = pixmaps.begin();
    while (it != pixmaps.end()) {
        QGraphicsPixmapItem* item = *it;

        scene.addPixmap(item->pixmap());
        ++it;
    }
}

void Game::InitializePlayer(){
    m_player = new Player();
    m_player->setPos(350,250);
    m_player->setFlag(QGraphicsItem::ItemIsFocusable);
    m_player->setFocus();
    m_scene->addItem(m_player);
}
