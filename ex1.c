#include <stdio.h>

int main(void) {
    int n = 0;
    int numero = 7;
    int tentativa;
    
    do {
        printf("Digite o número inteiro correto: ");
        scanf("%d", &tentativa);
        getchar();
        
        printf("Digitado: %d\n", tentativa);
        
        if(tentativa == numero) {
            printf("Você acertou!\n");
            n = 3;
        }
        
        if(tentativa != numero) {
            printf("Número errrado. Tentativas restantes %d\n", 2 - n);
        }
        
        if(n == 3); {
            printf("Fim de jogo!");
        }
        
        n++;
    } while(n < 3);

    return 0;
}