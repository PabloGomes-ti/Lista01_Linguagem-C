/*6 Fa�a um programa que receba dois n�meros e mostre qual deles � o maior*/
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
	printf("\tO PRIMEIRO NUMERO � MAIOR %i");
	else
	printf("\tO SEGUNDO NUMERO � MAIOR");
	
	return 0;
	
}
