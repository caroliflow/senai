#include <stdio.h>
/*
Desenvolva um programa que leia a velocidade de um carro (km/h) 
e a dist�ncia a ser percorrida (km) por ele. Calcule e apresente na 
tela, quanto tempo (horas) ser� necess�rio para o carro percorrer a 
dist�ncia informada
*/
int main(){
	int x;
	int y;
	int z;
	//entrada
	printf("digite a velocidade do carro em km/h:");
	scanf("%d",&x);
	printf("digite a distancia a ser percorrida em km:");
	scanf("%d",&y);
	//processamento
	z = y / x;
	//sa�da
	printf("s�o %d h para percorrer a distancia",z);
	return 0;
}
