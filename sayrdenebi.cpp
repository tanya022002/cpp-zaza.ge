#include <iostream>

using namespace std;

int main() {
    int stick1, stick2;

    cin >> stick1 >> stick2;

    int spaces = (stick2 - stick1) /4;

    cout << stick1+spaces << " " << stick1+2*spaces << " " << stick1+3*spaces;

}
