#include "stdio.h"

int main(void)
{
    
    int n;
        
    do
    {
        printf("Height: ");
        scanf("%i", &n);
    }
    while (n < 1 || n > 8);
    for (int i=0; i<=n; i++)
    {
     
        for (int j=8; j>i; j--)
        {
            printf(" ");
        }
        for (int h=0; h<i; h++)
        {
            printf("#");
        }
        printf(" ");
        printf("\n");
    }

}