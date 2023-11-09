// Fundamentos da programação de computadores: algoritmos, Pascal, C/C++ e Java. 2. ed.

#include <stdio.h>
#include <math.h>

int main() {

    // Declarações
    float numero;
    int inteira;
    float fracionaria;
    int arrendadamento;

    // Recebe o número (Entrada)
    printf("Digite um número: \n");
    scanf("%f", &numero);
    
    // Processamento
    inteira = (int) numero;
    fracionaria = numero - inteira;
    arrendadamento = ceil(numero);

    // Mostra o resultado
    printf("a) %d\n", inteira);
    printf("b) %f\n", fracionaria);
    printf("c) %d\n", arrendadamento);

    return 1;
}
