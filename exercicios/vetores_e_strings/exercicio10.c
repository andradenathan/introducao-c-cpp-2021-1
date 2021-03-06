/** 
 * Disciplina de Introdução à Programação C/C++
 * Autor: Nathan Andrade dos Santos Lobo
 * DRE: 120082390
**/

#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100

int main(void) {
  char palavra[MAX_LENGTH];
  int tamanho = 0;

  printf("Insira uma string de ate %d caracteres: ", MAX_LENGTH);
  fgets(palavra, MAX_LENGTH, stdin);
  
  for(int i = 0; i < MAX_LENGTH; i++) {
    if(palavra[i] == '\0') {
      break;
    }

    tamanho++;
  }
  printf("Tamanho da string: %d\n", tamanho - 1);

  return 0;
}