#include <stdio.h>
/*
Fa�a um programa que pe�a para o usu�rio digitar um n�mero inteiro positivo e calcule o fatorial deste n�mero
*/
int main(){
	int a, b, c, i;
	printf("digite um numero inteiro e positivo: ");
	scanf("%d", &a);
	i = 1;
	while(i <= a){
		b = a * (a - i);
		c = b * b;
		printf("fatorial = %d\n",c);
		i++;
	}
	return 0;
}
