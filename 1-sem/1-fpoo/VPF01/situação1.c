#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	float nota1, nota2, media;
	
	printf("digite as duas notas da diciplina: ");
	scanf("%f %f", &nota1, &nota2);
	
	media = (nota1 + nota2) / 2;
	
	printf("a m�dia �: %.2f\n", media);
	
	if(media >= 6){
		printf("voce est� aprovado");
	}else{
		printf("voce foi reprovado");
	}
	
	return 0;
}
