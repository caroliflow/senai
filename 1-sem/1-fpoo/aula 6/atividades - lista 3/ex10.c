#include <stdio.h>
/*
Escreva um programa que leia 10 n�meros inteiros e exiba na tela ao final, o maior n�mero que foi digitado pelo usu�rio
*/
int main(){
	int i, nu, maior;
	for(i = 1; i <= 10; i++){
		printf("digite um numero inteiro: ");
		scanf("%d", &nu);
		if(nu > maior){
			maior = nu;
		}
	}
	printf("o maior numero digitado foi: %d",maior);
	
	return 0;
}
