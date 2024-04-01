/*
    beecrowd | 2782
    Escadinha
*/
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N; // Tamanho da sequência
    vector<int> sequencia(N);

    // Lê a sequência de números
    for (int i = 0; i < N; ++i) {
        cin >> sequencia[i];
    }

    int contador = 0;
    int diferenca = sequencia[1] - sequencia[0]; // Calcula a diferença entre os dois primeiros números

    // Itera sobre a sequência para encontrar as escadinhas
    for (int i = 1; i < N - 1; ++i) {
        if (sequencia[i + 1] - sequencia[i] != diferenca) {
            contador++; // Encontrou o fim de uma escadinha
            diferenca = sequencia[i + 1] - sequencia[i]; // Atualiza a diferença para a próxima possível escadinha
        }
    }

    cout << contador + 1 << endl; // Adiciona 1 para contar a última escadinha

    return 0;
}
