/*25 Na usina de Angra II, os técnicos analisam a perda de massa de um material radioativo. Sabendo-se que este
perde 13% de sua massa a cada 20 segundos. Criar um programa em C que receba a massa de um material
em gramas, calcule iterativamente e mostre o tempo em segundos necessário para que a massa deste
material se torne menor que 1,45 grama.*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
	int segundos=0;

float massaini, massafim;

printf("Informe a massa inicial:");

scanf("%f", &massaini);

massafim=massaini;

while (massafim>=0.10)

{

massafim=massafim/0.25;

segundos=segundos+30;

}

int h= segundos/3600;

int m=(segundos%3600)/60;

int s=(segundos%3600)%60;

printf("tempo:%hi%mi%si,h,m,s");

return 0;

}
