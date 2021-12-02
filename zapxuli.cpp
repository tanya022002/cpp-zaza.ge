#include <iostream>

using namespace std;

int main() {
    int countOfTemperature;
    cin >> countOfTemperature;

    int temperatures[countOfTemperature];
    int sumOfTempatures = 0 ;

    for ( int i = 0; i < countOfTemperature; i++) {
        cin >> temperatures[i];
        sumOfTempatures += temperatures[i];
    }
    double averageTempature = (double)sumOfTempatures / countOfTemperature;


    int answer = 0 ;
    for ( int i = 0; i < countOfTemperature; i++) {
        if ( temperatures[i] >= averageTempature) {
            answer++;
        }
    }
    cout << answer << endl;

    return 0;
}
