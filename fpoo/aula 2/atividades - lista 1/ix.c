#include <stdio.h>
/*
Desenvolva um programa que leia o nome e o pre�o 
de uma mercadoria. O programa dever� calcular um 
aumento de 5% no pre�o da mercadoria e mostrar o 
nome da mercadoria e o seu novo pre�o
*/
int main(){
	char x[10];
	int y;
	int z;
	printf("digite o nome da mercadoria:");
	scanf("%s",&x);
	printf("digite o preco da mercadoria:");
	scanf("%d",&y);
	z = (105 * y) / 100;
	printf("a mercadoria %s esta com o novo preco de: %d",x,z);
	return 0;
}
