#include <iostream>

using namespace std;

// método de ordenação utilizado 
void quickSort(int vetor[], int inicio, int fim) {
    int i = inicio, j = fim, pivo = vetor[(inicio + fim) / 2];
    while (i <= j) {
        while (vetor[i] < pivo) i++;
        while (vetor[j] > pivo) j--;
        if (i <= j) {
            swap(vetor[i], vetor[j]);
            i++;
            j--;
        }
    }
    if (inicio < j) quickSort(vetor, inicio, j);
    if (i < fim) quickSort(vetor, i, fim);
}

// método que faz a busca binária 
int buscaBinaria(int vetor[], int tamanho, int elemento) {
    int esquerda = 0, direita = tamanho - 1;
    while (esquerda <= direita) {
        int meio = (esquerda + direita) / 2;
        if (vetor[meio] == elemento) {
            return meio;
        }
        else if (vetor[meio] < elemento) {
            esquerda = meio + 1;
        }
        else {
            direita = meio - 1;
        }
    }
    return -1; 
}

// método que recebe e insere no método que ordena o vetor, o vetor que foi informado pelo usuário 
void ordenarVetor() {
  int tamanho = 5; 
  int vetor[tamanho]; 

  for(int i = 0; i < tamanho; i++) {
    cout << "Digite o valor " << i+1 << " do vetor: ";
    cin >> vetor[i];
  }
    
    // chamada do primeiro método
    quickSort(vetor, 0, tamanho - 1);

    cout << "Valores do vetor ordenado: ";
    for(int i = 0; i < tamanho; i++) {
        cout << vetor[i] << " ";
    }
    
    int elemento;
    cout << "\nDigite o valor que deseja buscar: ";
    cin >> elemento;
    // chamada do segundo método 
    int posicao = buscaBinaria(vetor, tamanho, elemento);
    if (posicao == -1) {
        cout << "Elemento não encontrado\n";
    }
    else {
        cout << "Elemento encontrado na posição " << posicao << "\n";
    }
}


int main() {
    ordenarVetor(); 
}