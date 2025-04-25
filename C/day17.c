#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    int continuar = 1;

    while (continuar) { 
        printf("Insira um valor: ");
        scanf("%d", &a);

        if (a % 2 == 0) {
            printf("Numero par\n");
        } else {
            printf("Numero impar\n");
        }

        printf("Deseja testar outro numero? (1 - Sim, 0 - Nao): ");
        scanf("%d", &continuar); 
    }

    return 0;
}