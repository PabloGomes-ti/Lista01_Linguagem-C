/*7. Um reality show realizou uma prova onde os participantes tinham que buscas bolas de 3 cores diferentes, e
de acordo com a tabela abaixo cada um teria uma pontuação:
? Bola Verde: 10 pontos
? Bola amarela: 5 pontos
? Bola branca: 3 pontos
Construa um programa em C que leia a quantidade de bolas de cada cor e apresente a pontuação final do
participante*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	system("color e");
	int bola_verde,bola_amarela,bola_branca,total_pts;
	printf("INFORME A QTD DE BOLAS VERDES QUE O PARTICIPANTE OBTEVE ", bola_verde);
	scanf("%d",&bola_verde);
	printf("INFORME A QTD DE BOLAS AMARELAS QUE O PARTICIPANTE OBTEVE ", bola_amarela);
	scanf("%d",&bola_amarela);	
	printf("INFORME A QTD DE BOLAS BRANCAS QUE O PARTICIPANTE OBTEVE ", bola_branca);
	scanf("%d",&bola_branca);	
	total_pts=bola_verde*10+bola_amarela*5+bola_branca*3;
	printf("A PONTUAÇÃO DO PARTICIPANTE É: %d", total_pts);
	
	return 0;
	
}


