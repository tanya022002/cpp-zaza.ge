#include <iostream>

using namespace std;

int main() {
    int numbersCount;
    int numbers[30000]={};
    
    cin >> numbersCount;
    
    for ( int i = 0; i < numbersCount; i++) {
        cin >> numbers[i];
    }
    
    for ( int i = 0; i < numbersCount; i++) {
        bool dividesAll = true;
        for ( int j = 0; j < numbersCount; j++)
            if(numbers[j] % numbers[i] != 0 ) {
                dividesAll = false;
                break;
            }
        if(dividesAll) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO" << endl;

}
