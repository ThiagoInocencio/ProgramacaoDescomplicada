// 10º Exercício da lista de string

#include <stdio.h>
#include <string.h>

int main() {

  char string[40];
  int i, tam;

  scanf("%s" , string);
  tam = strlen(string);

  for(i = tam-1; i >=0; i--)
    printf("%c" , string[i]);

  return 0;
}
