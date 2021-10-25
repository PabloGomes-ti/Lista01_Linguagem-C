/*2. Faça um programa em C para efetuar a conversão de um valor dado em Mbps para Kbps*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
	int Mbps,Qtd_dados;
	printf("\tInforme a Qtd de Mbps: ");
	scanf("%i",&Mbps);
	printf("\tA Qtd de dados em Kbps: ");
	Qtd_dados=Mbps*1024;
	printf("%i",Qtd_dados,Mbps);					
	
	return 0;
	
}
