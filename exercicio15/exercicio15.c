// Fundamentos da programação de computadores: algoritmos, Pascal, C/C++ e Java. 2. ed.
#include <stdio.h>

int main() {

    // Declarações
    float precoFabrica;
    float percentualLucro;
    float percentualImpostos;
    float lucroDistribuidor;
    float valorImpostos;
    float valorFinal;

    // Pede o preço de fábrica (Entrada)
    printf("Digite o preço de fábrica: \n");
    scanf("%f", &precoFabrica);

     // Pede o percentual de lucro (Entrada)
    printf("Digite o percentual de lucro do distribuidor: \n");
    scanf("%f", &percentualLucro);

     // Pede o porcentual de impostos (Entrada)
    printf("Digite o percentual de impostos: \n");
    scanf("%f", &percentualImpostos);

    // Calcular lucro, impostos e valor final (Processamento)
    lucroDistribuidor = precoFabrica * (percentualLucro / 100.0f);
    valorImpostos = precoFabrica * (percentualImpostos / 100.0f);
    valorFinal = precoFabrica + lucroDistribuidor + valorImpostos;

    // Mostra os resultados (Saída)
    printf("a) R$ %.2f\n", lucroDistribuidor);
    printf("b) R$ %.2f\n", valorImpostos);
    printf("c) R$ %.2f\n", valorFinal);

    return 1;
}