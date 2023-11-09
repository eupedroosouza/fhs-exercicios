// Fundamentos da programação de computadores: algoritmos, Pascal, C/C++ e Java. 2. ed.

#include <stdio.h>
#include <math.h>

int main() {

    // Declarações
    float custo;
    float precoConvite; 
    int quantidadeDeConvites; 

    // Pede o custo do espetáculo (Entrada)
    printf("Qual é o custo do espetáculo? \n");
    scanf("%f", &custo);

    // Pede o custo do convite (Entrada)
    printf("Qual é o preço do convite? \n");
    scanf("%f", &precoConvite);

    // Calcula a quantidade de convites para que o custo seja satisfeito (Processamento)
    quantidadeDeConvites = ceil(custo / precoConvite);

    // Mostra o resultado (Saída)
    printf("O espetáculo precisa vender %d convites para que se pague.\n", quantidadeDeConvites);

    return 1;
}