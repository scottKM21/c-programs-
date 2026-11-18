#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    int copies;

public:
    void inputDetails() {
        cout << "Enter book title: ";
        getline(cin, title);
        cout << "Enter author: ";
        getline(cin, author);
        cout << "Enter number of copies: ";
        cin >> copies;
    }

    void borrowBook() {
        if (copies > 0) {
            copies--;
            cout << "Book borrowed.\n";
        } else {
            cout << "No copies available.\n";
        }
    }

    void displayDetails() {
        cout << "\nTitle: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Copies available: " << copies << endl;
    }
};

int main() {
    Book b;

    b.inputDetails();
    b.displayDetails();
    b.borrowBook();
    b.displayDetails();

    return 0;
}
