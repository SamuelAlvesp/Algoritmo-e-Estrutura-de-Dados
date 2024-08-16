#include <stdio.h>
//Questao 3
int main()
{
    float n1, n2, produto,soma,somaraiz,raiz;
    printf ("Digite dois numeros reais");
    scanf ("%f %f",&n1, &n2);

    produto= 2*n1;
    printf ("O produto do dobro do primeiro numero e: %f\n", produto);
    
    soma= 3*n1 + n2/2;
    printf ("A soma do triplo do primeiro numero com a metade do segundo numero e: %f\n", soma);
    
    somaraiz= n1+n2;
    raiz= somaraiz*somaraiz;
    printf ("A raiz da soma do primeiro numero com segundo e: %f\n", raiz);
    
    return 0;
}