#include <stdio.h>
/*
Escreva um programa que exiba na tela a tabuada de um n�mero que dever� ser informado pelo usu�rio entre 0 e 10
*/
int main(){
	int x, i, soma;
	printf("digite um numero entre 0 e 10: ");
	scanf("%d", &x);
	for(i = 0; i < 11; i++){
		soma = x * i;
		printf("%d x %d = %d\n",x,i,soma);
	}
	return 0;
}
