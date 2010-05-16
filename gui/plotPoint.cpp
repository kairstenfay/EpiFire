#include "plotPoint.h"
#include "plotScene.h"

QRectF Point::boundingRect() const
{
    return(QRectF(-r,-r,2*r,2*r));             
}


void Point::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *) {
    painter->setRenderHint(QPainter::Antialiasing, false);

    //QPen pen(Qt::black, 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin);
    //painter->setPen(pen);
    painter->setBrush(brush);
    painter->setPen(Qt::NoPen);
    painter->drawEllipse(-r,-r,2*r,2*r);

}

void Point::updatePosition() { 
      PlotScene* myscene = (PlotScene*) scene();
      setPos( myscene->toPlotX(x), myscene->toPlotY(y)); 
};
