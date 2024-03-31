/*
    beecrowd | 1129
    Leitura Ótica
*/
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    
    while (true) {
        // Ler o número de questões
        cin >> N;
        
        // Verificar se é o fim da entrada
        if (N == 0) {
            break;
        }
        
        // Processar cada questão
        for (int i = 0; i < N; i++) {
            vector<int> valores(5);
            int contagemPretos = 0;
            int indicePreto = -1;
            
            // Ler os valores dos retângulos para uma questão
            for (int j = 0; j < 5; j++) {
                cin >> valores[j];
                
                // Verificar se o valor indica um retângulo preto
                if (valores[j] <= 127) {
                    contagemPretos++;
                    indicePreto = j;
                }
            }
            
            // Se nenhum ou mais de um retângulo foi marcado como preto, retorna resposta inválida
            if (contagemPretos != 1) {
                cout << '*' << endl;
            } else {
                // Retorna a alternativa correspondente ao retângulo marcado como preto
                cout << char('A' + indicePreto) << endl;
            }
        }
    }
    
    return 0;
}
    