#include <stdio.h>

// Função que encontra o maior e o menor valor do vetor
void encontrarMaiorMenor(int *array, int tamanho, int *maior, int *menor) {

    // Inicializa maior e menor com o primeiro elemento
    *maior = array[0];
    *menor = array[0];

    // Percorre o vetor
    for(int i = 1; i < tamanho; i++) {

        // Verifica o maior valor
        if(array[i] > *maior) {
            *maior = array[i];
        }

        // Verifica o menor valor
        if(array[i] < *menor) {
            *menor = array[i];
        }
    }
}

int main() {

    int numeros[5];
    int maior, menor;

    // Leitura dos valores
    printf("Digite 5 numeros:\n");

    for(int i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
    }

    // Chamada da função
    encontrarMaiorMenor(numeros, 5, &maior, &menor);

    // Exibe os resultados
    printf("\nMaior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}
