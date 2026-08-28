
#include <stdio.h>

int main() 
{
    int numero1, numero2;

    printf("Digite o primeiro número para iniciar a contagem dos números: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número para finalizar a contagem dos números: ");
    scanf("%d", &numero2);  

    int i = numero1;
    while(i <= numero2) {
        printf("%d\n", i);   
        i++;
    }   
    return 0;
}