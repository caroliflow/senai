#include <stdio.h>
/*
Fa�a um programa que solicite que o usu�rio digite um valor inteiro, positivo e imprima todos os valores entre 0 e o n�mero digitado de 2 em 2
*/
int main(){
	int i, a;
	printf("digite um valor inteiro e positivo: ");
	scanf("%d", &a);
	for(i = 0; i < a; i+=2){
		printf("%d\n",i);
	}
	return 0;
}

