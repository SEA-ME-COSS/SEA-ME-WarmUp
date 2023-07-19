#ifndef CAR_H
#define CAR_H

#include <vector>

#include <QObject>
#include <QWidget>

class Car : public QObject
{
    Q_OBJECT
public:
    Car();
    ~Car();

    void update(bool keys[4]);
    void move();

    void change_Angle(float addition_angle);
    void change_Speed(float addition_speed);
    void setAngle(float input_angle);
    void setSpeed(float input_speed);
    void setX(float input_x);
    void setY(float input_y);
    float getCAITP();
    float getAngle();
    float getSpeed();
    float getX();
    float getY();
    void trackboom();
    void moveX();
signals:
    void positionChanged();

private:
//    Caution with Variable Type!!
    float x;
    float y;
    float angle;
    float speed;
    float changed_angle_in_this_period;
    float max_speed;

};

#endif // CAR_H
