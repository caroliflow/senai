#include <stdio.h>
/*
4 Desenvolva um programa que leia os valores de tr�s lados de um tri�ngulo (a, b e c) e se os tr�s lados forem diferentes escreva ESCALENO 
se os tr�s lados forem iguais EQUIL�TERO e se apenas dois lados forem iguais IS�SCELES
*/
int main(){
	float a, b, c;
	printf("digite os valores dos 3 lados do triangulo com espaco: ");
	scanf("%f %f %f",&a ,&b ,&c);
	if(a == b && b == c && c == a){
		printf("EQUILATERO");
	}else if(a != b && b != c && c != a){
		printf("ESCALENO");
	}else{
		printf("ISOSCELES");
	}
	return 0;
}
