/*A OBI (Organiza??o de Bocha Internacional) ? respons?vel por organizar a competi??o mundial de bocha.
Infelizmente esse esporte n?o ? muito popular, e numa tentativa de aumentar a sua popularidade, ficou decidido que
seriam chamados, para a Grande Final Mundial, o campe?o e o vice-campe?o de cada sede nacional, ao inv?s de
apenas o primeiro lugar.
Tumb?lia ? um pa?s pequeno que j? havia realizado a sua competi??o nacional quando a nova regra foi institu?da, e o
comit? local n?o armazenou quem foi o segundo classificado. Felizmente eles armazenaram a pontua??o de todos
competidores - que foram apenas tr?s, devido ao tamanho diminuto do pa?s. Sabe-se tamb?m que as pontua??es de
todos jogadores foram diferentes, de forma que n?o ocorreu empate entre nenhum deles.
Resta agora descobrir quem foi o vice-campe?o e para isso o comit? precisa de ajuda*/
/*Entrada A primeira e ?nica linha da entrada consiste de tr?s inteiros separados por espa?os, A, B e C, as
pontua??es dos 3 competidores.
Sa?da Imprima uma ?nica linha na sa?da, contendo apenas um n?mero inteiro, a pontua??o do vice-campe?o*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
	int p1, p2, p3;
 
	
 
	//realiza os testes necess?rios para estabelecer o segundo maior valor
	if ( (p1 > p2 && p1 < p3) || (p1 > p3 && p1 < p2) ) {
	    cout << p1;
	} else if ( (p2 > p1 && p2 < p3) || (p2 > p3 && p2 < p1) ) {
	    cout << p2;
	} else {
	    cout << p3;
	}
 
	return 0;
	
	
	
}
	

