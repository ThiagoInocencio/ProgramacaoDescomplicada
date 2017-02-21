// 14º Exercício da lista de funções

#include <stdio.h>

float consumo(float distancia, float litros) {

    float consumo = distancia / litros;

    printf("%0.2fkm/l - ", consumo);

    if(consumo < 8) printf("Venda o carro!\n");
     else if(consumo <= 14) printf("Economico!\n"); // entre 8 e 14 (de acordo com o enunciado)
       else if(consumo > 12) printf("Super Economico\n");

}

int main () {


    printf("Um carro que percorreu 50km e gastou 5 litros faz ");
    consumo(50, 5);

    return 0;

}
