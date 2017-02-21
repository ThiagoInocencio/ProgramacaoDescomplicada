// 11º Exercício da lista de funções

#include <stdio.h>

float media(float int n1, float n2, float n3, char metodo) {

    if(metodo == 'A')
      return (n1+n2+n3)/3;

    return ((n1*5) + (n2*3) + (n3*2))/10;

}

int main () {


    printf("A media aritmetica do aluno com as notas 8, 9 e 7.5 eh: %0.2f" , media(8, 9, 7.5, 'A'));
    printf("A media ponderada do aluno com as notas 8, 9 e 7.5 eh: %0.2f" , media(8, 9, 7.5, 'P'));

    return 0;

}
