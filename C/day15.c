#include <stdlib.h>
#include <stdio.h>

int soma (float a, float b) {
    return a + b;
}

int main(){
float a, b, s;
    printf("Digite os numeros para a soma: ");
    scanf("%f %f", &a, &b);
    s = soma(a, b);
    printf("O resultado da soma: %.2f\n", s);
    return 0;
}
