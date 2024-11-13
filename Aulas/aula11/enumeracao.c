#include <stdio.h>

int main(){
    const int DOMINGO =1;
    const int SEGUNDA =2;
    const int TERCA =3;
    const int QUARTA =4;
    const int QUINTA =5;
    const int SEXTA =6;
    const int SABADO =7;

    enum dia_da_semana_e {
        dom,
        seg,
        ter,
        qua,
        qui,
        sex,
        sab
        
    };
    int dia;
    printf("Entre com o dia da semana: ");
    scanf("%i", dia);
    switch (dia)
    {
    case dom:
        printf("DOMINGO\n");
        break;
    case seg:
        printf("SEGUNDA\n");
        break;
    case ter:
        printf("TERÇA\n");
        break;
    case qua:
        printf("QUARTA\n");
        break;
    case qui:
        printf("QUINTA\n");
        break;
    case sex:
        printf("SEXTA\n");
        break;
    case sab:
        printf("SABADO\n");
        break;
    
    }





    return 0;
}