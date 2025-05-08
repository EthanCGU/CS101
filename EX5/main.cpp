#include <iostream>
#include <string>
using namespace std;

// Base class
class Car {
private:
    string m_Brand;
    string m_DriveMode;
    int y, z, s;

public:
    Car(string brand, string driveMode, int y, int z, int s)
        : m_Brand(brand), m_DriveMode(driveMode), y(y), z(z), s(s) {}

    string get_DriveMode(){ 
      return m_DriveMode; 
    }
    string get_Brand() {
      return m_Brand;
    }
};

// Derived classes
class BMW_Car : public Car {
public:
    BMW_Car(int y, int z, int s)
        : Car("BMW", "Rear-wheel", y, z, s) {
        cout << "Constructing BMW_Car" << endl;
    }
};

class AUDI_Car : public Car {
public:
    AUDI_Car(int y, int z, int s)
        : Car("Audi", "Front-wheel", y, z, s) {
        cout << "Constructing AUDI_Car" << endl;
    }
};

class BENZ_Car : public Car {
public:
    BENZ_Car(int y, int z, int s)
        : Car("Benz", "Front-wheel", y, z, s) {
        cout << "Constructing BENZ_Car" << endl;
    }
};

// Main function
int main() {
    BMW_Car bmw(1, 2, 3);
    cout << bmw.get_Brand() << " : Drive Mode = " << bmw.get_DriveMode() << endl;

    AUDI_Car audi(4, 5, 6);
    cout << audi.get_Brand() << " : Drive Mode = " << audi.get_DriveMode() << endl;

    BENZ_Car benz(7, 8, 9);
    cout << benz.get_Brand() << " : Drive Mode = " << benz.get_DriveMode() << endl;

    return 0;
}
