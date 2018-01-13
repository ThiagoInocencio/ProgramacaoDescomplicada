// 1º Exercício da lista de Structs

#include <stdio.h>

typedef struct {
      int hora;
      int minuto;
      int segundos;
} Horario;

typedef struct {
      int dia;
      int mes;
      int ano;
} Data;

typedef struct {
      Data data;
      Horario horario;
      char * texto;
} Compromisso;

int main()
{
    return 0;
}
