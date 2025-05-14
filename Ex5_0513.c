#include <stdio.h>

int main() {
    int n, i, j;
    char opcao;

    printf("Digite um número: ");
    scanf("%d", &n);

    do {
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= i; j++) {
                printf("*");
            }
            printf("\n");
        }

        scanf(" %c", &opcao);

        if (opcao == 'D') {
            for (i = 1; i <= n; i++) {
                for (j = 1; j <= n - i; j++) printf(" ");
                for (j = 1; j <= i; j++) printf("*");
                printf("\n");
            }
        } else if (opcao == 'A') {
            for (i = 1; i <= n; i++) {
                for (j = 1; j <= i; j++) printf("*");
                printf("\n");
            }
        }

    } while (opcao != 'F');

    return 0;
}
