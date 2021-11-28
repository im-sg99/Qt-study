#include "fileutilities.h"

#include <QSaveFile>

FileUtilities::FileUtilities()
{
}

bool FileUtilities::SavePixmap(QString fileName, QPixmap &pixmap)
{
    QSaveFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Unbuffered)) {
        return false;
    }

    QImage const img = pixmap.toImage();
    img.save(&file);

    file.commit();

    return true;
}

