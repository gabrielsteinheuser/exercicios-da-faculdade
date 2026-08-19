/*b) Ler os valores de quatro notas escolares bimestrais de um aluno. Calcular a média aritmética desse aluno e
apresentar a mensagem "Aprovado" se a média obtida for maior ou igual a 7; caso contrário, o programa deve
solicitar a quinta nota (nota de exame) do aluno e calcular uma nova média aritmética entre a nota de exame e
a primeira média aritmética. Se o valor da nova média for maior ou igual a sete, apresentar a mensagem
"Aprovado em exame"; caso contrário, apresentar a mensagem "Reprovado". Informar também, após a
apresentação das mensagens, o valor da média obtida pelo aluno.*/

#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4, nota5, media;
    
    printf("Preciso que você informe as suas 4 notas bimestrais: \n");
    printf("Informe a nota do seu primeiro bimestre: ");
    scanf("%f", &nota1);
    printf("Informe a nota do seu segundo bimestre: ");
    scanf("%f", &nota2);
    printf("Informe a nota do seu terceiro bimestre: ");
    scanf("%f", &nota3);
    printf("Informe a nota do seu quarto bimestre: ");
    scanf("%f", &nota4);
    
    media = (nota1 + nota2 + nota3 + nota4) / 4;
    
    printf("A sua média foi de %.2f\n", media);
    
    if (media >= 7.0) {
        printf("APROVADO");
  
    } else {
    
        printf("EXAME\n");
        printf("Informe a nota do seu quinto bimestre: ");
        scanf("%f", &nota5);
     
        media = (media + nota5) / 2;
        
        printf("A sua média após o exame foi de %.2f\n", media);
        if (media >= 7.0) {
            printf("APROVADO");
        } else {
            printf("REPROVADO");
        }
  
}
    return 0;
}