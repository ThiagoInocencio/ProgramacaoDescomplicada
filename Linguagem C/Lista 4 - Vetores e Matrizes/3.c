// 3º Exercício da lista de vetores e matrizes

#include <stdio.h>

int main() {

  float A[10], B[10];
  int i;

  for(i = 0; i < 10; i++) {
    scanf("%f" , &A[i]);
    B[i] = A[i] * A[i];
  }

  printf("conjunto A: ");
  for(i = 0; i < 10; i++)
    printf("%0.2f " , A[i]);

  printf("\nconjunto B: ");
  for(i = 0; i < 10; i++)
    printf("%0.2f " , B[i]);

   printf("\n");

  return 0;
}
