#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string holderName;
    string accountNumber;
    double balance;

public:
    // constructor
    BankAccount(string n, string a, double b) {
        holderName = n;
        accountNumber = a;
        balance = b;
        cout << "Account successfully created" << endl;
    }

    void displayAccount() {
        cout << "\nAccount holder: " << holderName << endl;
        cout << "Account number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }

    // destructor
    ~BankAccount() {
        cout << "Account closed successfully" << endl;
    }
};

int main() {
    BankAccount acc("John Kamau", "ACC1001", 25000.50);
    acc.displayAccount();

    return 0;
}
