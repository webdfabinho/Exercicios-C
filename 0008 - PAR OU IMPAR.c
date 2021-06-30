// AULA DE ALGORITIMO E LOGICA DE PROGRAMAÇÃO
// AUTOR FABIO NERI
#include <stdio.h>

int main()
{
    int nx, ny, result;
    printf("Digite um numero criança 1: ");
    scanf("%d", &nx);
    printf("Digite um numero criança 2: ");
    scanf("%d", &ny);
    result = nx + ny;
    if (result%2==0)
        printf("o seu numero eh par");
    else 
        printf("o seu numero eh impar");
}