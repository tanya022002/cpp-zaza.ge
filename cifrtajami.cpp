#include <iostream>

using namespace std;

int main() {
    int numbersCount, numbers,answer = 0, newNumber = 0,sumOfNUmber = 0;
    
    cin >> numbersCount;
    
    for( int i = 0; i < numbersCount; i++) {
        cin >> numbers;
        
        sumOfNUmber = numbers/10 + numbers%10;
        
        if(sumOfNUmber > newNumber) {
            newNumber = sumOfNUmber;
            answer = numbers;
        }
    }
    cout << answer;
}
