// Fundamentos da programação de computadores: algoritmos, Pascal, C/C++ e Java. 2. ed.
#include <stdio.h>
#include <math.h>

int main() {

    // Declarações
    float alturaDegrau;
    float alturaUsuario;
    int degrausNecessarios;

    // Pede a altura do degrau (Entrada)
    printf("Qual é a altura de cada degrau? \n");
    scanf("%f", &alturaDegrau);

    // Pede a altura que o usuário deseja alcançar (Entrada)
    printf("Qual é a altura que você deseja alcançar? \n");
    scanf("%f", &alturaUsuario);

    // Calcura os degraus necessários (Processamento)
    degrausNecessarios = ceil(alturaUsuario / alturaDegrau);

    // Mostra quantos degraus o usuário precisa subir (Saída)
    printf("Você precisa subir %d degraus para chegar até %.2f de altura.\n", degrausNecessarios, alturaUsuario);

    return 1;
}