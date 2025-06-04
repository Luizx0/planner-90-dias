#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));  
    
    int numero, escolha;
    int tentativas = 0;
    int limite;
    int dificuldade;

    printf("Escolha o nivel de dificuldade (1-3)\n");
    printf("1. Facil (7 tentativas)\n");
    printf("2. Medio (5 tentativas)\n");
    printf("3. Dificil (3 tentativas)\n");
    printf("Digite o numero correspondente ao nivel de dificuldade: ");
    scanf("%d", &dificuldade);

    switch (dificuldade) {
        case 1:
            limite = 7;
            printf("Nivel facil selecionado. Voce tem 7 tentativas.\n");
            break;
        case 2:
            limite = 5;
            printf("Nivel medio selecionado. Voce tem 5 tentativas.\n");
            break;
        case 3:
            limite = 3;
            printf("Nivel dificil selecionado. Voce tem 3 tentativas.\n");
            break;
        default:
            limite = 7;  
            printf("Nivel de dificuldade invalido. Usando nivel facil por padrao (7 tentativas).\n");
            break;
    }

    numero = rand() % 10 + 1;

    printf("Tente adivinhar o numero entre 1 e 10. Voce tem %d tentativas!\n", limite);

    do {
        printf("Escolha um numero: ");
        scanf("%d", &escolha);

        tentativas++;

        if (escolha < 1 || escolha > 10) {
            printf("Numero invalido. Escolha um numero entre 1 e 10.\n");
        } else if (escolha == numero) {
            printf("Parabens! Voce acertou o numero: %d\n", numero);
            break;  
        } else if (escolha > numero) {
            printf("Voce errou! O numero secreto e menor.\n");
        } else {
            printf("Voce errou! O numero secreto e maior.\n");
        }

        printf("Tentativas restantes: %d\n", limite - tentativas);

    } while (tentativas < limite);

    if (escolha != numero) {
        printf("Suas tentativas acabaram! O numero secreto era: %d\n", numero);
    }

    return 0;
}
