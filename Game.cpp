#include "Game.h"

Game::Game(){
    this->setWindowTitle("Crazy Arcade");
    this->setWindowIcon(QIcon(":/Images/icon.png"));

    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(900,780);

    m_scene = new QGraphicsScene();
    m_scene->setSceneRect(0,0,900,780);

    m_mapgen = new VillageMapGenerator();
    InitializeMap(*m_scene);

    InitializePlayer();

    setScene(m_scene);
}

void Game::InitializeMap(QGraphicsScene &scene){
    bool success = m_mapgen->AddPixmapInfo(scene);
    if (!success)
        throw;
}

void Game::InitializePlayer(){
    //m_player = new Player();
    //m_player->setPos(350,250);
    //m_player->setFlag(QGraphicsItem::ItemIsFocusable);
    //m_player->setFocus();
    //m_scene->addItem(m_player);
}
