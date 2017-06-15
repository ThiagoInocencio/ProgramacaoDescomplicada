// 6º Exercício da lista de variáveis e expressões

#include <stdio.h>

int main() {

  float fahrenheit;

  scanf("%f" , &fahrenheit);

  printf("%0.2f" , 5.0 * (fahrenheit - 32.0)/9.0 );

  return 0;
}
