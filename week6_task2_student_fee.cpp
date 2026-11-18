#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string admNo;
    double balance;

public:
    void inputStudent() {
        cout << "Enter student name: ";
        getline(cin, name);
        cout << "Enter admission number: ";
        getline(cin, admNo);
        cout << "Enter fee balance: ";
        cin >> balance;
    }

    void makePayment(double amount) {
        if (amount <= 0) {
            cout << "Invalid amount.\n";
        } else if (amount > balance) {
            cout << "Amount is more than the balance.\n";
        } else {
            balance = balance - amount;
            cout << "Payment received.\n";
        }
    }

    void displayStatus() {
        cout << "\nName: " << name << endl;
        cout << "Admission number: " << admNo << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    Student s;
    double pay;

    s.inputStudent();
    s.displayStatus();

    cout << "\nEnter payment: ";
    cin >> pay;
    s.makePayment(pay);

    s.displayStatus();

    return 0;
}
