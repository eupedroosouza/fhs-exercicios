// Fundamentos da programação de computadores: algoritmos, Pascal, C/C++ e Java. 2. ed.

#include <stdio.h>

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
    quantidadeDeConvites = ((int) custo) / ((int) precoConvite);
    if (((int) custo) % ((int) precoConvite) > 0) {
        quantidadeDeConvites += 1;
    }

    // Mostra o resultado (Saída)
    printf("O espetáculo precisa vender %d convites para que se pague.\n", quantidadeDeConvites);

    return 1;
}