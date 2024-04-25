#include <iostream>
#include <cstring>

using namespace std;

// Definição da estrutura pessoa
struct pessoa {
    int Matricula;
    char Nome[30];
    float Nota;
};

// Função para mesclar dois subvetores de arr[]
// O primeiro subvetor é arr[l..m]
// O segundo subvetor é arr[m+1..r]
template <typename T>
void merge(T arr[], int l, int m, int r, int campo) {
    int n1 = m - l + 1;
    int n2 = r - m;

    // Criando vetores temporários
    T L[n1], R[n2];

    // Copiando dados para vetores temporários L[] e R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // Mesclando os vetores temporários de volta para arr[l..r]
    int i = 0; // Índice inicial do primeiro subvetor
    int j = 0; // Índice inicial do segundo subvetor
    int k = l; // Índice inicial do subvetor mesclado
    while (i < n1 && j < n2) {
        if (campo == 1 ? (L[i].Matricula <= R[j].Matricula) : (strcmp(L[i].Nome, R[j].Nome) <= 0)) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copiando os elementos restantes de L[], se houver algum
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copiando os elementos restantes de R[], se houver algum
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Função principal que classifica arr[l..r] usando merge()
// campo = 1 para ordenar por Matricula, campo = 2 para ordenar por Nome
template <typename T>
void mergeSort(T arr[], int l, int r, int campo) {
    if (l >= r)
        return;

    int m = l + (r - l) / 2;
    mergeSort(arr, l, m, campo);
    mergeSort(arr, m + 1, r, campo);
    merge(arr, l, m, r, campo);
}

// Função para imprimir o array de pessoas
void imprimirPessoas(pessoa arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Matricula: " << arr[i].Matricula << ", Nome: " << arr[i].Nome << ", Nota: " << arr[i].Nota << endl;
    }
}

int main() {
    int N;
    cout << "Digite o número de pessoas: ";
    cin >> N;

    // Alocando memória para o array de pessoas
    pessoa *arr = new pessoa[N];

    // Preenchendo o array de pessoas
    for (int i = 0; i < N; i++) {
        cout << "Digite a Matricula da pessoa " << i + 1 << ": ";
        cin >> arr[i].Matricula;
        cout << "Digite o Nome da pessoa " << i + 1 << ": ";
        cin.ignore(); // Limpar o buffer do teclado
        cin.getline(arr[i].Nome, 30);
        cout << "Digite a Nota da pessoa " << i + 1 << ": ";
        cin >> arr[i].Nota;
    }

    int campo;
    cout << "Escolha o campo para ordenação (1 para Matricula, 2 para Nome): ";
    cin >> campo;

    // Chamando a função mergeSort para ordenar o array de pessoas
    mergeSort(arr, 0, N - 1, campo);

    // Imprimindo o array de pessoas ordenado
    cout << "\nArray de pessoas ordenado:\n";
    imprimirPessoas(arr, N);

    // Liberando memória alocada
    delete[] arr;

    return 0;
}
