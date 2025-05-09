//Numero Primo
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, contador = 0;

    printf("\nDigite um número inteiro: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("\n%d não é primo.", n);
    } else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                contador++;
                break; 
            }
        }

        if (contador == 0) {
            printf("\n%d é um número primo.", n);
        } else {
            printf("\n%d não é primo.", n);
        }
    }

    return 0;
}
