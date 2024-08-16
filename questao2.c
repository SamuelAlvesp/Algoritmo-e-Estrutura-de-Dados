#include <stdio.h>
//Questao 2
int main()
{
    int celsius;
    float fahrenheit;
    printf ("Digite a temperatura em graus celsius: ");
    scanf ("%d", &celsius);
    
    fahrenheit=(celsius*9.0/5.0+32);
    printf ("%f", fahrenheit);
    return 0;
}
