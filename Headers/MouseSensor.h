//
// Created by alexey on 3/8/19.
//

#ifndef OOP2_PERSONALCOMPUTER_H
#define OOP2_PERSONALCOMPUTER_H


#include "Product.h"

class MouseSensor : public Product{
public:
    MouseSensor(int price, int amount, std::string model, std::string manufacturer,
                std::string type, int maxDpi);

    std::string getType();

    void setType(std::string type);

    int getMaxDpi();

    void setMaxDpi(int maxDpi);

private:
    std::string type;
    int maxDpi;
};


#endif //OOP2_PERSONALCOMPUTER_H
