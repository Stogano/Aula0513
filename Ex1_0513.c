#include <stdio.h>
#include <string.h>

int main() {
    char palavra[11];
    int i, palindromo = 1;

    printf("Digite a palavra: ");
    scanf("%s", palavra);

    int tam = strlen(palavra);

    for (i = 0; i < tam / 2; i++) {
        if (palavra[i] != palavra[tam - i - 1]) {
            palindromo = 0;
            break;
        }
    }

    if (palindromo)
        printf("Resultado: É um palíndromo!\n");
    else
        printf("Resultado: NÃO é!\n");

    return 0;
}
