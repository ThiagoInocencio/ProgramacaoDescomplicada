// 7º Exercício da lista de string

#include <stdio.h>
#include <string.h>

int main() {

  char string[40];
  int i, tam, contUm = 0;

  scanf("%s" , string);
  tam = strlen(string);

  for(i = 0; i < tam; i++)
    if(string[i] == '1') contUm++;

  printf("Quantidade de 1's: %d" , contUm);

  return 0;
}
