# exercicios-da-faculdade


// Exercicio 
#include <stdio.h>

int main()
{
    float dolar;
    float real = 5.18;
    float soma;

    printf("Convertendo o dólar para o real\n");
    printf("Um dólar equivale a R$5,18\n");
    
    printf("Informe quantos dólares você tem e te direi quantos reais você tem convertido: ");
    scanf("%f", &dolar);

    soma = dolar * real;

    printf("Você possui %.2f dólares e isso em reais se torna R$ %.2f\n", dolar, soma);

    return 0;
}
