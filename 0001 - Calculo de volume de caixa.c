// AULA DE ALGORITIMO E LOGICA DE PROGRAMAÇÃO
// AUTOR FABIO NERI
#include <stdio.h>

int main()
{
   float vol, larg, alt, comp;
   
    printf ("Por Favor, Informe a Largura da Caixa: .\n");
    scanf ("%f", &larg);
    printf ("Por Favor, Informe a Altura da Caixa: .\n");
    scanf ("%f", &alt);
    printf ("Por Favor, Informe a Comprimento da Caixa: .\n");
    scanf ("%f", &comp);
    vol = larg*alt*comp;
    printf ("O Volume da Caixa é = %f", vol );
    
}