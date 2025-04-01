#include <stdio.h>

int main(void) {
    int dado;
    int total = 0;
    
    do {
        printf("Digite um número de 1 a 6 recebido no dado: ");
        scanf("%d", &dado);
    
        if(dado % 2 == 0) {
            printf("É par.\n", total += dado);
        } else{
            printf("É impar. total de pontos: %d", total);
            break;
        }
        
    } while(dado % 2 == 0);

    return 0;
}