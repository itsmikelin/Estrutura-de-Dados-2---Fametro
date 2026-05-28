#include <stdio.h>

// Função que conta vogais e consoantes
void contarVogaisConsoantes(char *str, int *vogais, int *consoantes) {

    // Inicializa os contadores
    *vogais = 0;
    *consoantes = 0;

    // Percorre a string
    while(*str != '\0') {

        // Verifica se é vogal
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
           *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U') {

            (*vogais)++;
        }

        // Verifica se é consoante
        else if((*str >= 'a' && *str <= 'z') ||
                (*str >= 'A' && *str <= 'Z')) {

            (*consoantes)++;
        }

        str++;
    }
}

int main() {

    char texto[100];
    int vogais, consoantes;

    // Leitura da string
    printf("Digite uma palavra: ");
    scanf("%s", texto);

    // Chamada da função
    contarVogaisConsoantes(texto, &vogais, &consoantes);

    // Exibe os resultados
    printf("Quantidade de vogais: %d\n", vogais);
    printf("Quantidade de consoantes: %d\n", consoantes);

    return 0;
}
