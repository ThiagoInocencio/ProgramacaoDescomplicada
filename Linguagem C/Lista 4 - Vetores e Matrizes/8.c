// 8º Exercício da lista de vetores e matrizes

#include <stdio.h>
 
int main() {
 
  int valores[6];
  int i;
 
  for(i = 0; i < 6; i++)
   scanf("%d" , &valores[i]);
 
  for(i = 5; i >= 0; i--)
   printf("%d " , valores[i]);
 
 
  return 0;
}
