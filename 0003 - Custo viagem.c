#include <stdio.h>
int main()
{
    float vm, tv, rndt, pltr, cdpr, dist, qltr, ccomb, depre, ct;
    printf ("Informe velocidade média: ");
    scanf("%f", &vm);
    printf ("Informe tempo de viagem: ");
    scanf("%f", &tv);
    printf ("Informe rendimento do veículo: ");
    scanf("%f", &rndt);
    printf ("Informe preço do litro: ");
    scanf("%f", &pltr);
    printf ("Informe depreciação por km rodado: ");
    scanf("%f", &cdpr);
    
    dist=vm*tv;
    qltr=dist/rndt;
    ccomb=qltr*pltr;
    depre=dist*cdpr;
    
    ct=ccomb+depre;
    printf("Custo total: R$ %.2f", ct);
}
