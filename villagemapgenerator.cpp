#include "villagemapgenerator.h"

#include <QGraphicsPixmapItem>
#include "fileutilities.h"

VillageMapGenerator::VillageMapGenerator()
    : VirtualMapGenerator()
{

}

std::vector<std::vector<int>> InitializePixmapIndexes() {

    static std::vector<std::vector<int>> matrix =
    {  { 2, 1,	2,	1,	2,	1,	3,	4,	3,	1,	2,	1,	2,	1,	2 },
       { 1, 2,	1,	2,	1,	2,	3,	4,	3,	2,	1,	2,	1,	2,	1 },
       { 2, 1,	2,	1,	2,	1,	5,	5,	5,	1,	2,	1,	2,	1,	2 },
       { 1, 2,	1,	2,	1,	2,	3,	4,	3,	2,	1,	2,	1,	2,	1 },
       { 2, 1,	2,	1,	2,	1,	3,	4,	3,	1,	2,	1,	2,	1,	2 },
       { 1, 2,	1,	2,	1,	2,	3,	4,	3,	2,	1,	2,	1,	2,	1 },
       { 2, 1,	2,	1,	2,	1,	3,	4,	3,	1,	2,	1,	2,	1,	2 },
       { 1, 2,	1,	2,	1,	2,	3,	4,	3,	2,	1,	2,	1,	2,	1 },
       { 2, 1,	2,	1,	2,	1,	3,	4,	3,	1,	2,	1,	2,	1,	2 },
       { 1, 2,	1,	2,	1,	2,	3,	4,	3,	2,	1,	2,	1,	2,	1 },
       { 2, 1,	2,	1,	2,	1,	5,	5,	5,	1,	2,	1,	2,	1,	2 },
       { 1, 2,	1,	2,	1,	2,	3,	4,	3,	2,	1,	2,	1,	2,	1 },
       { 2, 1,	2,	1,	2,	1,	3,	4,	3,	1,	2,	1,	2,	1,	2 }
    };

    return matrix;
}

QLinkedList<QPixmap *> InitializePixmaps()
{
    QLinkedList<QPixmap *> result;

    QPixmap orig(":/Images/tile.png");

    QPixmap pixmap = orig.copy(QRect(0, 0, 60, 60));
    result.append(&pixmap);

    pixmap = orig.copy(QRect(60, 0, 60, 60));
    result.append(&pixmap);

    pixmap = orig.copy(QRect(120, 0, 60, 60));
    result.append(&pixmap);

    pixmap = orig.copy(QRect(180, 0, 60, 60));
    result.append(&pixmap);

    pixmap = orig.copy(QRect(240, 0, 60, 60));
    result.append(&pixmap);

    return result;
}

int GetMax(const std::vector<std::vector<int>> &vector) {
    std::vector<int> result;

    for (int i=0; i<vector.size(); i++){
        result.insert(result.end(), vector[i].begin(), vector[i].end());
    }

    return *std::max_element(result.begin(), result.end());
}

int VillageMapGenerator::GetPixmapColumn()
{
    return 15;
}

int VillageMapGenerator::GetPixmapRow()
{
    return 13;
}

std::vector<std::vector<int>> VillageMapGenerator::GetPixmapIndexes()
{
    if (m_blockArray.empty())
        m_blockArray = InitializePixmapIndexes();

    return m_blockArray;
}

QLinkedList<QPixmap *> VillageMapGenerator::GetPixmaps()
{
    auto matrix = GetPixmapIndexes();

    int max = GetMax(matrix);

    if (m_pixmaps.count() < max)
        m_pixmaps = InitializePixmaps();

    bool success = m_pixmaps.last()->save("1.jpeg");
    std::printf("1");

    return m_pixmaps;
}
