#include <stdio.h>

int testa_par(int);

int main (void) {
    int valor;
    printf("Digite um valor: ");
    scanf("%d", &valor);
    
    printf("%d par? %d", valor, testa_par(valor));
    
    return 0;
}

int testa_par(int valor) {
    if(valor % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}