//média
#include <stdio.h>
#include <stdlib.h>

float media(float a, float b, float c) {
    return (a+b+c)/3;
}

int main(){
    float a, b, c;
    printf("escreva o valor dos 3 numeros: \n");
    scanf("%f %f %f", &a, &b, &c);

    float r = media(a, b, c);

    printf("Sua media e: %.2f", r);
}