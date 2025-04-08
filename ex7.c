#include <stdio.h>

int main(void) {
  int num1 = 0;
  int num2 = 0;
  int num3 = 0;
  int num4 = 0;
  
  do {
      printf("Digite o primeiro número: ");
  scanf("%d", &num1);
  } while(num1 < 0 || num1 > 10);
  
  do {
      printf("Digite o segundo número: ");
  scanf("%d", &num2);
  } while(num2 < 0 || num2 > 10);
  
  do {
      printf("Digite o terceiro número: ");
  scanf("%d", &num3);
  } while(num3 < 0 || num3 > 10);
  
  do {
      printf("Digite o quarto número: ");
  scanf("%d", &num4);
  } while(num4 < 0 || num4 > 10);
  
  for(int contador = 1; contador <= num1 ; contador++) {
  printf("*");
  }
  printf("\n");
  
  for(int contador = 1; contador <= num2 ; contador++) {
  printf("*");
  }
  printf("\n");
  
  for(int contador = 1; contador <= num3 ; contador++) {
  printf("*");
  }
  printf("\n");
  
  for(int contador = 1; contador <= num4 ; contador++) {
  printf("*");
  }
  printf("\n");
  return 0;
}