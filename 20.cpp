/* 20. Construa um programa para que: Dado um conjunto de valores inteiros e positivos, digitados pelo usuário,
determinar qual o menor valor do conjunto. O algoritmo deve imprimir o valor determinado. Quando o
usuário decidir que finalizou a entrada de dados, ele deve digitar –1, e este dado não deve ser considerado.*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
int num=0,max=0,min=0;
system("color e");
setlocale(LC_ALL,"portuguese");
printf("\tDigite um conjunto de numero e 0 para encerrar \n");
scanf("%d",&num);
while (num!=0){
if(num<0){
printf("\tValor negativo, digite novamente %d\n",num);
}
else if
(num>max){
max=num;
}
else if
(num<min){
min=num;
}
scanf("%d",&num);
}
printf("\tO maior valor e: %d \n",max);
printf("\tO menor valor e: %d \n",min);

system("pause");

}
