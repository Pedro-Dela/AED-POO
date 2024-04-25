#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Função para ordenar os nomes pelo tamanho usando o algoritmo Selection Sort
void selectionSort(vector<string>& nomes) {
    int n = nomes.size();
    for (int i = 0; i < n - 1; i++) {
        int menor_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (nomes[j].length() < nomes[menor_idx].length()) {
                menor_idx = j;
            }
        }
        if (menor_idx != i) {
            swap(nomes[i], nomes[menor_idx]);
        }
    }
}

int main() {
    int n;
    cout << "Digite o número de nomes: ";
    cin >> n;

    vector<string> nomes(n);
    cout << "Digite os nomes um por um:\n";
    for (int i = 0; i < n; i++) {
        cin >> nomes[i];
    }

    // Ordenando os nomes pelo tamanho usando o algoritmo de Selection Sort
    selectionSort(nomes);

    // Mostrando os nomes ordenados pelo tamanho
    cout << "\nNomes ordenados pelo tamanho:\n";
    for (const string& nome : nomes) {
        cout << nome << endl;
    }

    return 0;
}
