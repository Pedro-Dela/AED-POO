#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Função para ordenar a lista de nomes usando o algoritmo Insertion Sort
void insertionSort(vector<string>& nomes) {
    int n = nomes.size();
    for (int i = 1; i < n; i++) {
        string chave = nomes[i];
        int j = i - 1;
        while (j >= 0 && nomes[j] > chave) {
            nomes[j + 1] = nomes[j];
            j = j - 1;
        }
        nomes[j + 1] = chave;
    }
}

int main() {
    int n;
    cout << "Digite o número de nomes: ";
    cin >> n;

    vector<string> nomes;
    string nome;
    cout << "Digite os nomes um por um:\n";
    for (int i = 0; i < n; i++) {
        cin >> nome;
        nomes.push_back(nome);
    }

    // Ordenando os nomes usando o algoritmo de inserção
    insertionSort(nomes);

    // Mostrando os nomes ordenados
    cout << "\nNomes ordenados:\n";
    for (const string& nome : nomes) {
        cout << nome << endl;
    }

    return 0;
}
