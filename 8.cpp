/*8. O custo ao consumidor de um carro novo � a soma do custo de f�brica com a percentagem do distribuidor e
dos impostos (aplicados ao custo de f�brica). Supondo que a percentagem do distribuidor seja de 25% e os
impostos de 42%, escrever um programa em C que receba o custo de f�brica de um carro e escreva o custo
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
	printf("\tO VALOR DO CARRO DE F�BRICA �: %f", valor_de_fabrica);
	valor_consumidor=valor_carro_novo*167/100;
	printf("\t\nO VALOR DO CARRO PARA O CONSUMIDOR �: %f", valor_consumidor);
	
	return 0;
}
