/* 12. Construa um programa em C que determine (imprima) se um dado número N inteiro (recebido através do
teclado) é PAR ou ÍMPAR. (Usar o operador resto: Ex: N%2)).*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
    int main(){
    setlocale(LC_ALL,"Portuguese");
    system("color e");
    int numero;
	printf("\tMostrar se o numero é par ou ímpar\n");
	printf("\tEntrar com um numero\t: =  ");
	scanf("%i",&numero);
	if (numero % 2==0)
	    printf("\tO número %i é par",numero);
	else{
		printf("\tO numero %i é impar",numero);
		
	}
	}
	
