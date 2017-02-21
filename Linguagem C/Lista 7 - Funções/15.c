// 15º Exercício da lista de funções

#include <stdio.h>

int formaTriangulo(int a, int b, int c) {

    if((a < b + c)  && (b < a + c) && (c < b + a)) return 1;
      else return 0;

}

void tipoTriangulo(int a, int b, int c) {

    if(!formaTriangulo(a, b, c)) {
        printf("Os valores nao formam um triangulo\n");
        return;
    }

    if(a == b & b == c) printf(" Equilatero\n");
    else if((a == b) || (c == b) || (a == c)) printf(" Isoceles\n");
     else printf(" Escaleno\n");

}

int main () {


    printf("Um triangulo com os lados medindo 5, 6 e 7 eh: ");
    tipoTriangulo(5, 6, 7);

    return 0;

}
