//
// Created by alexey on 3/8/19.
//

#ifndef OOP2_PRODUCT_H
#define OOP2_PRODUCT_H

#include <iostream>

class Product {
public:
    Product(const Product &obj) {std::cout << "Конструктор копирования Product" <<std::endl;}

    Product(int price, int amount, std::string model, std::string manufacturer);

    int getPrice();

    void setPrice(int price);

    int getAmount();

    void setAmount(int amount);

    std::string getModel();

    void setModel(std::string model);

    std::string getManufacturer();

    void setManufacturer(std::string manufacturer);

private:
    int price;
    int amount;
    std::string model;
    std::string manufacturer;
};


#endif //OOP2_PRODUCT_H
