#include <stdio.h>
/*
Fa�a um programa que solicite que o usu�rio digite um valor inteiro, positivo e imprima todos os valores entre 0 e o n�mero digitado
*/
int main(){
	int x;
	int i;
	printf("digite um numero inteiro e positivo: ");
	scanf("%d",&x);
	for(i = 0; i <= x; i++){
		printf("%d\n",i);
	}
	return 0;
}
