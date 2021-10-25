/*Faça um programa para calcular a área de um cilindro dada sua formula*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	float a,b,c,d,e;
	printf("\tInforme o valor do Raio   " );
	scanf("%f",&a);	
	printf("\tInforme o valor da altura " );
	scanf("%f",&b);
	c=2*3.14*a;
	printf("\tA =2*3,14*x = %f",c );
	d=a+b;
	printf("\t\n(r + h)= %f",d );
	e=d*c;
	printf("\t\t\n =2*3,14*x *(r+h)");
	printf("\t\t\n área do cilindro é: %f", e);
	
	return 0;
	
	
}
