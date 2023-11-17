#include "stdio.h"


int main(void)
{
    float troco = 0;
    int moeda25 = 0;
    int moeda10 = 0;
    int moeda5 = 0;
    int moeda1 = 0;

    do
    {
        printf("Digite o valor do troco: ");
        scanf("%f", &troco);
    }
    while (troco < 0);

    printf("O valor total do troco = %.2f \n", troco);
    
    while (troco > 0)
    {
        if (troco >= 0.25)
        {
            troco = troco - 0.25;
            moeda25 += 1;
        }
        else if (troco >= 0.10)
        {
            troco = troco - 0.10;
            moeda10 += 1;
        }
        else if (troco >= 0.05)
        {
            troco = troco - 0.05;
            moeda5 += 1;
        }
        else
        {
            troco = troco - 0.01;
            moeda1 += 1;
            break;
        }
        
    }
    
    printf("Moedas 0.25 = %i \n", moeda25);
    printf("Moedas 0.10 = %i \n", moeda10);
    printf("Moedas 0.5 = %i \n", moeda5);
    printf("Moedas 0.1 = %i \n", moeda1);
}