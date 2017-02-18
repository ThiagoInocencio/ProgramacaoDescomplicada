// 2º Exercício da lista de funções

#include <stdio.h>

void paraData(int dia, int mes, int ano) {

    char mesExtenso[20];

    switch(mes) {
        case 1 : strcpy(mesExtenso, "Janeiro"); break;
        case 2 : strcpy(mesExtenso, "Feveiro"); break;
        case 3 : strcpy(mesExtenso, "Março"); break;
        case 4 : strcpy(mesExtenso, "Abril"); break;
        case 5 : strcpy(mesExtenso, "Maio"); break;
        case 6 : strcpy(mesExtenso, "Junho"); break;
        case 7 : strcpy(mesExtenso, "Julho"); break;
        case 8 : strcpy(mesExtenso, "Agosto"); break;
        case 9 : strcpy(mesExtenso, "Setembro"); break;
        case 10 : strcpy(mesExtenso, "Outubro"); break;
        case 11 : strcpy(mesExtenso, "Novembro"); break;
        case 12 : strcpy(mesExtenso, "Dezembro"); break;
        default : printf("Mes incorreto"); return;
    }

    printf("Data: %d de %s de %d" , dia, mesExtenso, ano);

}

int main () {

    paraData(1,1,2000);

    return 0;

}
