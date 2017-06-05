// 8º Exercício da lista de string

#include <stdio.h>
#include <string.h>

int main() {

  char str[100];
  int i, tam;

  scanf("%s" , str);

  tam = strlen(str);

  for(i = 0; i < tam; i++)
    if(str[i] == '0')
      str[i] = '1';

  return 0;
}
