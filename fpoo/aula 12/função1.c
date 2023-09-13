#include <stdio.h>
#include <locale.h>

//fun��o que retorna a soma de dois primeiros numeros
int soma(int a, int b){
	return a + b;
}

//fun��o que retorna a m�dia de dois primeiros numeros
int media(int a, int b){
	return (a + b) / 2;
}

//procedimento que escreve uma frase 100 vezes
int procedimentoBart(){
	int i;
	for(i = 0; i < 100; i++){
		printf("nao vou atormentar a Lisa\n");
	}
}

//procedimento que escreve uma frase qualquer n vezes
int frases(char frase[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("%s\n", frase);
	}
}

//exerc�cio 1 - crie uma fun��o que calcule a m�dia de 3 notas
int ex1(int n1, int n2, int n3){
	return (n1 + n2 + n3) / 3;
}

//exerc�cio 2 - crie uma fun��o que calcule a m�dia de n notas
int ex2(int *vetor, int n){
	int i, soma = 0;
	for(i = 0; i < n; i++){
		soma += vetor[i];
	}
	return soma / n;	
}

//exerc�cio 3 - crie uma fun��o que receba num�ros qualquer e devolva a posi��o ou -1 se n�o for encontrado
int busca(int *vetor3, int posicao){
	int i, x = 0;
	for(i = 0; i < 100; i++){
		if(vetor3[i] == posicao){
			x = i;
			return x + 1;
		}
	}
	if(x == 0){
		x = -1;
	}
	return x;
	
}

int main(){
	setlocale(LC_ALL,"");
	
	int notas[] = {3, 8, 10};
	
	printf("1.\ta m�dia de 10, 20 e 30 � = %d", ex1(10, 20, 30));
	printf("\n\n");
	printf("2.\ta m�dia de n notas � = %d", ex2(notas, 3));
	printf("\n\n");
	printf("3.\ta posi��o no vetor � = %d", busca(notas, 8));
	

	return 0;
}
