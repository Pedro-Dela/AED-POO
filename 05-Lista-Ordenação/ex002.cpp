#include <iostream>
#include <string>

using namespace std;

// Função para trocar dois elementos de posição em um vetor de caracteres
void trocar(char& a, char& b) {
    char temp = a;
    a = b;
    b = temp;
}

// Função para particionar o vetor e retornar o índice do pivô
int particionar(string& s, int baixo, int alto) {
    char pivot = s[alto]; // escolhendo o último elemento como pivô
    int i = (baixo - 1); // índice do menor elemento

    for (int j = baixo; j <= alto - 1; j++) {
        // Se o elemento atual é menor ou igual ao pivô
        if (s[j] >= pivot) {
            i++; // incrementa o índice do menor elemento
            trocar(s[i], s[j]);
        }
    }
    trocar(s[i + 1], s[alto]);
    return (i + 1);
}

// Função Quick Sort para ordenar as letras da string em ordem decrescente
void quickSort(string& s, int baixo, int alto) {
    if (baixo < alto) {
        // Obter o índice do pivô
        int pi = particionar(s, baixo, alto);

        // Separadamente ordenar os elementos antes e depois do pivô
        quickSort(s, baixo, pi - 1);
        quickSort(s, pi + 1, alto);
    }
}

int main() {
    string input;
    cout << "Digite uma string: ";
    cin >> input;

    // Ordenando a string em ordem decrescente usando Quick Sort
    quickSort(input, 0, input.length() - 1);

    // Mostrando a string ordenada em ordem decrescente
    cout << "String ordenada em ordem decrescente: " << input << endl;

    return 0;
}
