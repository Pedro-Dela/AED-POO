#include <iostream>
#include <vector>
#include <algorithm> // necessário para o uso da função std::sort

using namespace std;

// Função para pesquisa binária
int pesqbin(vector<int>& vet, int val) {
    // Primeiro, é necessário ordenar o vetor
    sort(vet.begin(), vet.end());

    int esq = 0;
    int dir = vet.size() - 1;
    
    while (esq <= dir) {
        int meio = esq + (dir - esq) / 2;
        
        if (vet[meio] == val)
            return meio; // Retorna a posição do valor se encontrado
        else if (vet[meio] < val)
            esq = meio + 1;
        else
            dir = meio - 1;
    }
    
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

    // Realiza a pesquisa binária
    int posicao = pesqbin(vet, valor);

    // Exibe o resultado da pesquisa
    if (posicao != -1) {
        cout << "O valor " << valor << " foi encontrado na posição " << posicao << " do vetor.\n";
    } else {
        cout << "O valor " << valor << " não foi encontrado no vetor.\n";
    }

    return 0;
}
