//Calculadora

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
float div(float a, float b){
    if(b <= 0){
        printf("Nao existe divisao por 0 e negativos!");
        return 0;
    } else {
        return (float)a / b;
    }
}

int main(){
    int opcao;
    int a, b;

    printf("\nMenu de Opcoes: ");
    printf("\n1 - Adicao");
    printf("\n2 - Subtracao");
    printf("\n3 - Multiplicacao");
    printf("\n4 - Divisao");
    printf("\n5 - Sair");
    
    printf("\nEscolha o tipo de operação");
    scanf("%d", &opcao);

    if (opcao >=1 && opcao <=4){
        printf("\nDigite dois numeros: ");
        scanf("%d %d", &a, &b);
    } else{
        ptintf("\nNenhuma opcao selecionada");
        return 0;
    }

    switch (opcao)
    {
    case 1:
    printf("\nResultado: %d", soma(a,b));
        break;
    case 2:
    printf("\nResultado: %d", sub(a,b));
        break;
    case 3:
    printf("\nResultado: %d", mult(a,b));
        break;
    case 4:
    printf("\nResultado: %.2f", div(a,b));
        break;
    case 5:
    printf("\nSaindo do Programa... ");
        break;
    
    default:
    printf("Opcao invalida! Tente novamente.");
        break;
    } while (opcao != 5);
    
return 0;
}