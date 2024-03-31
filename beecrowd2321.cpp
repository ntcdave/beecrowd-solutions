/*
beecrowd | 2321
Detectando Colisões
*/
#include <iostream>

using namespace std;

int main(){
    int ax0, ay0, ax1, ay1; // retangulo A
    int bx0, by0, bx1, by1; // retangulo B

    cin >> ax0 >> ay0 >> ax1 >> ay1;
    cin >> bx0 >> by0 >> bx1 >> by1;
    if(bx1 < ax0 || bx0 > ax1 || by1 < ay0 || by0 > ay1) cout << 0 << endl;
    else cout << 1 << endl;

    return 0;
}