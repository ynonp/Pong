#include "gameplay.h"
#include <QGraphicsItem>
#include <QDebug>
#include <QTimer>
#include <QEvent>
#include <QKeyEvent>

Gameplay::Gameplay(QGraphicsScene & scene, QGraphicsItem *p1, QGraphicsItem *p2, QGraphicsItem *ball, QObject *parent) :
    QObject(parent),
    iScene ( scene ),
    iP1 ( p1 ),
    iP2 ( p2 ),
    iBall ( ball ),
    iBallDirection ( -3, -3 ),
    iP1Direction( 0 ),
    iP2Direction( 0 )
{
}

void Gameplay::tick()
{
}

bool Gameplay::eventFilter(QObject *target, QEvent *e)
{
    return false;
}
