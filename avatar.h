#ifndef AVATAR_H
#define AVATAR_H

#include <QGraphicsRectItem>
#include <QColor>

class QGraphicsItem;
class Avatar : public QGraphicsRectItem
{
public:
    explicit Avatar(QColor color, const QRectF & rect, QGraphicsItem * parent = 0);

private:
    QColor iColor;
    QRectF iPos;
};

#endif // AVATAR_H
