
#include <stdio.h>

int main() 
{
    printf("Digite o primeiro número: ");
    int numero;
    scanf("%d", &numero);
    int i = 1;
    while(i <= numero) 
    {
        printf("%d\n", i);   
        i++;
        printf("Deseja continuar a contagem? (s/n): ");
        char resposta;
        scanf(" %c", &resposta);
        if(resposta == 'n') 
        {
            break;
        }
        else if (resposta != 's')
        {
            printf("Resposta invalida.\n");
        
        }
    }
    
    return 0;
}