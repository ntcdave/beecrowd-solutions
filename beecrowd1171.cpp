/*
    1171 - Frequência de Números
*/
#include <iostream>
#include <map>

using namespace std;

int main() {
    int N;
    cin >> N;

    map<int, int> ocorrencias;

    // Lê os valores e conta suas ocorrências
    for (int i = 0; i < N; ++i) {
        int valor;
        cin >> valor;
        ocorrencias[valor]++;
    }

    // Imprime os valores e suas contagens em ordem crescente de valor
    for (auto it = ocorrencias.begin(); it != ocorrencias.end(); ++it) {
        cout << it->first << " aparece " << it->second << " vez(es)" << endl;
    }

    return 0;
}
