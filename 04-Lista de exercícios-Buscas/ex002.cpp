#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int tamanho;
    
    // Solicita o tamanho do vetor ao usuário
    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;

    // Cria um vetor de inteiros com o tamanho especificado
    vector<int> vet(tamanho);

    // Preenche o vetor com inteiros
    cout << "Digite os " << tamanho << " elementos do vetor:\n";
    for (int i = 0; i < tamanho; ++i) {
        cin >> vet[i];
    }

    // Ordena o vetor
    sort(vet.begin(), vet.end());

    // Exibe o vetor ordenado
    cout << "Vetor ordenado:\n";
    for (int i = 0; i < tamanho; ++i) {
        cout << vet[i] << " ";
    }
    cout << endl;

    return 0;
}
