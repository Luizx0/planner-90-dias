#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Dia 58 - Criar script que sorteia um nome de uma lista 
int main() {
    char *nomes[] = {"Ana", "Bruno", "Carla", "Diego", "Elisa"};
    int total_nomes = sizeof(nomes) / sizeof(nomes[0]);

    // Inicializa o gerador de números aleatórios com o tempo atual
    srand(time(NULL));

    // Sorteia um índice entre 0 e total_nomes - 1
    int indice_sorteado = rand() % total_nomes;

    printf("Nome sorteado: %s\n", nomes[indice_sorteado]);

    return 0;
}



// Dia 57 - Verificar se uma string é um palíndromo (sem funções prontas além de string.h) 
// int main() {
//     char str[100];
//     int i, j, tamanho;
//     int ehPalindromo = 1;

//     printf("Digite uma palavra ou frase: ");
//     fgets(str, sizeof(str), stdin);

//     // Remover o caractere de nova linha, se houver
//     tamanho = strlen(str);
//     if (str[tamanho - 1] == '\n') {
//         str[tamanho - 1] = '\0';
//         tamanho--;
//     }

//     // Comparar os caracteres da frente com os de trás
//     for (i = 0, j = tamanho - 1; i < j; i++, j--) {
//         if (str[i] != str[j]) {
//             ehPalindromo = 0;
//             break;
//         }
//     }

//     if (ehPalindromo) {
//         printf("Eh um palindromo!\n");
//     } else {
//         printf("Nao eh um palindromo.\n");
//     }

//     return 0;
// }



// Dia 56 - Calcular o comprimento de uma frase e contar quantas letras "a" ela possui
// #include <stdio.h>
// #include <string.h> 

// int main() {
//     char frase[200];
//     int comprimento = 0;
//     int contadorA = 0;

//     printf("Digite uma frase: ");
//     fgets(frase, sizeof(frase), stdin);

//     // Remove o '\n' que o fgets pode capturar
//     frase[strcspn(frase, "\n")] = 0;

//     comprimento = strlen(frase);

//     for (int i = 0; i < comprimento; i++) {
//         if (frase[i] == 'a' || frase[i] == 'A') {
//             contadorA++;
//         }
//     }

//     printf("\nComprimento da frase: %d caracteres", comprimento);
//     printf("\nQuantidade de letras 'a' ou 'A': %d\n", contadorA);

//     return 0;
// }



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
