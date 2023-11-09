// Fundamentos da programação de computadores: algoritmos, Pascal, C/C++ e Java. 2. ed.
#include <stdio.h>
#include <math.h>

int main() {

    // Declarações
    int numero;
    int numeroAoQuadrado;
    int numeroAoCubo;
    double numeroNaRaizQuadrada;
    double numeroNaRaizCubica;

    // Pede o número (Entrada)
    while (1) {
        printf("Digite um número: \n");
        scanf("%d", &numero);
        if (numero > 0) {
            break;
        } else {
            printf("O número precisa ser maior que 0.\n");
            continue;
        }
    }

    // Operaçãoes (Processamento)
    numeroAoQuadrado = numero * numero;
    numeroAoCubo = numero * numero * numero;
    numeroNaRaizQuadrada = sqrt(numero);
    numeroNaRaizCubica = cbrt(numero);
    
    // Mostra os resultados (Saída)
    printf("a) %d^2 = %d\n", numero, numeroAoQuadrado);
    printf("b) %d^3 = %d\n", numero, numeroAoCubo);
    printf("c) raiz quadrada de %d = %f\n", numero, numeroNaRaizQuadrada);
    printf("d) raiz cúbica de %d = %f\n", numero, numeroNaRaizCubica);

    return 1;
}