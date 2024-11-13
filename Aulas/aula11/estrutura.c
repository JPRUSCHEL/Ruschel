#include <stdio.h>

int main(){

struct contato_t{
    char nome[61];
    long int telefone;
    char email[61];
};

struct contato_t contato;

printf("Entre co o nome: ");
scanf("%s", contato.nome);
 while(getchar() != '\n');
printf("Entre com o telefone: ");
scanf("%li", &contato.telefone);
 while(getchar() != '\n');
printf("Entre om o email: ");
scanf("%s", contato.email);
 while(getchar() != '\n');

printf("Dados do contato\n");
printf("Nome .......: %s\n", contato.nome);
printf("Telefone...: %li\n", contato.telefone);
printf("Email......: %s\n", contato.email);

struct contato_t contato[10];

for (int i = 0; i < 10; i++)
{
    printf("entre com o nome: ");
    scanf("%s", contato[i].nome );
     while(getchar() != '\n');
    printf("Entre com o telefone: ");
    scanf("%li", &contato[i].telefone);
     while(getchar() != '\n');
    printf("Entre com o email: ");
    scanf("%s", contato[i].email);
    while(getchar() != '\n');
}








    return 0;
}