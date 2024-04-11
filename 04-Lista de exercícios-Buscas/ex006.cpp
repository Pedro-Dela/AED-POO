#include <iostream>
#include <vector>
#include <algorithm> // necessário para o uso da função std::sort

using namespace std;

// Função para pesquisa sequencial
int pesqseq(vector<int>& vet, int val) {
    int pesquisas = 0;
    for (int i = 0; i < vet.size(); ++i) {
        pesquisas++;
        if (vet[i] == val) {
            return pesquisas;  // Retorna o número de pesquisas feitas
        }
    }
    return pesquisas;  // Retorna o número de pesquisas feitas
}

// Função para pesquisa binária
int pesqbin(vector<int>& vet, int val) {
    int pesquisas = 0;
    sort(vet.begin(), vet.end());

    int esq = 0;
    int dir = vet.size() - 1;
    
    while (esq <= dir) {
        pesquisas++;
        int meio = esq + (dir - esq) / 2;
        
        if (vet[meio] == val)
            return pesquisas; // Retorna o número de pesquisas feitas
        else if (vet[meio] < val)
            esq = meio + 1;
        else
            dir = meio - 1;
    }
    
    return pesquisas; // Retorna o número de pesquisas feitas
}

// Função para pesquisa com sentinela
int pesqsent(vector<int>& vet, int val) {
    int pesquisas = 0;
    vet.push_back(val); // Adiciona o valor como sentinela no final do vetor

    int i = 0;
    while (vet[i] != val) {
        pesquisas++;
        i++;
    }

    vet.pop_back(); // Remove o valor sentinela adicionado

    if (i < vet.size() - 1)
        return pesquisas; // Retorna o número de pesquisas feitas
    else
        return pesquisas; // Retorna o número de pesquisas feitas
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

    // Realiza as pesquisas e conta o número de pesquisas feitas
    int pesquisas_seq = pesqseq(vet, valor);
    int pesquisas_bin = pesqbin(vet, valor);
    int pesquisas_sent = pesqsent(vet, valor);

    // Exibe o número de pesquisas feitas em cada tipo de pesquisa
    cout << "Número de pesquisas feitas em cada tipo de pesquisa:\n";
    cout << "Pesquisa Sequencial: " << pesquisas_seq << " pesquisas\n";
    cout << "Pesquisa Binária: " << pesquisas_bin << " pesquisas\n";
    cout << "Pesquisa com Sentinela: " << pesquisas_sent << " pesquisas\n";

    return 0;
}
