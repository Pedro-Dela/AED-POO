#include <iostream>
#include <vector>

using namespace std;

// Função para pesquisa sequencial
int pesqseq(vector<int>& vet, int val) {
    for (int i = 0; i < vet.size(); ++i) {
        if (vet[i] == val) {
            return i;  // Retorna a posição do valor se encontrado
        }
    }
    return -1;  // Retorna -1 se o valor não for encontrado
}

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

    // Valor a ser pesquisado
    int valor;
    cout << "Digite o valor a ser pesquisado: ";
    cin >> valor;

    // Realiza a pesquisa sequencial
    int posicao = pesqseq(vet, valor);

    // Exibe o resultado da pesquisa
    if (posicao != -1) {
        cout << "O valor " << valor << " foi encontrado na posição " << posicao << " do vetor.\n";
    } else {
        cout << "O valor " << valor << " não foi encontrado no vetor.\n";
    }

    return 0;
}
