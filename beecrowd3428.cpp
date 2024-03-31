#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Estrutura para representar um balão
struct Balloon {
    int height;
    int position;
};

// Função para comparar balões por posição
bool compareBalloons(const Balloon &a, const Balloon &b) {
    return a.position < b.position;
}

int main() {
    int N;
    cin >> N;

    // Vetor para armazenar os balões
    vector<Balloon> balloons(N);

    // Lendo as alturas dos balões e armazenando suas posições
    for (int i = 0; i < N; ++i) {
        cin >> balloons[i].height;
        balloons[i].position = i + 1;
    }

    // Ordenando os balões por suas posições
    sort(balloons.begin(), balloons.end(), compareBalloons);

    int arrows = 1; // Inicialmente, precisamos de uma flecha
    int max_height = balloons[0].height; // Altura máxima atingida pela flecha atual

    // Iterando sobre os balões
    for (int i = 1; i < N; ++i) {
        int height = balloons[i].height;

        // Se a altura do balão for menor do que a altura máxima atingida pela flecha atual
        if (height < max_height) {
            arrows++; // Precisamos de outra flecha
            max_height = height; // Atualizamos a altura máxima atingida
        }

        // Atualizando a altura máxima atingida pela flecha
        max_height = max(max_height, height);
    }

    // Imprimindo o número mínimo de flechas necessárias
    cout << arrows << endl;

    return 0;
}
