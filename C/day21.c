//Switch
#include <stdio.h>
#include <stdlib.h>

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
        printf("Voce escolheu Adicao\n");
        break;


        case 2: 
        printf("Voce escolheu Subtracao\n");
        break;

        case 3: 
        printf("Voce escolheu multiplicacao\n");
        break;

        case 4: 
        printf("Voce escolheu divisao\n");
        break;

        case 5: 
        printf("Saindo do programa... \n");
        break;

        default:
        printf("Opcao invalida! Tente novamente.\n");
    } 

    return 0;
}