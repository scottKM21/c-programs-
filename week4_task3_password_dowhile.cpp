#include <iostream>
#include <string>
using namespace std;

int main() {
    string correctUser = "admin";
    string correctPass = "1234";
    string user, pass;

    do {
        cout << "Enter username: ";
        cin >> user;
        cout << "Enter password: ";
        cin >> pass;

        if (user == correctUser && pass == correctPass) {
            cout << "Access Granted" << endl;
        } else {
            cout << "Incorrect credentials, try again" << endl;
        }
    } while (user != correctUser || pass != correctPass);

    return 0;
}
