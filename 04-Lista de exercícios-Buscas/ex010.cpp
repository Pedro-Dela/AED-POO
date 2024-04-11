#include <iostream>

using namespace std;

// Função para procurar o valor N no vetor X
// Retorna a posição do valor N e o número de pesquisas realizadas
pair<int, int> procurarValorN(int X[], int tamanho, int N) {
    int pesquisas = 0;
    for (int i = 0; i < tamanho; ++i) {
        pesquisas++;
        if (X[i] == N) {
            return make_pair(i, pesquisas);
        }
    }
    // Se o valor N não for encontrado, retorna -1 como posição e o número de pesquisas
    return make_pair(-1, pesquisas);
}

int main() {
    int tamanho;

    // Solicita o tamanho do vetor ao usuário
    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;

    // Verifica se o tamanho do vetor é válido
    if (tamanho <= 0) {
        cout << "Tamanho do vetor inválido. Por favor, digite um valor positivo.\n";
        return 1;
    }

    int X[tamanho];

    // Lê os valores do vetor
    cout << "Digite os valores do vetor X:\n";
    for (int i = 0; i < tamanho; ++i) {
        cin >> X[i];
    }

    int valorN;
    // Valor a ser procurado no vetor
    cout << "Digite o valor a ser procurado no vetor: ";
    cin >> valorN;

    // Chama a função para procurar o valor N no vetor
    pair<int, int> resultado = procurarValorN(X, tamanho, valorN);

    // Exibe o resultado da pesquisa
    if (resultado.first != -1) {
        cout << "O valor " << valorN << " foi encontrado na posição " << resultado.first << " do vetor.\n";
        cout << "Número de pesquisas realizadas: " << resultado.second << endl;
    } else {
        cout << "O valor " << valorN << " não foi encontrado no vetor.\n";
        cout << "Número de pesquisas realizadas: " << resultado.second << endl;
    }

    return 0;
}
