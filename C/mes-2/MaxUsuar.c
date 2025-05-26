#include <stdio.h>
#include <string.h>

#define MAX_USUARIOS 5
#define TAM 20

char usuarios[MAX_USUARIOS][TAM];
char senhas[MAX_USUARIOS][TAM];
int totalUsuarios = 0;

void cadastrarUsuario() {
    if (totalUsuarios >= MAX_USUARIOS) {
        printf("\nLimite de usuários atingido!\n");
        return;
    }

    printf("\nNovo usuário: ");
    scanf("%s", usuarios[totalUsuarios]);

    printf("Senha: ");
    scanf("%s", senhas[totalUsuarios]);

    printf("Usuário cadastrado com sucesso!\n");
    totalUsuarios++;
}

void listarUsuarios() {
    printf("\nUsuários cadastrados:\n");
    for (int i = 0; i < totalUsuarios; i++) {
        printf("- %s\n", usuarios[i]);
    }
}

void login() {
    char user[TAM];
    char pass[TAM];

    printf("\nLogin\nUsuário: ");
    scanf("%s", user);

    printf("Senha: ");
    scanf("%s", pass);

    for (int i = 0; i < totalUsuarios; i++) {
        if (strcmp(user, usuarios[i]) == 0 && strcmp(pass, senhas[i]) == 0) {
            printf("Login bem-sucedido! Bem-vindo(a), %s!\n", user);
            return;
        }
    }

    printf("Usuário ou senha inválidos.\n");
}

int main() {
    int opcao;

    do {
        printf("\n=== Menu ===\n");
        printf("1 - Cadastrar usuário\n");
        printf("2 - Listar usuários\n");
        printf("3 - Fazer login\n");
        printf("4 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarUsuario();
                break;
            case 2:
                listarUsuarios();
                break;
            case 3:
                login();
                break;
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }

    } while (opcao != 4);

    return 0;
}
