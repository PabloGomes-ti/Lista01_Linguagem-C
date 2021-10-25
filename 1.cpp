/*1. Elaborar um programa em C que apresente o valor da conversão em dólar (US$) de um valor lido em real, o
programa deve solicitar a cotação do dólar e também a quantidade de reais disponível com o usuário*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
    system("color e");
    float Cotacao_dolar,valor_disponivel_usuario,valor_conversao;
    printf("\tA cotação do dolar é = U$$ ",Cotacao_dolar);
	scanf("%f",&Cotacao_dolar);
	printf("\tO valor disponivel usuario é = R$ ",valor_disponivel_usuario);
	scanf("%f",&valor_disponivel_usuario); 
	valor_conversao = valor_disponivel_usuario/Cotacao_dolar;
	printf("\tO valor final da conversão é = R$ %f ",valor_conversao);
	system("pause");
	
	
	return 0;
}

