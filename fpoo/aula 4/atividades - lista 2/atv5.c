#include <stdio.h>
/*
Desenvolva um programa que leia o nome e o pre�o de uma mercadoria. Se o pre�o for menor do que 1000 ter� um aumento de 5% no 
pre�o da mercadoria, sen�o o aumento ser� de 7%. Mos?trar o nome da mercadoria e o seu novo pre�o
*/
int main(){
	char a[10];
	float b, c, d;
	printf("digite o nome da mercadoria: ");
	scanf("%s",&a);
	printf("digite o preco da mercadoria: ");
	scanf("%f",&b);
	c = b * 1.05;
	d = b * 1.07;
	if(b < 1000){
		printf("a mercadoria %s tem o novo preco de: %.2f",a,c);
	}else{
		printf("a mercadoria %s tem o novo preco de: %.2f",a,d);
	}
	return 0;
}
