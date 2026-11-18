#include <iostream>
#include <string>
using namespace std;

// base class
class Person {
protected:
    string name;
    int age;

public:
    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// derived class
class Student : public Person {
private:
    string admissionNumber;
    string className;

public:
    void inputStudent() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore();   // so getline doesn't skip
        cout << "Enter admission number: ";
        getline(cin, admissionNumber);
        cout << "Enter class: ";
        getline(cin, className);
    }

    void displayStudent() {
        cout << "\n--- Student Details ---\n";
        displayPerson();
        cout << "Admission number: " << admissionNumber << endl;
        cout << "Class: " << className << endl;
    }
};

int main() {
    Student s;
    s.inputStudent();
    s.displayStudent();

    return 0;
}
