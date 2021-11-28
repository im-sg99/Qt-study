#include "Game.h"

#include "villagemapgenerator.h"
#include "dao.h"
#include "bazzi.h"

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

    InitializePlayer(*m_scene);

    setScene(m_scene);
}

void Game::InitializeMap(QGraphicsScene &scene){
    bool success = m_mapgen->AddPixmapInfo(scene);
    if (!success)
        throw;
}

void Game::InitializeBlock(QGraphicsScene &scene){
    m_block=new Block();

    int* pixmapInfo = m_block->GetPixmapInfo();

    int pxRow = m_block->PixmapRow;
    int pxCol = m_block->PixmapColumn;

    for(int c=0;c<pxCol;c++){
        for(int r=0;r<pxRow;r++){   //행

            int idx = (pxRow * c) + r;
            int type = *(pixmapInfo +idx);
            if(type!=0){
            auto block = m_block->getBlock(type);

            auto pixmap = scene.addPixmap(block);
            if(type>=4&&type<=6)
                pixmap->setPos(c*60,r*60-30);
            else if(type==7)
                pixmap->setPos(c*60,r*60-40);
            else if(type==8)
                pixmap->setPos(c*60,r*60-24);
            else
                pixmap->setPos(c*60,r*60);
            pixmap->setZValue(r);
            }
        }
    }
}

void Game::InitializePlayer(QGraphicsScene &scene){
    m_player1 = new Dao(true);
    m_player2 = new Bazzi(false);

    scene.addItem(m_player1);
    //scene.addPixmap(m_player2);
}

