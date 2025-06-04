#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Dia 56 - Calcular o comprimento de uma frase e contar quantas letras "a" ela possui







// Dia 55 - Comparar duas palavras usando strcmp() e informar se são iguais
// int main() {
//     char str1[100];
//     char str2[100];

//     printf("Digite uma string: ");
//     fgets(str1, sizeof(str1), stdin);

//     printf("Digite outra string: ");
//     fgets(str2, sizeof(str2), stdin);

//     // Remove o '\n' das strings
//     str1[strcspn(str1, "\n")] = '\0';
//     str2[strcspn(str2, "\n")] = '\0';

//     if (strcmp(str1, str2) == 0) {
//         printf("As palavras \"%s\" e \"%s\" sao iguais.\n", str1, str2);
//     } else {
//         printf("As palavras \"%s\" e \"%s\" nao sao iguais.\n", str1, str2);
//     }

//     return 0;
// }



//Dia 54 - Buscar uma letra em uma string e interromper o loop com break ao encontrar
// int main(){
//     char str[100];
//     char letra;
//     int encontrado = 0;

//     printf("Digite uma string: ");
//     fgets(str, sizeof(str), stdin);
    
//     printf("Digite a letra a ser buscada: ");
//     scanf(" %c", &letra);

//     for(int i = 0; i < strlen(str); i++){
//         if (str[i] == letra){
//             printf("\nLetra %c encontrada na posicao %d.", letra, i + 1);
//             encontrado = 1;
//             break;
//         }
//     }
//     if (!encontrado){
//         printf("\nNao foi encontrada a letra %c na frase", letra);
//     }
//     return 0;
// }



// Dia 53 - Programa que recebe notas e calcula média até digitar sair (usar while) 
// int main(){
//     float a, soma = 0;
//     int i = 0;
//     char sair[4];

//     while (1){
//         printf("\nEscreva seu numero (ou 'sair' para encerrar): ");
//         scanf("%s", &sair);

//         if (strcmp(sair, "sair") == 0 || strcmp(sair, "SAIR") == 0) {
//             break;
//         }

//         a = atof(sair);
//         soma += a;
//         i++;
//         printf("\nMedia parcial: %.2f", soma / i);
//     }
//     printf("\nMedia final: %.2f", soma / i);
//     return 0;
// }



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
