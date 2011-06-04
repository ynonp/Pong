#include "avatar.h"
#include <QBrush>

Avatar::Avatar(QColor color, const QRectF & rect, QGraphicsItem * parent) :
    QGraphicsRectItem(rect, parent),
    iColor ( color ),
    iPos ( rect )
{
    QBrush b(color);
    setBrush(b);
}
