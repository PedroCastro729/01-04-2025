#include <stdio.h>

int main(void) {
  for(int a = 0; a <= 1; a++) {
      printf("A: %d ! %d = %d\n", a, a, !a);
  }
  
  return 0;
}