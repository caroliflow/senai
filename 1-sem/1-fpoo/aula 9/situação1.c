#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL,"");
	
	int num;
	printf("digite o n�mero de doadores: ");
	scanf("%d", &num);
	
	char nome[num][15], sexo[num];
	int idade[num], dias[num], i;
	
	printf("\n");
	
	for(i = 0; i < num; i++){
		printf("digite o nome do %d� doador: ", i + 1);
		scanf("%s", &nome[i]);
		
		printf("digite a idade do doador: ");
		scanf("%d", &idade[i]);
		
		printf("digite F para mulher ou M para homem: ");
		scanf("%s", &sexo[i]);
		
		printf("digite o n�mero de dias desde a �ltima doa��o de sangue: ");
		scanf("%d", &dias[i]);
		
		printf("\n");
	}
	
	printf("\n");
	
	for(i = 0; i < num; i++){
		if(sexo[i] == 'F'){
			if(idade[i] >= 16 && idade[i] <= 69 && dias[i] > 90){
				printf("%s esta apta a doar!\n", nome[i]);
			}else{
				printf("%s n�o esta apta a doar!\n", nome[i]);
			}
		}else{
			if(idade[i] >= 16 && idade[i] <= 69 && dias[i] > 60){
				printf("%s esta apto a doar!\n", nome[i]);
			}else{
				printf("%s n�o esta apto a doar!\n", nome[i]);
			}
	}
	}
	
	return 0;
}
