#include <stdio.h>
#include <stdlib.h>

// Função para converter Celsius para Fahrenheit
float celsiusParaFahrenheit(float c) {
    return (c * 9 / 5) + 32;
}

// Função para converter Fahrenheit para Celsius
float fahrenheitParaCelsius(float f) {
    return (f - 32) * 5 / 9;
}

int main() {
    int opcao;
    float temperatura, resultado;

    do {
        printf("\n=== Conversor de Temperatura ===");
        printf("\n1 - Celsius para Fahrenheit");
        printf("\n2 - Fahrenheit para Celsius");
        printf("\n3 - Sair");
        printf("\nEscolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite a temperatura em Celsius: ");
                scanf("%f", &temperatura);
                resultado = celsiusParaFahrenheit(temperatura);
                printf("Resultado: %.2f °F\n", resultado);
                break;

            case 2:
                printf("Digite a temperatura em Fahrenheit: ");
                scanf("%f", &temperatura);
                resultado = fahrenheitParaCelsius(temperatura);
                printf("Resultado: %.2f °C\n", resultado);
                break;

            case 3:
                printf("Saindo do programa...\n");
                break;

            default:
                printf("Opção inválida. Tente novamente.\n");
        }

    } while (opcao != 3);

    return 0;
}
