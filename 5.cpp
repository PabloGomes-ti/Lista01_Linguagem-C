/*5. Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
? O número digitado ao quadrado • A raiz quadrada do número digitado*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
	int num;
	setlocale(LC_ALL,"portuguese");
	printf("\tINFORME UM NUMERO ",num);
	scanf("%i",&num);
	if (num>0)
    printf("\ntA RAIZ QUADRADA DO NUMERO E:%f2.2",sqrt(num));
    printf("\n\tO QUADRADO DO NUMERO E:%2.2f",pow(num,2)); 	
    printf("\n\n");
    system("pause");
    
    return(0);
	
}
