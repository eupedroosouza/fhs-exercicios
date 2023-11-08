#include <stdio.h>

int main()
{
    // Declarações
    int n1, n2, r;
    
    // Pede e recebe número 1
    printf("Digite um número: ");
    scanf("%d", &n1);
    
    // Pede e recebe número 2
    printf("Digite outro número: ");
    scanf("%d", &n2);
    
    // Subtração (Processamento)
    r = n1 - n2;
    
    // Mostra o resultado 
    printf("A subtração do número %d pelo número %d é %d", n1, n2, r);
    
    return 1;
}