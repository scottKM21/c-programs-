#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int occupancy[5][10];

    for (int i = 0; i < 5; i++) {
        int occupied = 0;
        int vacant = 0;

        for (int j = 0; j < 10; j++) {
            occupancy[i][j] = rand() % 2;   // 1 = occupied, 0 = vacant

            if (occupancy[i][j] == 1)
                occupied++;
            else
                vacant++;
        }

        cout << "Floor " << i + 1 << " - Occupied: " << occupied
             << ", Vacant: " << vacant << endl;
    }

    return 0;
}
