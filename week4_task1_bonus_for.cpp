#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    double basicSalary, bonus, totalSalary;

    for (int i = 1; i <= 5; i++) {
        cout << "Employee " << i << endl;
        cout << "Enter name: ";
        cin >> ws;
        getline(cin, name);
        cout << "Enter basic salary: ";
        cin >> basicSalary;

        bonus = 0.05 * basicSalary;
        totalSalary = basicSalary + bonus;

        cout << endl;
        cout << "Name         : " << name << endl;
        cout << "Basic salary : " << basicSalary << endl;
        cout << "Bonus        : " << bonus << endl;
        cout << "Total salary : " << totalSalary << endl;
        cout << "---------------------------" << endl;
    }

    return 0;
}
