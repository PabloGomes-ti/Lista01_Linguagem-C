/*27 Gere um n�mero aleat�rio entre 0 e 19. Receba um n�mero informado pelo usu�rio at� que ele acerte o
n�mero aleat�rio gerado. Apresente quantas tentativas foram necess�rias. Para gerar um n�mero aleat�rio:*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
  int i,n;
  printf("\tGerando 1 n�mero aleatorio:\n\n");
  for (i = 0; i < 10; i++)
  {
    printf("%d ", rand() % 100000);
  }
  return 0;
}
