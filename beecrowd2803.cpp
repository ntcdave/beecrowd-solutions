/*
    beecrowd | 2803
    Estados do Norte
*/

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    // Define um dicionário mapeando estados às suas respectivas regiões
    unordered_map<string, string> state_to_region = {
        {"roraima", "norte"},
        {"acre", "norte"},
        {"amapa", "norte"},
        {"amazonas", "norte"},
        {"para", "norte"},
        {"rondonia", "norte"},
        {"tocantins", "norte"}
    };

    // Obtém o nome do estado inserido pelo usuário
    string state_name;
    cin >> state_name;

    // Verifica se o estado pertence à região Norte
    if (state_to_region.find(state_name) != state_to_region.end()) {
        cout << "Regiao Norte" << endl;
    } else {
        cout << "Outra regiao" << endl;
    }

    return 0;
}
