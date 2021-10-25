/*26. Freitas tem 1,50m e cresce 1 centímetros por ano, enquanto Russo tem 1,40m e cresce 2 centímetros por
ano. Construir um programa que calcule iterativamente e imprima quantos anos serão necessários para que
Russo seja maior que Freitas, considerando que ambos nunca param de crescer*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
   setlocale(LC_ALL,"portuguese");
   float Freitas=1.5,Russo=1.1;
   int tempo_anos=0;
   while (Freitas>Russo)
   {
    Freitas=Freitas+0.01;
    Russo=Russo+0.02;
    tempo_anos=tempo_anos+1;
   }
   printf("Levará %d anos",tempo_anos);

   return 0;

}
