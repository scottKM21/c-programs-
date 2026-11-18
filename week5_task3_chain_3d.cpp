#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int chain[3][5][10];
    int totalOccupied = 0;

    for (int b = 0; b < 3; b++) {
        for (int f = 0; f < 5; f++) {
            for (int r = 0; r < 10; r++) {
                chain[b][f][r] = rand() % 2;

                if (chain[b][f][r] == 1) {
                    totalOccupied++;
                }
            }
        }
    }

    cout << "Total occupied rooms across all branches: " << totalOccupied << endl;

    return 0;
}
