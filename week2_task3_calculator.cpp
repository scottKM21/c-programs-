#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    switch (op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Error: cannot divide by zero" << endl;
            } else {
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            }
            break;
        default:
            cout << "Invalid operator" << endl;
    }

    return 0;
}
