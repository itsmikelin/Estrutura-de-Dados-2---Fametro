#include <stdio.h>

// Função que inverte a string utilizando ponteiros
void inverterString(char *str) {

    char *inicio = str;
    char *fim = str;

    // Encontra o final da string
    while(*fim != '\0') {
        fim++;
    }

    fim--;

    // Troca os caracteres até o centro da string
    while(inicio < fim) {

        char temp = *inicio;

        *inicio = *fim;
        *fim = temp;

        inicio++;
        fim--;
    }
}

int main() {

    char texto[100];

    // Leitura da string
    printf("Digite uma palavra: ");
    scanf("%s", texto);

    // Chamada da função
    inverterString(texto);

    // Exibe a string invertida
    printf("String invertida: %s\n", texto);

    return 0;
}
