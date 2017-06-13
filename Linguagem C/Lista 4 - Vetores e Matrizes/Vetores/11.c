#include <stdio.h>

int main() {

 float numeros[10];
 int qtd_neg = 0;
 float sum_pos = 0.0;
 int i;

 for(i = 0; i < 10; i++) {
   scanf("%f" , &numeros[i]); 
   if(numeros[i] < 0.0)
     qtd_neg++;
   else
     sum_pos += numeros[i];
 }

  
 printf("A quantidade de números negativos: %d\n" , qtd_neg);
 printf("\nA soma dos números positivos: %0.2f" , sum_pos);

 return 0;
}