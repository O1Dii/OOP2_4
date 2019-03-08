//
// Created by alexey on 3/8/19.
//

#include "../Headers/MouseSensor.h"

std::string MouseSensor::getType() {
    return type;
}

void MouseSensor::setType(std::string type) {
    MouseSensor::type = type;
}

int MouseSensor::getMaxDpi() {
    return maxDpi;
}

void MouseSensor::setMaxDpi(int maxDpi) {
    MouseSensor::maxDpi = maxDpi;
}

MouseSensor::MouseSensor(int price, int amount, std::string model, std::string manufacturer,
        std::string type, int maxDpi) :
        Product(price, amount, model, manufacturer), type(type), maxDpi(maxDpi) {}
