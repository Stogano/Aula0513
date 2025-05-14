#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ordenar(char *str) {
    int i, j;
    char temp;
    int len = strlen(str);

    for (i = 0; i < len - 1; i++) {
        for (j = i + 1; j < len; j++) {
            if (str[i] > str[j]) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    char str1[100], str2[100];

    printf("Digite a primeira palavra: ");
    scanf("%s", str1);
    printf("Digite a segunda palavra: ");
    scanf("%s", str2);

    if (strlen(str1) != strlen(str2)) {
        printf("Não são anagramas.\n");
        return 0;
    }

    ordenar(str1);
    ordenar(str2);

    if (strcmp(str1, str2) == 0)
        printf("São anagramas!\n");
    else
        printf("Não são anagramas.\n");

    return 0;
}
