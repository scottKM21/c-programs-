#include <iostream>
#include <string>
using namespace std;

// base class
class Vehicle {
protected:
    string brand;
    int year;

public:
    void displayVehicle() {
        cout << "Brand: " << brand << endl;
        cout << "Year of manufacture: " << year << endl;
    }
};

// derived class
class Car : public Vehicle {
private:
    int doors;
    double engineCapacity;

public:
    void inputCar() {
        cout << "Enter brand: ";
        getline(cin, brand);
        cout << "Enter year of manufacture: ";
        cin >> year;
        cout << "Enter number of doors: ";
        cin >> doors;
        cout << "Enter engine capacity (cc): ";
        cin >> engineCapacity;
    }

    void displayCar() {
        cout << "\n--- Car Details ---\n";
        displayVehicle();
        cout << "Number of doors: " << doors << endl;
        cout << "Engine capacity: " << engineCapacity << " cc" << endl;
    }
};

int main() {
    Car c;
    c.inputCar();
    c.displayCar();

    return 0;
}
