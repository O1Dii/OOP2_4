//
// Created by alexey on 3/8/19.
//

#include "../Headers/Product.h"

Product::Product(int price, int amount, std::string model, std::string manufacturer) :
                 price(price), amount(amount), model(model), manufacturer(manufacturer) {}

int Product::getPrice() {
    return price;
}

void Product::setPrice(int price) {
    Product::price = price;
}

int Product::getAmount() {
    return amount;
}

void Product::setAmount(int amount) {
    Product::amount = amount;
}

std::string Product::getModel() {
    return model;
}

void Product::setModel(std::string model) {
    Product::model = model;
}

std::string Product::getManufacturer() {
    return manufacturer;
}

void Product::setManufacturer(std::string manufacturer) {
    Product::manufacturer = manufacturer;
}
