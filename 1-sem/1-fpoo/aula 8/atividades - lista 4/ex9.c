#include <stdio.h>
#include <locale.h>

/*
Crie um vetor de tamanho 10, permita que o usu�rio o preencha, como sa�da informe: A soma e m�dia dos pares; 
A soma e m�dia dos impares; O total de n�meros pares; O total de n�meros impares
*/

int main(){
	setlocale(LC_ALL,"");
	
	int vetor[10], i, somapar, mediapar, totalpar = 0, somaimpar, mediaimpar, totalimpar = 0;
	
	for(i = 0; i < 10; i++){
		printf("digite o %d� n�mero do vetor: ", i + 1);
		scanf("%d", &vetor[i]);
	}
	
	printf("\n");
	
	for(i = 0; i < 10; i++){
		if(vetor[i] % 2 == 0){
			somapar += vetor[i];
			totalpar++;
		}else{
			somaimpar += vetor[i];
			totalimpar++;
		}
	}
	
	mediapar = somapar / totalpar;
	mediaimpar = somaimpar / totalimpar;
	
	printf("soma dos pares: %d\n", somapar);
	printf("m�dia dos pares: %d\n", mediapar);
	printf("total de pares %d\n", totalpar);
	printf("soma dos impares: %d\n", somaimpar);
	printf("m�dia dos impares: %d\n", mediaimpar);
	printf("total de impares %d\n", totalimpar);
	
	return 0;
}
