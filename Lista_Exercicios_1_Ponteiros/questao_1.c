#include <stdio.h>

// Função responsável por trocar os valores de duas variáveis
void trocar(int *a, int *b) {

    int temp;

    // Armazena temporariamente o valor apontado por a
    temp = *a;

    // Atribui o valor de b para a
    *a = *b;

    // Atribui o valor armazenado em temp para b
    *b = temp;
}

int main() {

    int x, y;

    // Leitura dos valores
    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de y: ");
    scanf("%d", &y);

    // Exibe os valores antes da troca
    printf("\nAntes da troca:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    // Chamada da função de troca
    trocar(&x, &y);

    // Exibe os valores após a troca
    printf("\nDepois da troca:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}
