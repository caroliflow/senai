#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
Desenvolva um programa que leia o nome e o sal�rio de 5 pessoas, depois leia um valor de �ndice percentual (%) 
de reajuste do sal�rio. Calcule e apresente na tela, o valor do novo sal�rio e o nome das 5 pessoas
*/

int main(){
	setlocale(LC_ALL,"");
	
	char nome[5][15];
	float sal[5], reajuste, novosal[5];
	int i;
	
	for(i = 0; i < 5; i++){
		printf("digite o nome da %d� pessoa: ", i + 1);
		gets(nome[i]);
	}
	
	printf("\n");
	
	for(i = 0; i < 5; i++){
		printf("digite o sal�rio de %s: ",nome[i]);
		scanf("%f", &sal[i]);
	}
	
	printf("\n");
	
	printf("digite a porcentagem do reajuste sal�rial: ");
	scanf("%f", &reajuste);
	
	novosal[0] = ((sal[0] / 100) * reajuste) + sal[0];
	novosal[1] = ((sal[1] / 100) * reajuste) + sal[1];
	novosal[2] = ((sal[2] / 100) * reajuste) + sal[2];
	novosal[3] = ((sal[3] / 100) * reajuste) + sal[3];
	novosal[4] = ((sal[4] / 100) * reajuste) + sal[4];
	
	printf("\n");
	
	printf("%s tem o novo sal�rio de: %.2f\n",nome[0], novosal[0]);
	printf("%s tem o novo sal�rio de: %.2f\n",nome[1], novosal[1]);
	printf("%s tem o novo sal�rio de: %.2f\n",nome[2], novosal[2]);
	printf("%s tem o novo sal�rio de: %.2f\n",nome[3], novosal[3]);
	printf("%s tem o novo sal�rio de: %.2f\n",nome[4], novosal[4]);
	
	return 0;
}
