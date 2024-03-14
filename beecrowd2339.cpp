/*
    beecrowd | 2339
    Aviões de Papel
    
*/
#include <iostream>
using namespace std;

int main() {
    int competidores, folhas_compradas, folhas_por_competidor;
    char resultado;

    // Leitura dos dados de entrada
    cin >> competidores >> folhas_compradas >> folhas_por_competidor;

    // Verificação se a quantidade de folhas é suficiente
    if (competidores * folhas_por_competidor <= folhas_compradas) {
        resultado = 'S'; // Suficiente
    } else {
        resultado = 'N'; // Não suficiente
    }

    // Saída do resultado
    cout << resultado << endl;

    return 0;
}