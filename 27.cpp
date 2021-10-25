/*27 Gere um número aleatório entre 0 e 19. Receba um número informado pelo usuário até que ele acerte o
número aleatório gerado. Apresente quantas tentativas foram necessárias. Para gerar um número aleatório:*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
  int i,n;
  printf("\tGerando 1 número aleatorio:\n\n");
  for (i = 0; i < 10; i++)
  {
    printf("%d ", rand() % 100000);
  }
  return 0;
}
