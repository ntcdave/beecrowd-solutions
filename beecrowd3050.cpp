/*
beecrowd 3050
Distânacia entre amigos
*/
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n; // quantidade de prédios
    cin >> n;
    vector <int> predios(n);
    int max = 0;
    for (int i = 0; i < n; i++) cin >> predios[i];

    for (int i = 0; i < n; i++){
        int aux = predios[i]; // distância máxima entre o amigo do primeiro andar do predio i e o amigo mora no terreo do mesmo predio.
        for (int j = i+1; j < n; j++){
            if(predios[i] + (j-i) + predios[j] > aux) aux = predios[i] + (j-i) + predios[j];
        }
        if(aux > max) max = aux;
    }
    cout << max << endl;
    return 0;
}
