#include <iostream>

using namespace std;

int main() {
    int N;

    // Solicita o tamanho do vetor ao usuário
    cout << "Digite o tamanho do vetor: ";
    cin >> N;

    // Verifica se o tamanho do vetor é válido
    if (N <= 0) {
        cout << "Tamanho do vetor inválido. Por favor, digite um valor positivo.\n";
        return 1;
    }

    int X[N];

    // Lê os valores do vetor
    cout << "Digite os valores do vetor X:\n";
    for (int i = 0; i < N; ++i) {
        cin >> X[i];
    }

    // Encontra o maior elemento do vetor e sua posição
    int maior = X[0];
    int posicao = 0;
    for (int i = 1; i < N; ++i) {
        if (X[i] > maior) {
            maior = X[i];
            posicao = i;
        }
    }

    // Exibe o maior elemento e sua posição
    cout << "O maior elemento do vetor é " << maior << " e está na posição " << posicao << ".\n";

    return 0;
}
