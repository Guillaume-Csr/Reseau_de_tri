#ifndef MYSCENE_H
#define MYSCENE_H

#include <QObject>
#include <QWidget>
#include <QGraphicsScene>

class MyScene : public QGraphicsScene
{
public:
    MyScene(QObject * parent = nullptr);
    QPen changeColor(int value);
};

#endif // MYSCENE_H
