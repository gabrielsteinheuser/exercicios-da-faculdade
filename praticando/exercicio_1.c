
/*exercício 1 - 
a) Efetuar leitura de dois valores numéricos inteiros e apresentar o resultado da diferença do maior valor pelo
menor valor.*/

#include <stdio.h>

int main() {
    int numero1, numero2, diferença;
    
    printf("Preciso que você informe 2 números para que eu consiga te mostrar qual é o maior e qual é o menor\n");
    printf("Informe o primeiro numero: \n");
    scanf("%d", &numero1);
    printf("Informe o segundo número: \n");
    scanf("%d", &numero2);
    
    if (numero2 > numero1) {
        diferença = numero2 - numero1;
    } else {
        diferença = numero1 - numero2;
    }
    printf("A diferença entre os numeros é de: %d", diferença);
    
    
    
    return 0;
}
