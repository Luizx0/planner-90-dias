// Calculadora

#include <stdio.h>
#include <stdlib.h>

int soma(int a, int b){
    return a + b;
}
int subtracao(int a, int b){
    return a - b;
}
int multiplicacao(int a, int b){
    return a * b;
}
float divisao(float a, float b){
    if(b > 0 ){
        return a / b;
    } else {
        printf("Nao é possivel dividir!");
        return 0;
    }
}


int main(){
    int a, b, opcao;

do { 
    printf("\n=== CALCULADORA ===");
    printf("\n1 - Adicao");
    printf("\n2 - Subtracao");
    printf("\n3 - Multiplicacao");
    printf("\n4 - Divisao");
    printf("\n5 - Sair");

    printf("\nEscolha uma opção: ");
    scanf("%d", &opcao);

    if (opcao >= 1 && opcao <=4){
        printf("\nDigite dois numeros: ");
        scanf("%d %d", &a, &b);
    }


    switch (opcao) {
        case 1:
        printf("Resultado: %d", soma(a,b));
        break;
        case 2:
        printf("Resultado: %d", subtracao(a,b));
        break;
        case 3:
        printf("Resultado: %d", multiplicacao(a,b));
        break;
        case 4:
        printf("Resultado: %.2f", divisao(a,b));
        break;
        case 5:
        printf("Saindo do programa...");
        break;

    default:
    printf("\nOpcao invalida! Tente Novamente.");
        break;
}
} while (opcao != 5);

return 0;
}
