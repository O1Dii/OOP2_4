//
// Created by alexey on 3/8/19.
//

#ifndef OOP2_MYEXCEPTION_H
#define OOP2_MYEXCEPTION_H
#include <iostream>

class RamException : public std::runtime_error {
private:
    int ram;
public:
    RamException(char * message, int ram) : runtime_error(message){}
    int amountOfRam(){
        return ram;
    }
};


#endif //OOP2_MYEXCEPTION_H
