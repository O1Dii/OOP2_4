#include <iostream>
#include "../Headers/Laptop.h"

using namespace std;
int main() {
    try {
        Motherboard asrockMotherboard(45, 55, "some model", "Asrock", "someSocketType", 0, 8);
        Motherboard asusMotherboard(50, 55, "some model", "Asus", "someSocketType", 4, 8);
        MouseSensor pixart3360(5, 130, "3360", "Pixart", "Optical", 12000);
        WirelessMouse logitecG120(20, 110, "g120", "Logitec", 50.2, true, pixart3360 );
        Laptop laptop[] = {{ 1000, 10, "Bd212", "Lenovo", 15, true, asusMotherboard, &logitecG120 },
                           { 1200, 2, "gaming laptop", "Asus", 15, true, asusMotherboard }};

    }
    catch(RamException &ex){
        cout << ex.what() << endl;
        cout << "Ваше количество разъёмов ОЗУ - " << ex.amountOfRam() << endl;
    }
    catch(const exception &ex){
        cout << ex.what() << endl;
    }
    cout << "privet" << endl;

    return 0;
}