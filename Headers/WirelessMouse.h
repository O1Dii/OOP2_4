//
// Created by alexey on 3/8/19.
//

#ifndef OOP2_WIRELESSMOUSE_H
#define OOP2_WIRELESSMOUSE_H

#include "Product.h"
#include "MouseSensor.h"

class WirelessMouse : public Product {
public:
    float getConectionSpeed();

    void setConectionSpeed(float conectionSpeed);

    bool isHasBacklight();

    void setHasBacklight(bool hasBacklight);

    const MouseSensor getSensor();

    void setSensor(MouseSensor sensor);

    WirelessMouse(int price, int amount, std::string model, std::string manufacturer,
                  float conectionSpeed, bool hasBacklight, MouseSensor sensor);

private:
    float conectionSpeed;
    bool hasBacklight;
    MouseSensor sensor;
};


#endif //OOP2_WIRELESSMOUSE_H
