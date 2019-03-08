//
// Created by alexey on 3/8/19.
//

#ifndef OOP2_LAPTOP_H
#define OOP2_LAPTOP_H


#include "WirelessMouse.h"
#include "Motherboard.h"

class Laptop : public Product {
public:
    Laptop(int price,
            int amount,
            std::string model,
            std::string manufacturer,
            int screenSize,
            bool fullKeyboard,
            Motherboard motherboard,
            WirelessMouse *mouse = nullptr) :
            Product(price, amount, model, manufacturer),
            screenSize(screenSize),
            fullKeyboard(fullKeyboard),
            motherboard(motherboard),
            mouse(mouse) {}

    int getScreenSize() {
        return screenSize;
    }

    void setScreenSize(int screenSize) {
        Laptop::screenSize = screenSize;
    }

    bool isFullKeyboard() {
        return fullKeyboard;
    }

    void setFullKeyboard(bool fullKeyboard) {
        Laptop::fullKeyboard = fullKeyboard;
    }

    Motherboard getMotherboard() {
        return motherboard;
    }

    void setMotherboard(Motherboard motherboard) {
        Laptop::motherboard = motherboard;
    }

    WirelessMouse *getMouse() {
        return mouse;
    }

    void setMouse(WirelessMouse *mouse) {
        Laptop::mouse = mouse;
    }

private:
    int screenSize;
    bool fullKeyboard;
    Motherboard motherboard;
    WirelessMouse *mouse;
};


#endif //OOP2_LAPTOP_H
