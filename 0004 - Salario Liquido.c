// AULA DE ALGORITIMO E LOGICA DE PROGRAMAÇÃO
// AUTOR FABIO NERI
#include <stdio.h>

int main()
{
   float hora, vhora, desc, sal_bru, sal_liq;
   printf ("Digite o número de horas trabalhadas:, \n");
   scanf ("%f", &hora);
   printf ("Digite o valor da hora trabalhada:, \n");
   scanf ("%f", &vhora);
   printf ("Digite o Desconto:, \n");
   scanf ("%f", &desc);
   sal_bru = hora*vhora;
   sal_liq = sal_bru-(sal_bru*desc) / 100;
   printf (" O funcionario tem o salario bruto de: R$ %.2f, e seu salário liquido será de: R$ %.2f.", sal_bru, sal_liq);
}