#include <stdio.h>
/*
Um caminh�o consegue transportar 18 toneladas de laranjas em uma viagem que 
faz entre a fazenda e a f�brica de suco de laranja. Um alqueire de terra produz 
em m�dia 250 toneladas de laranjas. Fa�a um programa que leia quantos caminh�es 
e quantos alqueires uma fazenda produtora de laranjas possui, calcule e apresente 
na tela quantas viagens de caminh�o ser�o necess�rias para transportar toda a 
colheita de laranjas
*/
int main(){
	int x;
	int y;
	int z;
	printf("digite quantos caminhoes a fazenda de laranja possui:");
	scanf("%d",&x);
	printf("digite quantos alqueires a fazenda de laranja possui:");
	scanf("%d",&y);
	z = ((y * 250) / (x * 18)) + 1; // +1 pois o resultado n�o � numero redondo, ex: 2,45, ent�o ser� necess�ria mais uma viagem para os 0,45, dando 3 viagens
	printf("serao necessarias %d viagens para levar toda a colheita da fazenda a fabrica de suco de laranja",z);
	return 0;
}
