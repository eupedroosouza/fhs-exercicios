// Fundamentos da programação de computadores: algoritmos, Pascal, C/C++ e Java. 2. ed.
#include <stdio.h>

int main() {
    
    // Declarações
    float salarioBase;
    float novoSalario;

    // Pede o salário base (Entrada)
    printf("Digite o salário base do funcionário: \n");
    scanf("%f", &salarioBase);

    // Calcula o novo salário (Processamento)
    novoSalario = (salarioBase - (salarioBase * (10.0f / 100.0f))) + 50;

    // Mostra o novo salário (Saída)
    printf("O salário do funcionário com impostos e uma gratificação de R$ 50 é de R$ %.2f.\n", novoSalario);

    return 1;
}