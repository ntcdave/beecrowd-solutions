/*
    beecrowd | 2377
    Pedágio
*/
#include <iostream>
using namespace std;

int main() {
    // Declaração e inicialização das variáveis
    int quantidade_total, preco_unitario, desconto_por_volume, aumento_por_quantidade;

    // Leitura dos valores de entrada
    cin >>quantidade_total >>preco_unitario >>desconto_por_volume >>aumento_por_quantidade;
    

    // Cálculo do preço total
    int preco_total = ((quantidade_total / preco_unitario) * aumento_por_quantidade) + quantidade_total * desconto_por_volume;

    // Impressão do preço total
    cout <<preco_total<< endl;


    return 0;
}
