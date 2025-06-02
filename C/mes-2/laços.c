#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Dia 53 - Programa que recebe notas e calcula média até digitar sair (usar while) 
int main(){
    float a, soma = 0;
    int i = 0;
    char sair[4];

    while (1){
        printf("\nEscreva seu numero (ou 'sair' para encerrar): ");
        scanf("%s", &sair);

        if (strcmp(sair, "sair") == 0 || strcmp(sair, "SAIR") == 0) {
            break;
        }

        a = atof(sair);
        soma += a;
        i++;
        printf("\nMedia parcial: %.2f", soma / i);
    }
    printf("\nMedia final: %.2f", soma / i);
    return 0;
}






// Dia 52 - Criar um contador regressivo de 10 até 1 usando for 
//  int main(){
//  int a;
//  for (int i = 10 ; i > 0 ; i--) {
//     printf("\n%d", i);
// }
//  return 0;
// }



// Dia 51 - Imprimir os números pares de 0 a 20 usando do while 
// int main() {
//     int i = 0;

//     printf("Numeros pares de 0 a 20:\n");

//     do {
//         if (i % 2 == 0) {
//             printf("%d ", i);
//         }
//         i++;
//     } while (i <= 20);

//     printf("\n");

//     return 0;
// }
