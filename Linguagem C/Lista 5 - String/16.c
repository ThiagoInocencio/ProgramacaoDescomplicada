#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  char str[200];
  int tam, i;

  fgets(str, sizeof(str), stdin);

  tam = strlen(str);

  for(i = 0; i < tam; i++) 
    if(str[i] >= 97 && str[i] <= 122)
         str[i] = str[i]-32;
  
  printf("str-> %s" , str);

  return 0;    
}