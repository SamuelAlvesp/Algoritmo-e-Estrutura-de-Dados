#include <stdio.h>
//Questao 4
int main()
{   
   float kg, kge, multa;
   printf ("Digite a quantidade de peixe em kg\n");
   scanf ("%f", &kg);
   
   kge= kg-50;
   if (kge>0)
   {printf ("Esse e o valor excedente: %.2f kg \n",kge);
   
   multa= kge*4;
   printf ("A multa sera de: R$%.2f",multa);}
   else {printf ("Nao havera multa");}
       return 0;
}

