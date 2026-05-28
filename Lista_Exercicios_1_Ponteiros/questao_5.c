#include <stdio.h>

// Função que copia uma string utilizando ponteiros
void copiarString(char *origem, char *destino) {

    // Copia caractere por caractere
    while(*origem != '\0') {

        *destino = *origem;

        origem++;
        destino++;
    }

    // Adiciona o caractere de fim da string
    *destino = '\0';
}

int main() {

    char origem[100];
    char destino[100];

    // Leitura da string
    printf("Digite uma palavra: ");
    scanf("%s", origem);

    // Chamada da função
    copiarString(origem, destino);

    // Exibe o resultado
    printf("String copiada: %s\n", destino);

    return 0;
}
