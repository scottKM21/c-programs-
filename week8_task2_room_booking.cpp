#include <iostream>
#include <string>
using namespace std;

class RoomBooking {
private:
    string guestName;
    int roomNumber;
    int days;

public:
    // constructor
    RoomBooking(string g, int r, int d) {
        guestName = g;
        roomNumber = r;
        days = d;
        cout << "Room booking confirmed" << endl;
    }

    void displayBooking() {
        cout << "\nGuest name: " << guestName << endl;
        cout << "Room number: " << roomNumber << endl;
        cout << "Days booked: " << days << endl;
    }

    // destructor
    ~RoomBooking() {
        cout << "Booking ended, room released" << endl;
    }
};

int main() {
    RoomBooking booking("Mary Wanjiru", 204, 3);
    booking.displayBooking();

    return 0;
}
