/*23Construa um programa para calcular a potência de um valor informado como base por um valor informado
como expoente, sem utilizar a função pow*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main() {
  int x,n,potencia,contador; 
  printf("\n\tCalculo de potencias\n");
  printf("\n\tDigite um numero inteiro: ");
  scanf("%d", &x);
  printf("\n\tDigite um numero um inteiro nao-negativo: ");
  scanf("%d", &n);
  
  potencia = 1;
  contador = 0;
  
  while (contador != n) {
    potencia = potencia * x;
    contador = contador + 1;
  }
  
  printf("\n\tO valor de %d elevado a %d: %d\n", x, n, potencia);
  return 0;
}

