// 4º Exercício da lista de string

#include <stdio.h>
#include <string.h>

int main() {

  char nome[40];
  int i;

  scanf("%s" , nome);

  for(i = 0; i < 4; i++)
     printf("%c" , nome[i]);

  return 0;
}
