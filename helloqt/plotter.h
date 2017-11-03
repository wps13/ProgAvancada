#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>

class Plotter : public QWidget
{
    Q_OBJECT
public:
    explicit Plotter(QWidget *parent = nullptr);
    //método para realizar o redesenho da interface
    void paintEvent(QPaintEvent *event);
signals:

public slots:
};

#endif // PLOTTER_H
