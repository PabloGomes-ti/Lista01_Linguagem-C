/*8. O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor e
dos impostos (aplicados ao custo de fábrica). Supondo que a percentagem do distribuidor seja de 25% e os
impostos de 42%, escrever um programa em C que receba o custo de fábrica de um carro e escreva o custo
ao consumidor*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	system("color e");
	float valor_carro_novo,valor_de_fabrica,valor_consumidor;
	printf("\tINSIRA O VALOR DO CARRO R$ :",valor_carro_novo);
	scanf("%f",&valor_carro_novo);
	valor_de_fabrica=valor_carro_novo*142/100;
	printf("\tO VALOR DO CARRO DE FÁBRICA É: %f", valor_de_fabrica);
	valor_consumidor=valor_carro_novo*167/100;
	printf("\t\nO VALOR DO CARRO PARA O CONSUMIDOR É: %f", valor_consumidor);
	
	return 0;
}
