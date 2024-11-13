#include <stdio.h>
#include <string.h>

int main(){

char palavra_1 [11];
char palavra_2 [11];

scanf("%s\n", palavra_1);
scanf("%s\n", palavra_2);

if (strcmp(palavra_1,palavra_2)>0){
printf("A ordem eh %s, %s\n", palavra_2,palavra_1);
} else{
    printf("A ordem eh %s, %s\n", palavra_1,palavra_2);
}



    return 0;
}