// Fundamentos da programação de computadores: algoritmos, Pascal, C/C++ e Java. 2. ed.
#include <stdio.h>

int main() {

    // Declarações
    float salario;
    float cheque1;
    float taxa1;
    float cheque2;
    float taxa2;
    float saldoAtual;

    // Pede o valor do salário (Entrada)
    printf("Quanto você depositou de salário? \n");
    scanf("%f", &salario);

    // Pede o valor do cheque 1(Entrada)
    printf("Qual é o valor do 1° cheque emitido? \n");
    scanf("%f", &cheque1);

    // Pede o valor do cheque  2(Entrada)
    printf("Qual é o valor do 2° cheque emitido? \n");
    scanf("%f", &cheque2);

    // Calcula taxas e o saldo atual (Processamento)
    taxa1 = cheque1 * (0.38f  / 100.f);
    taxa2 = cheque2 * (0.38f  / 100.f);
    saldoAtual = salario - cheque1 - taxa1 - cheque2 - taxa2;

    // Mostra o saldo atual (Saída)
    printf("Com os cheques + taxas inclusas seu saldo agora é R$ %.2f\n", saldoAtual);

    return 1;
}