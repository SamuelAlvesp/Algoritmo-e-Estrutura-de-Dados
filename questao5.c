#include <stdio.h>
//Questao 5
int main()
{
   float custof, distribuidor, imposto, valorf;
   printf ("Digite o custo de fabrica \n");
   scanf ("%f", &custof);
   distribuidor= custof* 0.28;
   imposto= custof* 0.45;
   valorf= custof+distribuidor+imposto;
   
   printf ("O valor final do carro e de R$%.2f \n",valorf );
   
    return 0;
} 