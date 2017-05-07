// 2º Exercício da lista de string

#include <stdio.h>
#include <string.h>

int main () {

    char string[30];
    int i = 0, cont = 0;
    gets(string);

    while(string[i] != '\0') {
        cont++;
        i++;
    }

    printf("tamanho de (%s) = %d", string , cont);

    return 0;

}
