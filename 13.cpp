/*13. Você foi encarregado para desenvolver um programa com objetivo de armazenar os pontos do campeonato
interno de futebol do IFSULDEMINAS, assim seu programa deve receber o nome e os gols de dois times, e
apresentar a pontuação que cada um deve receber pelo jogo, levando-se em consideração que uma vitória
dá 3 pontos, empate 1 ponto e derrota 0 ponto*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
	system("color e");
	setlocale(LC_ALL,"portuguese");
	int vitoria =3;
	int empate=1;
	int derrota=0;
	int time_a,gols_time_a,time_b,gols_time_b,pontos_time_a,pontos_time_b;
	printf("\tNÚMERO DE VITORIAS DO TIME A: ", vitoria);
	scanf("%i",&vitoria);
	printf("\tNÚMERO DE EMPATES DO TIME A: ", empate);
	scanf("%i",&empate);
	printf("\tNÚMERO DE DERROTAS DO TIME A: ", derrota);
	scanf("%i",&derrota);
	printf("\tINÚMERO DE GOLS DO TIME A: ", gols_time_a);
	scanf("%i",&derrota);
	pontos_time_a=vitoria*3+empate*1;
	printf("\tTotal de Pontos do Time A = %i: ", pontos_time_a);
	printf("\n\tNÚMERO DE VITORIAS DO TIME B: ", vitoria);
	scanf("%i",&vitoria);
	printf("\tNÚMERO DE EMPATES DO TIME B: ", empate);
	scanf("%i",&empate);
	printf("\tNÚMERO DE DERROTAS DO TIME B: ", derrota);
	scanf("%i",&derrota);
	printf("\tINÚMERO DE GOLS DO TIME B: ", gols_time_b);
	scanf("%i",&derrota);
	pontos_time_b=vitoria*3+empate*1;
	printf("\tTotal de Pontos do Time B = %i: ", pontos_time_b);
	
	return 0;
	
	
}
