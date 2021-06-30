// AULA DE ALGORITIMO E LOGICA DE PROGRAMAÇÃO
// AUTOR FABIO NERI
int main()
{
    int a, b, c;
    
    a = 1; /* 1 verdadeiro*/
    b = 1; /* 1 verdadeiro*/
    c = 0; /* 0 falso*/
    
    if(a = 1){
        printf("C1");
    }
    else{
        if(b = 1){
            if(c = 2){
                printf("C2");
            }else{
                printf("C3");
                printf("C4");
            }
        }
    printf("C5");
    }
    printf("C6");
        
    return 0;
}