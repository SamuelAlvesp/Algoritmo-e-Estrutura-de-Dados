#include <stdio.h>
//Questao 1
int main()
{   int lado, area, resultado;
    
    printf("Digite o tamanho do lado em cm: ");
    
    scanf("%d", &lado);
    area= lado*lado;
    resultado= 2*area;
    
    printf("O dobro a area do quadrado e: %dcm", resultado);
    return 0;
}
 