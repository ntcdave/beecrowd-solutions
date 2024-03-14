/*
    beecrowd | 1074
    Par ou Ímpar
*/
#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    for(int i = 0;i < n;i++){
        int x;
        cin >> x;
        if (x == 0) {
            cout << "NULL" << endl;
        } else if (x % 2 == 1 && x > 0) {
            cout << "ODD POSITIVE" << endl;
        } else if (x % 2 == -1 && x < 0) {
            cout << "ODD NEGATIVE" << endl;
        } else if (x % 2 == 0 && x > 0) {
            cout << "EVEN POSITIVE" << endl;
        } else if (x % 2 == 0 && x < 0) {
            cout << "EVEN NEGATIVE" << endl;
        }
    }
    return 0;
}