#include <stdio.h>
#include <string.h>

int main() {
    char usuario[20];
    char senha[20];

    // Dados fixos para login
    char usuario_correto[] = "admin";
    char senha_correta[] = "1234";

    printf("\n==== Sistema de Login ====\n");

    printf("Usuario: ");
    scanf("%s", usuario);

    printf("Senha: ");
    scanf("%s", senha);

    // Verificação
    if (strcmp(usuario, usuario_correto) == 0 && strcmp(senha, senha_correta) == 0) {
        printf("\nLogin realizado com sucesso!\n");
    } else {
        printf("\nUsuario ou senha incorreto!\n");
    }
    return 0;
}
