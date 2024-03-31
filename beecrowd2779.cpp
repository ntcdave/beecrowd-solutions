/*
beecrowd | 2779
Álbum da Copa
*/
#include <iostream>
#include <vector> // p criar o vetor
#include <algorithm> // p pegar as funcoes sort(), erase(), begin(), end(), size().

using namespace std;

int main() {
    int numEspacosAlbum, numFigurinhasCompradas;
    
    // Recebendo o número total de espaços e figurinhas compradas
    cin >> numEspacosAlbum;
    cin >> numFigurinhasCompradas;
    
    // Vetor p armazenar as figurinhas compradas
    vector<int> figurinhasCompradas(numFigurinhasCompradas);
    

    for (int i = 0; i < numFigurinhasCompradas; ++i) {
        cin >> figurinhasCompradas[i];
    }
    
    // Ordenando o vetor de figurinhas compradas p facilitar a contagem
    sort(figurinhasCompradas.begin(), figurinhasCompradas.end());
    
    // Removendo figurinhas repetidas
    figurinhasCompradas.erase(unique(figurinhasCompradas.begin(), figurinhasCompradas.end()), figurinhasCompradas.end());
    
    // Calculando quantas figurinhas faltam para completar o álbum
    int numFigurinhasFaltantes = numEspacosAlbum - figurinhasCompradas.size();
    
    cout << numFigurinhasFaltantes << endl;
    
    return 0;
}
