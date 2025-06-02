#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    int i, tamanho, ehPalindromo = 1;

    printf("Digite uma palavra: ");
    scanf("%s", palavra); 

    tamanho = strlen(palavra);

    for (i = 0; i < tamanho / 2; i++) {
        if (palavra[i] != palavra[tamanho - 1 - i]) {
            ehPalindromo = 0;
            break;
        }
    }

    if (ehPalindromo) {
        printf("É um palíndromo!\n");
    } else {
        printf("Não é um palíndromo.\n");
    }

    return 0;
}
