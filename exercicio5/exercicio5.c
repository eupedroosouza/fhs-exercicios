// Fundamentos da programação de computadores: algoritmos, Pascal, C/C++ e Java. 3. ed.
#include <stdio.h>

int main()
{
    // Declarações
    float price;
    float priceWithDescont;
    
    // Pede o valor do produto
    printf("Qual é o valor do protudo: ");
    scanf("%f", &price);

    
    // Aplicação do desconto (Processamento)
    priceWithDescont = price - (price * ( 10.0f / 100.0f));
    
    // Mostra o novo preço
    printf("O preço %f com desconto de 10 porcento é %f", price, priceWithDescont);
    
    return 1;
}