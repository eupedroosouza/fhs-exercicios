// Fundamentos da programação de computadores: algoritmos, Pascal, C/C++ e Java. 2. ed.

#include <stdio.h>
#include <math.h>

int main() {

    // Declarações
    float alturaDaParede;
    float alturaDaEscada;
    float distanciaDaParede;

    // Pede a altura da parede (Entrada)
    printf("Qual é a altura que deseja pregar o quadro? \n");
    scanf("%f", &alturaDaParede);

    // Pede a altura da escada (Entrada)
    printf("Qual é o tamanho da escada que pretende usar? \n");
    scanf("%f", &alturaDaEscada);


    // Verifica se a escada é maior que altura da parede (Condicionamento)
    if (alturaDaParede > alturaDaEscada) {
        printf("A sua escada deve ser maior que altura que você quer pegrar o quadro.\n");
        return 1;
    }

    // Calcura a distância da parede (Processamento)
    distanciaDaParede = (alturaDaEscada * alturaDaEscada) - (alturaDaParede * alturaDaParede);
    distanciaDaParede = sqrt(distanciaDaParede);

    // Mostra a distância da escada em relação a parede (Saída)
    printf("A escada deve estar %f de distância da parede.\n", distanciaDaParede);

    return 1;
}