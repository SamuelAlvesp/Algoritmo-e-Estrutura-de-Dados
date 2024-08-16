#include <stdio.h>
//Questao 6
int main()
{
    float litros, distancia, horas, velocidade;
    printf ("Digite em quantas horas voce concluiu a viagem \n");
    scanf ("%f", &horas);
    printf ("Digite a velocidade media em KM/H \n");
    scanf ("%f", &velocidade);
    distancia= velocidade*horas;
    litros= distancia/12;
    
    printf ("A quantidade utilizada de gasolina foi %.0fL, e a distancia percorrida %.0fkm" , litros,distancia);
    return 0;
}
