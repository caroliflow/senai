#include <stdio.h>
/*
Fa�a um programa que solicite que o usu�rio digite um valor inteiro, positivo e imprima todos os valores 
�mpares entre 0 e o n�mero digitado
*/
int main(){
	int i, x;
	printf("digite um numero inteiro e positivo: ");
	scanf("%d", &x);
	for(i = 1; i <= x; i+=2){
		printf("%d\n",i);
	}
	return 0;
}
