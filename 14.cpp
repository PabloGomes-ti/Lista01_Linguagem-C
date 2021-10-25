/*14. Construa um programa em C para determinar se o indivíduo está com um peso favorável. Essa situação é
determinada através do IMC (Índice de Massa Corpórea), que é definida como sendo a relação entre o peso
(PESO) e o quadrado da Altura (ALTURA) do indivíduo. Ou seja*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
	int main(){
    setlocale(LC_ALL,"Portuguese");
    system ("color b");
    float imc,peso,altura;
    printf("\tINFORME O PESO = ", peso);
    scanf("%f",&peso);
    printf("\tINFORME A ALTURA = ", altura);
    scanf("%f",&altura);
    altura= altura*altura;
    imc=peso/altura;
    printf("\tO VALOR DO IMC=: %f ",imc);
    if(imc<20){	
	printf("\tABAIXO DO PESO");}
	
    else if (imc>=20 && imc<25){
    printf("\tPESO NORMAL");}
    
    else if(imc>=25 && imc<30){
    printf("\tSOBRE PESO");}
    
    else if	(imc>=30 && imc<40){
    printf("\tOBESO");}
    
    else if	(imc>=40){
    printf("\tOBESO MÓRBIDO");}
    
	return 0;
	
}
