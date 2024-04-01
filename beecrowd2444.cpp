/*

*/
#include <iostream>

using namespace std;

int main() {
    int V, T;
    cin >> V >> T;

    int volume_atual = V;

    for (int i = 0; i < T; ++i) {
        int alteracao;
        cin >> alteracao;

        volume_atual += alteracao;

        // Limita o volume mínimo a 0
        if (volume_atual < 0) {
            volume_atual = 0;
        }
        // Limita o volume máximo a 100
        else if (volume_atual > 100) {
            volume_atual = 100;
        }
    }

    cout << volume_atual << endl;

    return 0;
}
