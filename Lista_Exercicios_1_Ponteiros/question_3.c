#include <stdio.h>

int main() {

    int numero;
    int *ponteiro;

    // Atribui valor à variável
    numero = 10;

    // Ponteiro recebe o endereço da variável
    ponteiro = &numero;

    // Exibe os dados
    printf("Valor da variavel: %d\n", numero);
    printf("Endereco da variavel: %p\n", &numero);
    printf("Valor do ponteiro: %p\n", ponteiro);
    printf("Valor apontado pelo ponteiro: %d\n", *ponteiro);

    return 0;
}
