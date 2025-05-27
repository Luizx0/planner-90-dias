#include <stdio.h>

int main() {
    int x = 10;         // Declaramos uma variável inteira x com valor 10
    int *p;             // Declaramos um ponteiro para inteiro chamado p

    p = &x;             // O ponteiro p recebe o endereço de memória da variável x

    // Agora vamos imprimir os dados
    printf("Valor de x: %d\n", x);          // Mostra o valor original de x
    printf("Endereco de x: %p\n", &x);      // Mostra o endereço de memória de x
    printf("Valor de p (endereco): %p\n", p); // Mostra o valor de p (que é o endereço de x)
    printf("Valor apontado por p: %d\n", *p); // Mostra o valor armazenado no endereço apontado por p (ou seja, o valor de x)

    // Modificando o valor de x usando o ponteiro
    *p = 20; // Aqui estamos alterando o valor armazenado em x, acessando ele via ponteiro

    printf("Novo valor de x (apos *p = 20): %d\n", x); // Agora x vale 20

    return 0;
}