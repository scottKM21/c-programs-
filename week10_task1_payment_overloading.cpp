#include <iostream>
using namespace std;

class Payment {
public:
    // cash
    void processPayment(int amount) {
        cout << "Cash payment, final amount: " << amount << endl;
    }

    // card
    void processPayment(int amount, int fee) {
        int finalAmount = amount + fee;
        cout << "Card payment, final amount: " << finalAmount << endl;
    }

    // mobile
    void processPayment(int amount, int fee, int discount) {
        int finalAmount = amount + fee - discount;
        cout << "Mobile payment, final amount: " << finalAmount << endl;
    }
};

int main() {
    Payment p;

    p.processPayment(1000);
    p.processPayment(1000, 50);
    p.processPayment(1000, 30, 100);

    return 0;
}
