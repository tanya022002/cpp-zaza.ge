#include <iostream>

using namespace std;

// this function returns true when array is sorted scending, otherwise false.
bool isSortedAcs(int arr[], int arrSize) {
    for (int i = 0; i < arrSize - 1; i++) {
        if (arr[i] > arr[i+1]) {
            return  false;
        }
    }
    return true;
}

 // prints YES or NO based on values of testCaseResults parameter
 void printTestCaseResults(bool testCaseResults[], int count) {
    // iterate each test case result and print YES or NO
    for (int test = 0; test < count; test++) {

        if (testCaseResults[test] ) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    // read test case count
    int countOfTests;
    cin >> countOfTests;

    // declare array of test results
    bool testCaseResults[countOfTests];

    // iterate each test case
    for (int test = 0; test < countOfTests; test++) {
        // read test case numbers
        int arrSize;
        cin >> arrSize;

        int arr[arrSize];

        for (int i = 0; i < arrSize; i++) {
            cin >> arr[i];
        }

        // set test case result
        testCaseResults[test] = isSortedAcs(arr, arrSize);
    }

    printTestCaseResults(testCaseResults, countOfTests);
}
