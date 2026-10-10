#include <iostream>
using namespace std;

int main() {
    double balance, amount;

    cout << "Enter account balance: ";
    cin >> balance;

    while (balance > 0) {
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount > balance) {
            cout << "Insufficient balance. Stopping." << endl;
            break;
        }

        balance = balance - amount;
        cout << "Remaining balance: " << balance << endl;
    }

    if (balance == 0) {
        cout << "Your balance is now zero." << endl;
    }

    return 0;
}
