#include <stdio.h>
#include <string.h>

int main(){

char primeiro_nome [11];
char ultimo_nome [11];

scanf("%s\n", primeiro_nome);
scanf("%s\n", ultimo_nome);

scanf("%s\n", primeiro_nome);

char nome [31];

strcpy(nome, primeiro_nome);
strcat(nome, " ");
strcat(nome, ultimo_nome);

printf("%s\n", nome);









return 0;

}
