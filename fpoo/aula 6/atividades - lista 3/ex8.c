#include <stdio.h>
/*
Fa�a um programa que pe�a para o usu�rio digitar um n�mero inteiro positivo e calcule o fatorial deste n�mero
*/
int main(){
	int a, i, fat;
	printf("digite um numero inteiro e positivo: ");
	scanf("%d", &a);
	fat = 1;
	for(i = a; i >= 1; i--){
		fat *= i;
	}
	printf("o fatorial de %d e: %d",a,fat);
	return 0;
}
