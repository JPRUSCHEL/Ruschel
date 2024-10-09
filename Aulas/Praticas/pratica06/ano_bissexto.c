#include <stdio.h>

int main (){

int ano = 0;

printf("Entre com um ano: ");
scanf("%i", ano );

int numero_eh_multiplo_de_4 = ano % 4 == 0;
int numero_nao_eh_multiplo_de_100 = ano / 100 == 0;

if(numero_eh_multiplo_de_4){
    printf("O ano eh bissexto\n");
}else {
    printf("O ano NAO eh bissexto\n");
}
if(numero_nao_eh_multiplo_de_100){ 
    printf("O ano eh bissexto\n");
}else {
    printf("O ano NAO eh bissexto\n");
}
return 0;
}