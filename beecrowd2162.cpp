/*
    beecrowd | 2162
    Picos e Vales
*/
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> medidas(N);
    for (int i = 0; i < N; ++i) {
        cin >> medidas[i];
    }

    if (N == 1) {
        cout << "1" << endl;
        return 0;
    } else if (N == 2) {
        if (medidas[0] != medidas[1]) {
            cout << "1" << endl;
        } else {
            cout << "0" << endl;
        }
        return 0;
    }

    bool vale = true;

    for (size_t i = 1; i < medidas.size() - 1; ++i) {
        if ((medidas[i] > medidas[i - 1] && medidas[i] > medidas[i + 1]) ||
            (medidas[i] < medidas[i - 1] && medidas[i] < medidas[i + 1])) {
            continue;
        } else {
            vale = false;
            break;
        }
    }

    if (vale) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }

    return 0;
}
