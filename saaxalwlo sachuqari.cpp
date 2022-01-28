#include <iostream>

using namespace std;

bool sort_by_transaction_count(pair<string, int> p1, pair<string, int> p2){
    return p1.second > p2.second;
}

int main () {
    int customerCount, presentCount;
    pair<string,int> persons[30000] = {};

    cin >> customerCount >> presentCount;

    for ( int i = 0; i < customerCount; i++) {

        string name = "", surname = "";
        cin >> name >> surname;
        string fullname = name + " " + surname;
        int transactions;
        cin >> transactions;

        persons[i] = make_pair(fullname, transactions);
    }

    sort(begin(persons), end(persons), sort_by_transaction_count);

    for ( int i = 0; i < presentCount; i++) {
        cout << persons[i].first << " " << persons[i].second << endl;
    }
}
