#include <iostream>
#include <string>
using namespace std;

int main() {
    string customerName, phoneModel;
    int quantity;
    double price, total;

    cout << "Enter customer name: ";
    getline(cin, customerName);
    cout << "Enter phone model: ";
    getline(cin, phoneModel);
    cout << "Enter quantity bought: ";
    cin >> quantity;
    cout << "Enter price per phone: ";
    cin >> price;

    total = quantity * price;

    cout << endl;
    cout << "-------- SALES RECEIPT --------" << endl;
    cout << "Customer name : " << customerName << endl;
    cout << "Phone model   : " << phoneModel << endl;
    cout << "Quantity      : " << quantity << endl;
    cout << "Price/phone   : " << price << endl;
    cout << "Total amount  : " << total << endl;
    cout << "-------------------------------" << endl;

    return 0;
}
