/*19 Crie um programa em C que leia um valor e informe se ele � primo. Um n�mero primo � divis�vel s� por 1 e
ele mesmo*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
 system("color e");
 setlocale(LC_ALL,"portuguese");
 int num, i, resultado = 0;
 printf("Digite um n�mero: ");
 scanf("%d", &num);
 for (i = 2; i <= num / 2; i++) {
 if (num % i == 0) {
 resultado++;
     break;
    }
 }
 if (resultado == 0)
 printf("%d � um n�mero primo\n", num);
 else
 printf("%d n�o � um n�mero primo\n", num);
 
 return 0;
}
	
