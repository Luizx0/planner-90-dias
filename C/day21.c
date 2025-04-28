//Switch
#include <stdio.h>
#include <stdlib.h>

int soma(int a, int b){
    return a + b;
}
int sub(int a, int b){
    return a - b;
}
int mult(int a, int b){
    return a * b;
}
float divisao(int a, int b) {
    if (b == 0) {
        printf("Erro: Divisao por zero!\n");
        return 0; 
    }
    return (float)a / b; 
}

int main(){
    int opcao;
    int a, b;

    printf("Menu de Opcoes: \n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("5 - Sair\n");

    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    if (opcao >= 1 && opcao <=4){
        printf("Digite dois numeros: ");
        scanf("%d %d", &a, &b);
    }

    switch (opcao) {
        case 1: 
        printf("Resultado: %d\n", soma(a, b));
        break;


        case 2: 
        printf("Resultado: %d\n", sub(a, b));
        break;

        case 3: 
        printf("Resultado: %d\n", mult(a, b));
        break;

        case 4: 
        printf("Resultado: %.2f\n", divisao(a, b));
        break;

        case 5: 
        printf("Saindo do programa... \n");
        break;

        default:
        printf("Opcao invalida! Tente novamente.\n");
    } while (opcao != 5);

    return 0;
}
