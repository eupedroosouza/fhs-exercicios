// Fundamentos da programação de computadores: algoritmos, Pascal, C/C++ e Java. 2. ed.
#include <stdio.h>

int main() {

    // Declarações
    float pes;
    float polegadas;
    float jardas;
    float milhas;

    // Pede a quantidade de pés (Entrada)
    printf("Digite a medida em pés: \n");
    scanf("%f", &pes);

    // Conversões (Processamento)
    polegadas = pes * 12.0f;
    jardas = pes / 3.0f;
    milhas = jardas / 1760.0f;

    // Mostrar os resultados (Saída)
    printf("a) polegadas = %f\n", polegadas);
    printf("b) jardas = %f\n", jardas);
    printf("c) milhas = %f\n", milhas);

    return 1;
}