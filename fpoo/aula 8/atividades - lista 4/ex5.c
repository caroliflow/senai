#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
Desenvolva um programa que leia o nome de 5 cidades, seu respectivo n�mero total de eleitores e o total de votos 
apurados na �ltima elei��o. O programa dever� calcular e exibir a porcentagem de participa��o dos eleitores na 
elei��o para 5 cidades
*/

int main(){
	setlocale(LC_ALL,"");
	
	char cidade[5][15];
	float eleitores[5], votos[5], participacao[5];
	int i;
	
	for(i = 0; i < 5; i++){
		printf("digite o nome da %d� cidade: ", i + 1);
		gets(cidade[i]);
	}
	
	printf("\n");
	
	for(i = 0; i < 5; i++){
		printf("digite o n�mero total de eletores de %s: ", cidade[i]);
		scanf("%f", &eleitores[i]);
		
		printf("digite o n�mero total de votos apurados na �ltima elei��o de %s: ", cidade[i]);
		scanf("%f", &votos[i]);
		
		printf("\n");
	}
	
	for(i = 0; i < 5; i++){
		participacao[i] = (votos[i] * 100) / eleitores[i];
		
		printf("porcentagem de participa��o dos eleitores na elei��o de %s: %.2f\n", cidade[i], participacao[i]);
	}
	
	
	return 0;
}
