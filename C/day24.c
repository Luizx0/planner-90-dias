<<<<<<< HEAD
// fatorial
=======
//Fatorial
>>>>>>> 2aea6f9a717aaa4abdb1501340884f16a49d5766
#include <stdio.h>
#include <stdlib.h>

void fat(int n) {
    unsigned long long fatorial = 1;

    if (n < 0) {
        printf("\nFatorial nao esta definido para numeros negativos.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            fatorial *= i;
        }
        printf("\nO fatorial de %d e: %llu\n", n, fatorial);
    }
}

int main() {
    int n;
    int continuar = 1;

    while (continuar) {
        printf("\nDigite o numero para calcular: ");
        scanf("%d", &n);

        fat(n);

        printf("\nDeseja calcular outro fatorial? (1 - Sim | 0 - Nao): ");
        scanf("%d", &continuar);
    }

    printf("\nPrograma encerrado.\n");
    return 0;
}
