#include <stdio.h>

// Função que realiza as operações matemáticas
void calcular(float a, float b, float *soma, float *subtracao,
              float *multiplicacao, float *divisao) {

    // Calcula a soma
    *soma = a + b;

    // Calcula a subtração
    *subtracao = a - b;

    // Calcula a multiplicação
    *multiplicacao = a * b;

    // Calcula a divisão
    *divisao = a / b;
}

int main() {

    float num1, num2;
    float soma, subtracao, multiplicacao, divisao;

    // Leitura dos números
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    // Chamada da função
    calcular(num1, num2, &soma, &subtracao,
              &multiplicacao, &divisao);

    // Exibe os resultados
    printf("\nSoma: %.2f\n", soma);
    printf("Subtracao: %.2f\n", subtracao);
    printf("Multiplicacao: %.2f\n", multiplicacao);
    printf("Divisao: %.2f\n", divisao);

    return 0;
}
