#include <stdio.h>
/*
Desenvolva um programa que leia o sal�rio de um funcion�rio e o n�mero de filhos. Se o sal�rio for menor do que 2000 o funcion�rio receber� 
um sal�rio fam�lia equivalente a 45 reais por filho. Apresente o sal�rio final
*/
int main(){
	float a, b, c;
	printf("digite o salario do funcionario em R$: ");
	scanf("%f",&a);
	printf("digite o numero de filhos do funcionario: ");
	scanf("%f",&b);
	c = (45 * b) + a;
	if(a < 2000){
		printf("o salario final do funcionario sera de: %.2f R$",c);
	}else{
		printf("o salario continuara sem mudanca: %.2f R$",a);
	}
	return 0;
}
