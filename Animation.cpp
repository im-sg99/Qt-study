#include "Animation.h"
#define MAX 12
#include <QPropertyAnimation>
#include <QSequentialAnimationGroup>
#include <QParallelAnimationGroup>
#include <QLabel>

void animation::parallelAnimationGroup()
{
    pLabel->show();

    pGroup=new QParallelAnimationGroup();

    for(int i=0; i<MAX/2-1;i++)

    {

    pLabel=new QLabel(this);

    QPixmap pix(":/image/BazziMove.png");

    pLabel->setPixmap(pix.scaled(50, 50, Qt::KeepAspectRatio));

    pLabel->show();

    animation = new QPropertyAnimation(pLabel, "pos");

    animation->setDuration(1000*ui->spinBox->value());

    animation->setEasingCurve(QEasingCurve::Linear);

    animation->setStartValue(QPoint(50*i, 0));

    animation->setEndValue(QPoint(50*i, 50*(i+1)));

    pGroup->addAnimation(animation);

    }

    pGroup->start();
}
