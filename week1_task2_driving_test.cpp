#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    double theory, practical, average;

    cout << "Enter student name: ";
    getline(cin, name);
    cout << "Enter theory marks: ";
    cin >> theory;
    cout << "Enter practical marks: ";
    cin >> practical;

    average = (theory + practical) / 2;

    cout << endl;
    cout << "Student name    : " << name << endl;
    cout << "Theory marks    : " << theory << endl;
    cout << "Practical marks : " << practical << endl;
    cout << "Average score   : " << average << endl;

    if (average >= 50) {
        cout << "Result          : Passed" << endl;
    } else {
        cout << "Result          : Failed" << endl;
    }

    return 0;
}
