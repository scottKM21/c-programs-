#include <iostream>
#include <string>
using namespace std;

void getEmployeeDetails(string &name, double &basicSalary, double &overtimeHours) {
    cout << "Enter employee name: ";
    getline(cin, name);
    cout << "Enter basic salary: ";
    cin >> basicSalary;
    cout << "Enter overtime hours: ";
    cin >> overtimeHours;
}

double calculateOvertimePay(double overtimeHours, double rate) {
    return overtimeHours * rate;
}

double calculateNetSalary(double basicSalary, double overtimePay) {
    return basicSalary + overtimePay;
}

void displayPayslip(string name, double basicSalary, double overtimeHours, double overtimePay, double netSalary) {
    cout << endl;
    cout << "-------- PAYSLIP --------" << endl;
    cout << "Employee name  : " << name << endl;
    cout << "Basic salary   : " << basicSalary << endl;
    cout << "Overtime hours : " << overtimeHours << endl;
    cout << "Overtime pay   : " << overtimePay << endl;
    cout << "Net salary     : " << netSalary << endl;
    cout << "-------------------------" << endl;
}

int main() {
    string name;
    double basicSalary, overtimeHours;
    double rate = 500;

    getEmployeeDetails(name, basicSalary, overtimeHours);
    double overtimePay = calculateOvertimePay(overtimeHours, rate);
    double netSalary = calculateNetSalary(basicSalary, overtimePay);
    displayPayslip(name, basicSalary, overtimeHours, overtimePay, netSalary);

    return 0;
}
