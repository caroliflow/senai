#include <stdio.h>
/*
Desenvolva um programa que leia o nome de um time de futebol, 
o n�mero de vit�rias e o n�mero de empates. O programa dever� 
calcular e apresentar na tela, o nome do time e o total de pontos. 
Lembrando que a vit�ria vale 3 pontos e o empate vale 1 ponto.
*/
int main(){
	char a[10];
	int b;
	int c;
	int d;
	//entrada
	printf("digite o nome do time de futebol:");
	scanf("%s",&a);
	printf("digite o numero de vitorias do time:");
	scanf("%d",&b);
	printf("digite o numero de empates do time:");
	scanf("%d",&c);
	//processamento
	d = (b * 3) + c;
	//saida
	printf("o time %s tem %d pontos",a,d);
	return 0;
}
