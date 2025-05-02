#include <stdio.h>
#include <stdlib.h>

int fat(int n, int i) {
    unsigned long long fatorial = 1;

    if (n < 0) {
        printf("\nFatorial nao esta definido para numeros negativos");
    } else {
        for (i = 1; i <=n; i++){
            fatorial = fatorial * i;
        }
        printf("\nO fatoria de %d e: %llu", n, fatorial);
    }
}

int main(){
    int n, i;
    int continuar = 1;

    while (continuar) {
        printf("\nDigite o numero para calcular: ");
        scanf("%d", &n);

        fat(n, i);

        printf("\nDeseja calcular outro fatorial? (1 - Sim | 0 - Nao)");
        scanf("%d", &continuar);
    }

    printf("\nPrograma encerrado!");
    return 0;
}