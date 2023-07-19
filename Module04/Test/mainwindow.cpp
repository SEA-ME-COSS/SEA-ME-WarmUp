#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QKeyEvent>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    Load Car Image
    CAR_img[0].load(":/images/images/car0.png");
    CAR_img[1].load(":/images/images/car1.png");

//    Set Pointer
    CAR_ptr[0] = ui->CAR0;
    CAR_ptr[1] = ui->CAR1;

//    Initialize Car's position by Label geometry
    for (int i=0; i<CAR_count; i++)
    {
        CAR_ang[i] = 90.0;
        CAR_rot[i].rotate(0);
        CAR_ptr[i]->setPixmap(CAR_img[i].transformed(CAR_rot[i]));
        test_game.carList[i]->setX(CAR_ptr[i]->geometry().x());
        test_game.carList[i]->setY(CAR_ptr[i]->geometry().y());
        CAR_ptr[i]->setGeometry(test_game.carList[i]->getX(),test_game.carList[i]->getY(),70,70);
    }

//    Update By Qtimer(60fps)
    connect(test_game.m_timer, SIGNAL(timeout()), this, SLOT(gui_update()));

    connect(ui->actionSTART,  SIGNAL(triggered()), this, SLOT(start()));

    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(start()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::start()
{
    test_game.startRace();
}

void MainWindow::gui_update()
{

    trackCollision();

    for (int i=0; i<CAR_count; i++)
    {
        CAR_rot[i].rotate(-(test_game.carList[i]->getAngle()-CAR_ang[i]));
        CAR_ang[i] = test_game.carList[i]->getAngle();
        CAR_ptr[i]->setPixmap(CAR_img[i].transformed(CAR_rot[i]));
        CAR_ptr[i]->setGeometry(test_game.carList[i]->getX(),test_game.carList[i]->getY(),70,70);
    }
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    switch (event->key()) {
//    For CAR0
    case Qt::Key_W:
        test_game.keys[0][0] = true;
        break;
    case Qt::Key_A:
        test_game.keys[0][1] = true;
        break;
    case Qt::Key_S:
        test_game.keys[0][2] = true;
        break;
    case Qt::Key_D:
        test_game.keys[0][3] = true;
        break;


//    For CAR1
    case Qt::Key_Up:
        test_game.keys[1][0] = true;
        break;
    case Qt::Key_Left:
        test_game.keys[1][1] = true;
        break;
    case Qt::Key_Down:
        test_game.keys[1][2] = true;
        break;
    case Qt::Key_Right:
        test_game.keys[1][3] = true;
        break;
    }
}
void MainWindow::keyReleaseEvent(QKeyEvent *event)
{
    switch (event->key()) {
//    For CAR0
    case Qt::Key_W:
        test_game.keys[0][0] = false;
        break;
    case Qt::Key_A:
        test_game.keys[0][1] = false;
        break;
    case Qt::Key_S:
        test_game.keys[0][2] = false;
        break;
    case Qt::Key_D:
        test_game.keys[0][3] = false;
        break;

//    For CAR1
    case Qt::Key_Up:
        test_game.keys[1][0] = false;
        break;
    case Qt::Key_Left:
        test_game.keys[1][1] = false;
        break;
    case Qt::Key_Down:
        test_game.keys[1][2] = false;
        break;
    case Qt::Key_Right:
        test_game.keys[1][3] = false;
        break;
    }
}

void MainWindow::trackCollision()
{
    for(int i = 0; i < CAR_count;i++)
    {
        if(track.isPointin(test_game.carList[i]->getX(), test_game.carList[i]->getY()) == false)
        {
            test_game.carList[i]->trackboom();
        }
    }
}

