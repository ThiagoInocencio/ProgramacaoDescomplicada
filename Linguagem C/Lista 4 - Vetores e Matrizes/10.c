#include <stdio.h>

int main() {

  float notas[15];
  float media = 0.0;
  int i = 0;

  for(i = 0; i < 15; i++) {
    scanf("%f" , &notas[i]);
    media += notas[i];
  }

  media /= 15;

  printf("%0.2f" , media);  

  return 0;
}