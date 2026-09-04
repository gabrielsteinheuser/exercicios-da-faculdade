/*e) Escrever um programa que apresente os valores da sequência numérica de Fibonacci até o décimo quinto
termo. A sequência de Fibonacci é formada por 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, ... etc.,
obtendo-se o próximo termo a partir da soma do termo atual com o anterior sucessivamente até o infinito se
a sequência não for interrompida.*/


#include <stdio.h>

int main() {
    int a = 0, b = 1, c, i;

    printf("Sequencia de Fibonacci ate o 15o termo:\n");

    for (i = 1; i <= 15; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    printf("\n");
    return 0;
}