// 3º Exercício da lista de string

#include <stdio.h>
#include <string.h>

int compara(char *str1, char *str2) {
    int i, tamStr1, tamStr2;
    tamStr1 = strlen(str1);
    tamStr2 = strlen(str2);

    if(tamStr1 != tamStr2) return 0;

    for(i = 0; i < tamStr1; i++)
      if(str1[i] != str2[i]) return 0;

    return 1;

}

int main() {

  char str1[40], str2[40];
  int i;

  scanf("%s" , str1);
  scanf("%s" , str2);

  if(compara(str1, str2)) printf("Strings iguais\n");
    else printf("Strings diferentes\n");

  return 0;
}
