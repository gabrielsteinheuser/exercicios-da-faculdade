//a) Elaborar um programa que apresente os quadrados dos números inteiros existentes na faixa de valores de 15 a 200.

#include <stdio.h>

int main() 
{
    int cont = 0;
    for (int i = 15; i <= 200; i++) 
    {
        cont++;
        printf("O quadrado de %d é %d\n", i, i * i);
    }    
    return 0;
}