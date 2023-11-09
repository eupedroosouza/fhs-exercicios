// Fundamentos da programação de computadores: algoritmos, Pascal, C/C++ e Java. 2. ed.
#include <stdio.h>

int main() {
    
    // Declarações
    float base;
    float altura;
    float area;

    // Pede a medida da base (Entrada)
    printf("Qual é a medida da base do triângulo? \n");
    scanf("%f", &base);

    // Pede a medida da altura(Entrada)
    printf("Qual é a medida da altura do triângulo? \n");
    scanf("%f", &altura);

    // Calculando a area (Processamento)
    area = (base * altura) / 2;

    printf("A área do triângulo retângulo de base %.3f e altura %.3f é %.3f.\n", base, altura, area);

    return 1;
}