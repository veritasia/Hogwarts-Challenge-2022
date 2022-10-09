#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int aCoord, bCoord, radius, amount;
    cin >> aCoord;
    cin >> bCoord;
    cin >> radius;
    cin >> amount;

    for (int i = 0; i < amount; i++) {
        int cCoord, dCoord;
        cin >> cCoord;
        cin >> dCoord;

        float distance;

        distance = sqrt(pow(aCoord - cCoord, 2) + pow(bCoord - dCoord, 2));
        
        if (distance <= radius) {
            cout << "no" << endl;
        }
        else {
            cout << "yes" << endl;
        }
    }

        return 0;
}