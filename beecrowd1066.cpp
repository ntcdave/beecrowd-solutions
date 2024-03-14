/*
    beecrowd | 1066
    Pares, Ímpares, Positivos e Negativos
*/
#include <iostream>
using namespace std;

int main() {
    int valor, pares = 0, impares = 0, positivos = 0, negativos = 0;

    for (int i = 0; i < 5; i++) {
        cin >> valor;

        // Verifica se o valor é par ou ímpar
        if (valor % 2 == 0) {
            pares++;
        } else {
            impares++;
        }

        // Verifica se o valor é positivo ou negativo
        if (valor > 0) {
            positivos++;
        } else if (valor < 0) {
            negativos++;
        }
    }

    // Exibe os resultados
    cout << pares << " valor(es) par(es)" << endl;
    cout << impares << " valor(es) impar(es)" << endl;
    cout << positivos << " valor(es) positivo(s)" << endl;
    cout << negativos << " valor(es) negativo(s)" << endl;

    return 0;
}