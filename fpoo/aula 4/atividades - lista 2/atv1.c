#include <stdio.h>
/*
Desenvolva um programa que leia o pre�o de um produto e se o pre�o for maior do que 1000 reais aplique um desconto de 8%. Mostre o pre�o final.
*/
int main(){
	float a, b;
	printf("digite o preco do produto em R$: ");
	scanf("%f",&a);
	b = ((a * 8) / 100) + a;
	if(a < 1001){
		printf("infelizmente o produto nao tem desconto");
	}else{
		printf("com o desconto de 8 porcento o produto fica: %.2f R$",b);
	}		
	return 0;
}

