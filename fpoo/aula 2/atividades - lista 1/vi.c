#include <stdio.h>
/*
Sabendo-se que a velocidade de cruzeiro de um avi�o 747-300 � de 900 km/h, 
fa�a um programa que leia uma dist�ncia (km), calcule e apresente na tela, 
quanto tempo (horas) ser� necess�rio para um 747-300 sobrevoar a dist�ncia informada
*/
int main(){
	int x;
	int y;
	int z;
	printf("digite quantos quilometros faltam para o aviao 747-300 sobrevoar a area:");
	scanf("%d",&x);
	y = 900;
	z = x / y;
	printf("faltam %dh para o 747-300 sobrevoar a distancia informada",z);
	return 0;
}
