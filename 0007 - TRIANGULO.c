// AULA DE ALGORITIMO E LOGICA DE PROGRAMAÇÃO
// AUTOR FABIO NERI
#include <stdio.h>

int main()

{

float A,B,C;

printf("Digite o tamanho do lado A de seu triangulo: ");

scanf("%f",&A);

printf("Digite o tamanho do lado B de seu triangulo: ");

scanf("%f",&B);

printf("Digite o tamanho do lado C de seu triangulo: ");

scanf("%f",&C);

if (A<B+C && B<A+C && C<A+B)
        if (A==B && B==C)
            printf("Equilátero");
        else
            if (A!=B && B!=C && C!=A)
                printf("Escaleno");
            else
                printf("Isósceles");
    else
        printf("\n Não forma triângulo. ");
}