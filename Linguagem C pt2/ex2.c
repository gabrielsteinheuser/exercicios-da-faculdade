//b) Elaborar um programa que mostre os resultados da tabuada de um número qualquer, a qual deve ser apresentada de acordo com sua forma tradicional. Ex.: 1x1 = 1 1x2 = 2


#include <stdio.h>

int main() 
{
    printf("Informe um valor para a tabuada: ");
        int valor;
        scanf("%d", &valor);
    
        for (int i = 1; i <= 10; i++) 
    {
        printf("%d x %d = %d\n", valor, i, valor * i);
    }    
    return 0;
}