#include <iostream>
#include <string>

using namespace std;

int main() {
    string house1;
    cin >> house1;

    string house2;
    cin >> house2;

    string houseGiven;
    int house1Score = 0;
    int house2Score = 0;
    string goldenSnitch = "caught the Golden Snitch";

    getline(cin, houseGiven);

    while (houseGiven.find(goldenSnitch) == -1) {
        if (houseGiven == house1) {
            house1Score += 10;
        }
        else if (houseGiven == house2) {
            house2Score += 10;
        }
        getline(cin, houseGiven);
    }


    if (houseGiven.find(house1) != -1)
    {
        house1Score += 150;
    }
    else
    {
        house2Score += 150;
    }

    if (house1Score > house2Score) {
        cout << house1 << " wins" << endl;
        cout << house1Score << "-" << house2Score;
    }
    else if (house1Score < house2Score)
    {
        cout << house2 << " wins" << endl;
        cout << house1Score << "-" << house2Score;
    }
    else {
        cout << "Tie";
    }
}