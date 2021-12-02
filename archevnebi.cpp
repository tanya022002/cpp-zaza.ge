#include <iostream>

using namespace std;

int main() {
    int countOfPoints, topPointsCount;
    cin >> countOfPoints >> topPointsCount;

    int points[countOfPoints];
    int pointCounts[101] = {0};

    for (int i = 0; i < countOfPoints; i++ ){
        cin >> points[i];
        pointCounts[points[i]]++;
    }
    int peopleCount = 0;
    for (int point = 100; point > 0; point--) {
        if (pointCounts[point] == 0 ) {
            continue;
        }
        peopleCount += pointCounts[point];
        if (--topPointsCount == 0) {
            break;
        }
    }
    cout << peopleCount << endl;
}
