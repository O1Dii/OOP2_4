//
// Created by alexey on 3/8/19.
//

#include "../Headers/Motherboard.h"

std::string Motherboard::getSocketType() {
    return socketType;
}

int Motherboard::getRamAmount() {
    return ramAmount;
}

int Motherboard::getUsbAmount() {
    return usbAmount;
}

void Motherboard::setSocketType(std::string socketType) {
    Motherboard::socketType = socketType;
}

void Motherboard::setRamAmount(int ramAmount) {
    Motherboard::ramAmount = ramAmount;
}

void Motherboard::setUsbAmount(int usbAmount) {
    Motherboard::usbAmount = usbAmount;
}

Motherboard::Motherboard(int price, int amount, std::string model, std::string manufacturer,
                         std::string socketType, int ramAmount, int usbAmount) :
                         Product(price, amount, model, manufacturer),
                         socketType(socketType),
                         ramAmount(ramAmount),
                         usbAmount(usbAmount) {
    std::cout << "Сработал конструктор" << std::endl;
    if(ramAmount < 1) {
        throw RamException("Количество разъёмов под ОЗУ не может быть меньше 1", ramAmount);
    }
}

Motherboard::~Motherboard() {
    std::cout << "Сработал деструктор" << std::endl;
}
