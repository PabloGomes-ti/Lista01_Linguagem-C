/*6 Faça um programa que receba dois números e mostre qual deles é o maior*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	int num1,num2;
	printf("\tINFORME O PRIMEIRO NUMERO " , num1);
	scanf("%i",&num1);
	printf("\tINFORME O SEGUNDO NUMERO  " , num2);
	scanf("%i",&num2);
	if (num1>num2)
	printf("\tO PRIMEIRO NUMERO É MAIOR %i");
	else
	printf("\tO SEGUNDO NUMERO É MAIOR");
	
	return 0;
	
}
