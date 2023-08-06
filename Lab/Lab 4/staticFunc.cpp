#include <iostream>
using namespace std;

class SerialNumberGenerator {
private:
    static int nextSerialNumber;
    int serialNumber;

public:
    SerialNumberGenerator() {
        serialNumber = nextSerialNumber++;
    }

    static int getLastSerialNumber() {
        return nextSerialNumber -1;
    }

    void displaySerialNumber() const {
        cout << "Serial Number: " << serialNumber << endl;
    }
};

int SerialNumberGenerator::nextSerialNumber = 1;

int main() {
    SerialNumberGenerator obj1;
    SerialNumberGenerator obj2;
    SerialNumberGenerator obj3;

    obj1.displaySerialNumber();
    obj2.displaySerialNumber();
    obj3.displaySerialNumber();

    int lastSerialNumber = SerialNumberGenerator::getLastSerialNumber();
    cout << "Last Serial Number: " << lastSerialNumber << endl;

    return 0;
}
