#include <stdio.h>
/*
Desenvolva um programa que leia o nome de uma cidade,
o n�mero total de eleitores e o n�mero total de votos
apurados na �ltima elei��o. O programa dever� 
calcular e exibir a porcentagem de participa��o dos 
eleitores desta cidade na �ltima elei��o
*/
int main(){
	char a[10];
	int b;
	int c;
	int d;
	printf("digite o nome da cidade:");
	scanf("%s",&a);
	printf("digite o numero total de eleitores:");
	scanf("%d",&b);
	printf("digite o numero total de votos apurados na ultima eleicao:");
	scanf("%d",&c);
	d = (c * 100) / b;
	printf("a porcentagem de participacao dos eleitores na cidade %s e: %d",a,d);
	return 0;
}
