#include <stdio.h>

int main()
{
    // Declarações
    float n1, n2;
    float r;
    
    // Pede e recebe número 1
    printf("Digite um número: ");
    scanf("%f", &n1);
    
    // Pede e recebe número 2
    printf("Digite outro número: ");
    scanf("%f", &n2);
    
    // Divisão (Processamento)
    r = n1 / n2;
    
    // Mostra o resultado 
    printf("A divisão do número %f pelo número %f é %f", n1, n2, r);

    return 1;
}