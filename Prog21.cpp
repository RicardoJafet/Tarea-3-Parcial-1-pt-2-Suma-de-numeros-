/*Autor: Ricardo Jafet Granados Chable, Realizado: 23/02/2022
    programa numero 21 en C: Suma de serie numeros.
	*/
	
#include<stdio.h>

int main() {
	int n,num=1,s=0;
	printf("-------------------");
	printf("\nSuma de numeros");
	printf("\nPorfavor introduzca la cantidad de numeros a sumar: ");
	scanf("%d",&n);
	printf("\n-------------------");
	
	while(num <= n) {
		printf("\nNumero: %d",num);
		printf("\n___________________");
		s=s+num;
		num=num+1;
	}
	printf("\nLa suma es: %d",s);
	return 0;
}
	
