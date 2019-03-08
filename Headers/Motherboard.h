//
// Created by alexey on 3/8/19.
//

#ifndef OOP2_MOTHERBOARD_H
#define OOP2_MOTHERBOARD_H

#include "Product.h"
#include "RamException.h"

class Motherboard : public Product {
public:
    Motherboard(const Motherboard &obj) : Product(obj) { std::cout << "Сработал конструктор копирования" << std::endl; };

    virtual ~Motherboard();

    Motherboard(int price, int amount, std::string model, std::string manufacturer,
                std::string socketType, int ramAmount, int usbAmount);

    std::string getSocketType();

    int getRamAmount();

    int getUsbAmount();

    void setSocketType(std::string socketType);

    void setRamAmount(int ramAmount);

    void setUsbAmount(int usbAmount);

private:
    std::string socketType;
    int ramAmount;
    int usbAmount;
};


#endif //OOP2_MOTHERBOARD_H
