#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_USUARIOS 100

struct Usuario {
    char nome[50];
    int idade;
    char email[50];
};

int main() {
    struct Usuario usuarios[MAX_USUARIOS];
    int totalUsuarios = 0;
    int opcao;
    char nomeTemp[50], emailTemp[50];
    int idadeTemp;
    int valido;

    do {
        // Exibe o menu
        printf("\n--- Sistema de Cadastro ---\n");
        printf("1. Cadastrar usuario\n");
        printf("2. Listar usuarios\n");
        printf("3. Excluir usuario\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            // Cadastrar usuário
            if (totalUsuarios >= MAX_USUARIOS) {
                printf("Limite de usuários atingido!\n");
            } else {
                // Valida nome
                valido = 0;
                while (!valido) {
                    printf("Digite o nome: ");
                    scanf("%s", nomeTemp);
                    if (strlen(nomeTemp) > 0 && strlen(nomeTemp) < 50) {
                        valido = 1;
                    } else {
                        printf("Nome invalido! Tente novamente.\n");
                    }
                }

                // Valida idade
                valido = 0;
                while (!valido) {
                    printf("Digite a idade: ");
                    if (scanf("%d", &idadeTemp) == 1 && idadeTemp > 0 && idadeTemp < 120) {
                        valido = 1;
                    } else {
                        printf("Idade inválida! Digite uma idade entre 1 e 120.\n");
                        while (getchar() != '\n'); // Limpa o buffer de entrada
                    }
                }

                // Valida email (simplificada, pode ser mais complexa)
                valido = 0;
                while (!valido) {
                    printf("Digite o email: ");
                    scanf("%s", emailTemp);
                    if (strchr(emailTemp, '@') && strlen(emailTemp) < 50) {
                        valido = 1;
                    } else {
                        printf("Email inválido! Tente novamente.\n");
                    }
                }

                // Armazena o usuário
                strcpy(usuarios[totalUsuarios].nome, nomeTemp);
                usuarios[totalUsuarios].idade = idadeTemp;
                strcpy(usuarios[totalUsuarios].email, emailTemp);
                totalUsuarios++;
                printf("Usuário cadastrado com sucesso!\n");
            }

        } else if (opcao == 2) {
            // Listar usuários
            if (totalUsuarios == 0) {
                printf("Nenhum usuário cadastrado.\n");
            } else {
                printf("\n--- Lista de Usuários ---\n");
                for (int i = 0; i < totalUsuarios; i++) {
                    printf("Usuário %d:\n", i + 1);
                    printf("Nome: %s\n", usuarios[i].nome);
                    printf("Idade: %d\n", usuarios[i].idade);
                    printf("Email: %s\n", usuarios[i].email);
                }
            }

        } else if (opcao == 3) {
            // Excluir usuário
            if (totalUsuarios == 0) {
                printf("Nenhum usuário cadastrado.\n");
            } else {
                int indice;
                printf("Digite o número do usuário que deseja excluir: ");
                if (scanf("%d", &indice) == 1 && indice > 0 && indice <= totalUsuarios) {
                    for (int i = indice - 1; i < totalUsuarios - 1; i++) {
                        usuarios[i] = usuarios[i + 1];
                    }
                    totalUsuarios--;
                    printf("Usuário excluído com sucesso!\n");
                } else {
                    printf("Número de usuário inválido!\n");
                    while (getchar() != '\n'); // Limpa o buffer de entrada
                }
            }

        } else if (opcao != 4) {
            printf("Opção inválida! Tente novamente.\n");
        }

    } while (opcao != 4);

    printf("Saindo do sistema...\n");
    return 0;
}