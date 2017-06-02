// 6º Exercício da lista de string

#include <stdio.h>
#include <string.h>

int main() {

  char nome[40];
  char sexo[40];
  int idade;

  scanf("%s" , nome);
  scanf("%s" , sexo);
  scanf("%d" , &idade);

  if(strcmp(sexo, "feminino") == 0 && idade < 25)
     printf("ACEITA");
   else
     printf("NAO ACEITA");
  return 0;
}
