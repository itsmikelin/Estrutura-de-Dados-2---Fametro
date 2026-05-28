#include <stdio.h>

// Função que dobra o valor da variável
void dobrar(int *numero) {

    // Multiplica o valor por 2
    *numero = (*numero) * 2;
}

int main() {

    int valor;

    // Leitura do valor
    printf("Digite um numero: ");
    scanf("%d", &valor);

    // Chamada da função
    dobrar(&valor);

    // Exibe o resultado
    printf("Dobro do valor: %d\n", valor);

    return 0;
}
