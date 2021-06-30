#include <stdio.h>

int main()
{
   float media, p1, p2, p3, p4;
   
    printf ("Por Favor, Informe a Primeira Nota:\n");
    scanf ("%f", &p1);
    printf ("Por Favor, Informe a Segunda Nota: .\n");
    scanf ("%f", &p2);
    printf ("Por Favor, Informe a Terceira Nota: .\n");
    scanf ("%f", &p3);
    printf ("Por Favor, Informe a Quarta Nota: .\n");
    scanf ("%f", &p4);
    media = (p1+p2+p3+p4)/4;
    printf ("A Media deste aluno é = %.1f" , media);
    
}