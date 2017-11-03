#include "plotter.h"
#include <QPainter>
#include <QBrush>
#include <QPen>

Plotter::Plotter(QWidget *parent) : QWidget(parent)
{

}

void Plotter::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QBrush brush;
    QPen pen;

    //define as cores de acordo com o rgb
    brush.setColor(QColor(255,255,100));

    //define o preenchimento
    brush.setStyle(Qt::SolidPattern);

    //define a cor do pincel(vermelha)
    pen.setColor(QColor(255,0,0));

    //define a largura em pixels
    pen.setWidth(2);

    //informa qual o brush atual
    painter.setBrush(brush);

    //informa qual a caneta atual
    painter.setPen(pen);

    //desenha um retângulo com origem no canto superior esquerdo
    painter.drawRect(0,0,width(),height());


}
