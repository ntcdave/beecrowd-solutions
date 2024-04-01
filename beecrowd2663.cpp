/*
    beecrowd | 2663
    Fase
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> pontuacoes(N);
    for (int i = 0; i < N; ++i) {
        cin >> pontuacoes[i];
    }

    // Ordena as pontuações em ordem decrescente
    sort(pontuacoes.begin(), pontuacoes.end(), greater<int>());

    // Verifica quantos competidores têm pontuações iguais ou maiores que a pontuação na posição K-1
    int classificados = 0;
    int pontuacao_minima = pontuacoes[K - 1];
    for (int i = 0; i < N; ++i) {
        if (pontuacoes[i] >= pontuacao_minima && pontuacoes[i] > 0) {
            classificados++;
        }
    }

    cout << classificados << endl;

    return 0;
}
