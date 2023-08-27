#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
Desenvolva um programa que leia o nome e o pre�o de 10 mercadorias, depois leia o valor do �ndice percentual (%) 
de desconto no pre�o das mercadorias. Calcule e apresente na tela, o nome, o pre�o original, o valor do desconto 
e pre�o final (com o desconto) de cada mercadoria. Obs: � apenas uma porcentagem para todas as 10 mercadorias
*/

int main(){
	setlocale(LC_ALL,"");
	
	char nome[10][15];
	float preco[10], desconto, valordes[10], precofinal[10];
	int i;
	
	for(i = 0; i < 10; i++){
		printf("digite o nome da %d� mercadoria: ", i + 1);
		gets(nome[i]);
	}
	
	printf("\n");
	
	for(i = 0; i < 10; i++){
		printf("digite o pre�o de %s: ", nome[i]);
		scanf("%f", &preco[i]);
	}
	
	printf("\n");
	
	printf("digite a porcentagem do desconto das mercadorias: ");
	scanf("%f", &desconto);
	
	for(i = 0; i < 10; i++){
		valordes[i] = (preco[i] / 100) * desconto;
		
		precofinal[i] = preco[i] - valordes[i];
	}
	
	printf("\n");
	
	for(i = 0; i < 10; i++){
		printf("a mercadoria %s que tinha o pre�o de %.2f com o desconto de %.2f ficou: %.2f\n", nome[i], preco[i], valordes[i], precofinal[i]);
	}
	
	return 0;
}
