#include "stdio.h"

int main()
{
    int population, finalPop, losePop, newPop, yearCount = 0;
 

    do
    {
        printf("Digite a populacao inicial: ");
        scanf("%i", &population);
    }
    while (population <= 9);

    do
    {
        printf("Digite a populacao final: ");
        scanf("%i", &finalPop);
    }
    while(finalPop <= 9);

    do
    {
        newPop = population / 3;
        losePop = population / 4;

        population += newPop - losePop;
        yearCount++;
    }
    while (population < finalPop);

    printf("Demorou %i anos para chegar a populacao de %i", yearCount, finalPop);
}   