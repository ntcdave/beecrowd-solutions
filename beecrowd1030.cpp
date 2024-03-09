/* beecrowd | 1030
A Lenda de Flavious Josephus */
#include <iostream>
#include <cmath>

using namespace std;

int josephus(int n, int k) {
    if (n == 1) 
        return 1;
    else 
        return (josephus(n - 1, k) + k - 1) % n + 1;
}

int main() {
    int numCasos, n, k;
    cin >> numCasos;

    for (int caso = 1; caso <= numCasos; ++caso) {
        cin >> n >> k;
        int sobrevivente = josephus(n, k);
        cout << "Case " << caso << ": " << sobrevivente << '\n';
    }

    return 0;
}
