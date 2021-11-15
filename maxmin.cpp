#include <iostream>

using namespace std;

int n;

int main() {

    cin >> n;
    signed int arr[n],
    minNum1 = INT_MAX,
    minNum2 = INT_MAX,
    minNum3 = INT_MAX,
    maxNum1 = INT_MIN,
    maxNum2 = INT_MIN,
    maxNum3 = INT_MIN;

    for ( int i = 0; i < n; i++) {

        cin >> arr[i];

        if (minNum1 > arr[i]) {
            minNum2 = minNum1;
            minNum1 = arr[i];
        }
        else if (minNum2 > arr[i]) {
            minNum3 = minNum2;
            minNum2 = arr[i];
        }
        else if (minNum3 > arr[i]) {
            minNum3 = arr[i];
        }

        if (maxNum1 < arr[i]) {
            maxNum2 = maxNum1;
            maxNum1 = arr[i];
        }
        else if (maxNum2 < arr[i]) {
            maxNum3 = maxNum2;
            maxNum2 = arr[i];
        }
        else if (maxNum3 < arr[i]) {
            maxNum3 = arr[i];
        }
    }

    cout << minNum1 << " " << minNum2 << " " << minNum3 << endl;
    cout << maxNum1 << " " << maxNum2 << " " << maxNum3 << endl;
}
