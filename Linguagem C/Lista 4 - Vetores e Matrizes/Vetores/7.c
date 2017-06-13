// 7º Exercício da lista de vetores e matrizes

#include <stdio.h>

int main() {

  int numeros[10];
  int i;
  int maior = 0, pos = 0;

  scanf("%d" , &numeros[0]);
  maior = numeros[0];

  for(i = 1; i < 10; i++) {
     scanf("%d" , &numeros[i]);
     if(numeros[i] > maior) {
         maior = numeros[i];
         pos = i;
     }
  }

  for(i = 0; i < 10; i++) 
     printf(" %d" , numeros[i]);

  printf("\nMaior valor: %d na posicao: %d" , maior , pos);


  return 0;
}