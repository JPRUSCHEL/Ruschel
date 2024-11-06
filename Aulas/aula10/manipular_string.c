#include <stdio.h>
#include <string.h>

int main(){

char primeiro_nome[20];
char ultimo_nome[20];
char nome[40];

printf("Entre com seu primeiro nome: ");
scanf("%s[^\n]", primeiro_nome);
printf("Entre com seu ultimo nome: ");
scanf("%s[^\n]", ultimo_nome);

//nome = primeiro_nome 

strcpy(nome, primeiro_nome);

printf("%s\n", nome);

// nome = nome + ultimo nome
strcat(nome," ");
strcat(nome, ultimo_nome);

printf("%s\n", nome);

// tamanho da string preenchida
printf("a palavra '%s' tem %i caracteres\n", primeiro_nome, strlen(primeiro_nome));

//comparar strings
if (strcmp(primeiro_nome,ultimo_nome)>0){
printf("A ordem eh %s, %s\n", ultimo_nome, primeiro_nome);
} else{
    printf("A ordem eh %s, %s\n", primeiro_nome, ultimo_nome);
}

//procurar uma string
if(strstr(nome,"Ruschel")){
    printf("Voce eh da familia Ruschel\n");
}else{
    printf("Voce nao eh da familia Ruschel\n");
}

//preencher uma string com um caracter
memset(nome, 'a', 10);
printf("%s\n",nome);
memset(nome, 'b', 20);
printf("%s\n", nome);
memset(nome, 0, sizeof(nome)); //limpa o string
printf("%s\n", nome);


return 0;

}