#include <iostream>
#include <vector>

using namespace std;

int main() {
    int numOfMems;
    cin >> numOfMems;

    vector<int> mems;
    int memoryValue;
    for (int i = 0; i < numOfMems; i++)
    {
        cin >> memoryValue;
        if (memoryValue > 0) {
            mems.push_back(memoryValue);
        }
    }

    int greatestValueSum = 0;
    int sum;
    int greatestValue;

    for (int i = 0; i < mems.size(); i++) {
        sum = 0;
        greatestValue = 0;

        for (int j = i; j < mems.size(); j++) {
            if (j == i) {
                sum += mems.at(j);
                greatestValue = mems.at(j);
            }
            else if (greatestValue < mems.at(j)) {
                greatestValue = mems.at(j);
                sum += mems.at(j);
            }
        }

        if (greatestValueSum < sum) {
            greatestValueSum = sum;
        }
    }
    cout << greatestValueSum;

    return 0;
}