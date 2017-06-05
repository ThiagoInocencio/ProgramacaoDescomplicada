// 9º Exercício da lista de string

#include <stdio.h>
#include <string.h>

int main() {

  char str[100];
  int i, tam;

  scanf("%s" , str);

  if(str[0] == 'a' || str[0] == 'A')
    printf("%s" , str);

  return 0;
}
