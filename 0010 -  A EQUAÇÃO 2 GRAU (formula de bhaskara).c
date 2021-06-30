// AULA DE ALGORITIMO E LOGICA DE PROGRAMAÇÃO
// AUTOR FABIO NERI
#include <stdio.h>
#include <math.h>

int main() {

  float a,b,c,x1,x2,delta;

  printf("Digite o valor de A:\n");
  scanf("%f", &a);
  
  printf("Digite o valor de B:\n");
  scanf("%f", &b);
  
  printf("Digite o valor de C:\n");
  scanf("%f", &c);
  
  printf("A equação para resolução é: %1.0fx^2 + %1.0fx + %1.0f = ?\n", b, a, c);

      delta=(b*b)-(4*a*c);

      printf("Valor de delta = %1.1f \n", delta);

    if (delta < 0) {
      printf("Nao existe solucao real :,(\n");
    }
    else {
      x1 = (-b + sqrt(delta))/(2*a);
      x2 = (-b - sqrt(delta))/(2*a);

      if (fabs(delta) < 1.0e-10) {
	printf("Existe uma raiz %f de multiplicidade 2\n", x1);
      }
      else {
	printf("As raizes sao X1 =%3.2f e X2 =%3.2f\n", x1, x2);
      }
    }
  }
  