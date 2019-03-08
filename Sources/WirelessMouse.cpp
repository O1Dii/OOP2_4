//
// Created by alexey on 3/8/19.
//

#include "../Headers/WirelessMouse.h"

float WirelessMouse::getConectionSpeed() {
    return conectionSpeed;
}

void WirelessMouse::setConectionSpeed(float conectionSpeed) {
    WirelessMouse::conectionSpeed = conectionSpeed;
}

bool WirelessMouse::isHasBacklight() {
    return hasBacklight;
}

void WirelessMouse::setHasBacklight(bool hasBacklight) {
    WirelessMouse::hasBacklight = hasBacklight;
}

const MouseSensor WirelessMouse::getSensor() {
    return sensor;
}

void WirelessMouse::setSensor(MouseSensor sensor) {
    WirelessMouse::sensor = sensor;
}

WirelessMouse::WirelessMouse(int price, int amount, std::string model, std::string manufacturer,
                             float conectionSpeed, bool hasBacklight, MouseSensor sensor) :
                             Product(price, amount, model, manufacturer),
                             conectionSpeed(conectionSpeed),
                             hasBacklight(hasBacklight),
                             sensor(sensor) {}
