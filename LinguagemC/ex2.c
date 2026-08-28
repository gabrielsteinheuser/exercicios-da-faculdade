
#include <stdio.h>

int main() 
{
    int numero;

    printf("Digite o primeiro número: ");
    scanf("%d", &numero);
    int i = 1;
    while(i <= numero) {
        printf("%d\n", i);   
        i++;
    }

    return 0;
}