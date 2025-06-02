#include <stdio.h>

int main() {
    int i = 0;

    printf("Numeros pares de 0 a 20:\n");

    do {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
        i++;
    } while (i <= 20);

    printf("\n");

    return 0;
}
