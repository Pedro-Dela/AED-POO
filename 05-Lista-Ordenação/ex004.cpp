#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

// Função para preencher um array com 100 alturas aleatórias entre 1 e 3 metros
void preencherAlturas(float alturas[]) {
    srand(time(NULL)); // Semente para números aleatórios baseada no tempo atual
    for (int i = 0; i < 100; i++) {
        // Gerando altura aleatória entre 100 e 300 (1m = 100cm)
        alturas[i] = (rand() % 200 + 100) / 100.0;
    }
}

// Função para ordenar o array de alturas usando Bubble Sort
void bubbleSort(float alturas[]) {
    for (int i = 0; i < 100 - 1; i++) {
        for (int j = 0; j < 100 - i - 1; j++) {
            if (alturas[j] > alturas[j + 1]) {
                float temp = alturas[j];
                alturas[j] = alturas[j + 1];
                alturas[j + 1] = temp;
            }
        }
    }
}

int main() {
    float alturas[100];

    // Preenchendo o array com alturas aleatórias entre 1 e 3 metros
    preencherAlturas(alturas);

    // Ordenando as alturas usando Bubble Sort
    bubbleSort(alturas);

    // Exibindo as alturas ordenadas
    cout << "Alturas ordenadas:\n";
    for (int i = 0; i < 100; i++) {
        cout << fixed << setprecision(2) << alturas[i] << " metros" << endl;
    }

    return 0;
}
