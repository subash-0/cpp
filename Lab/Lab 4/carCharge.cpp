#include <iostream>
using namespace std;

class ParkingCharge {
private:
    int num_vehicle;
    int hour;
    double rate;

public:
    ParkingCharge(int num_vehicle, int hour, double rate) : num_vehicle(num_vehicle), hour(hour), rate(rate) {}

    ParkingCharge(const ParkingCharge& other) {
        num_vehicle = other.num_vehicle;
        hour = other.hour;
        rate = other.rate;
    }

    double calculateCharge() const {
        double totalCharge = hour * rate;
        if (num_vehicle > 10) {
            totalCharge -= totalCharge * 0.1; // Apply 10% discount
        }
        return totalCharge;
    }
};

int main() {
    ParkingCharge charge1(12, 2, 5.0);
    ParkingCharge charge2 = charge1; // Bit-by-bit copy using the copy constructor

    double totalCharge1 = charge1.calculateCharge();
    double totalCharge2 = charge2.calculateCharge();

    cout << "Total Charge 1: $" << totalCharge1 << endl;
    cout << "Total Charge 2: $" << totalCharge2 << endl;

    return 0;
}
