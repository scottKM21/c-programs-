#include <iostream>
#include <string>
using namespace std;

void getCustomerDetails(string &name, double &units) {
    cout << "Enter customer name: ";
    getline(cin, name);
    cout << "Enter number of units consumed: ";
    cin >> units;
}

double calculateBill(double units, double rate) {
    return units * rate;
}

double applyDiscount(double bill, double units) {
    if (units > 100) {
        return bill * 0.10;
    }
    return 0;
}

void displayBill(string name, double units, double bill, double discount, double finalAmount) {
    cout << endl;
    cout << "-------- WATER BILL --------" << endl;
    cout << "Customer name        : " << name << endl;
    cout << "Units consumed       : " << units << endl;
    cout << "Bill before discount : " << bill << endl;
    cout << "Discount             : " << discount << endl;
    cout << "Amount payable       : " << finalAmount << endl;
    cout << "----------------------------" << endl;
}

int main() {
    string name;
    double units;
    double rate = 50;

    getCustomerDetails(name, units);
    double bill = calculateBill(units, rate);
    double discount = applyDiscount(bill, units);
    double finalAmount = bill - discount;
    displayBill(name, units, bill, discount, finalAmount);

    return 0;
}
