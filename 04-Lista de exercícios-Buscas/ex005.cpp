#include <iostream>
#include <vector>

using namespace std;

// Função para pesquisa com sentinela
int pesqsent(vector<int>& vet, int val) {
    // Adiciona o valor como sentinela no final do vetor
    int n = vet.size();
    vet.push_back(val);

    int i = 0;
    while (vet[i] != val)
        i++;

    vet.pop_back(); // Remove o valor sentinela adicionado

    if (i < n)
        return i; // Retorna a posição do valor se encontrado
    else
        return -1; // Retorna -1 se o valor não for encontrado
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

    // Realiza a pesquisa com sentinela
    int posicao = pesqsent(vet, valor);

    // Exibe o resultado da pesquisa
    if (posicao != -1) {
        cout << "O valor " << valor << " foi encontrado na posição " << posicao << " do vetor.\n";
    } else {
        cout << "O valor " << valor << " não foi encontrado no vetor.\n";
    }

    return 0;
}
