# Exercícios de Programação em C

Exercícios desenvolvidos durante o curso de **Análise e Desenvolvimento de Sistemas**, com foco em lógica de programação, algoritmos e prática da Linguagem C.

## Conteúdos

- Entrada e saída de dados;
- variáveis e operações aritméticas;
- estruturas de repetição;
- tabuada, somatórios e potências;
- sequência de Fibonacci.

## Organização

| Pasta | Conteúdo |
| --- | --- |
| `LinguagemC/` | Primeira sequência de exercícios em C. |
| `Linguagem C pt2/` | Segunda sequência, com enunciados e exercícios. |
| `praticando/` | Exercícios adicionais de prática. |

## Como executar

É necessário ter um compilador C, como o GCC, instalado.

```bash
git clone https://github.com/gabrielsteinheuser/exercicios-da-faculdade.git
cd exercicios-da-faculdade
gcc "Linguagem C pt2/ex1.c" -o exercicio
./exercicio
```

No Windows, gere `exercicio.exe` e execute `.\exercicio.exe`. Altere o caminho do arquivo para executar outro exercício.

## Objetivo

Registrar minha evolução acadêmica e consolidar os fundamentos usados no desenvolvimento de software.

## Exemplo inicial — conversão de moeda

O exemplo abaixo preserva o exercício que estava originalmente neste README. A cotação é um valor fixo didático.

```c
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
```

## Autor

[Gabriel Steinheuser](https://github.com/gabrielsteinheuser) — estudante de Análise e Desenvolvimento de Sistemas.
