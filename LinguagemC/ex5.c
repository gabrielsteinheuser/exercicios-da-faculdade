
#include <stdio.h>

int main() 
{
    printf("Digite o numero incial: ");
    int numero_inicial;
    scanf("%d", &numero_inicial);

    printf("Digite o numero final: ");
    int numero_final;   
    scanf("%d", &numero_final);

    if(numero_inicial > numero_final) 
    {
        int i = numero_inicial;
        while(i >= numero_final) 
        {
            printf("%d\n", i);   
            i--;
        }
    }
    else 
    {
        int i = numero_inicial;
        while(i <= numero_final) 
        {
            printf("%d\n", i);   
            i++;
        }
    }

    return 0;
}