#include <stdio.h>
/*
Desenvolva um programa que leia o nome e o sal�rio de uma pessoa, depois leia o valor do 
�ndice percentual (%) de reajuste do sal�rio. Calcule e apresente na tela, o valor 
do novo sal�rio e o nome da pessoa
*/
int main(){
	char x[10];
	int y;
	int z;
	int a;
	int b;
	//entrada
	printf("digite o seu nome:");
	scanf("%s",&x);
	printf("digite o seu salario:");
	scanf("%d",&y);
	printf("digite o valor do indice porcentual de reajuste de salario:");
	scanf("%d",&z);
	//processamneto
	a = (z * y) / 100;
	b = a + y;
	//saida
	printf("parabens %s seu salario agora esta no valor de: %d",x,b);
	return 0;
}
