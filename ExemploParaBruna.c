#include<stdio.h>
#include<stdlib.h>

void somaPonteiro(int valor1,int valor2, int *lugarPraArmazenar)
{
	*lugarPraArmazenar = valor1+valor2;
}
// Soma dois valores do modo normal
int somaComum(int batata,int dirceu)
{
	return batata+dirceu;
}
// void , pois eu não vou usar nenhum retorno da main
void main()
{
	int a=10;
	int b=20;
	//Aqui eu atribui o valor do retorno da função a uma variavel
	int c = somaComum(a,b);
	printf("\nSoma de a,b = %d",c);
	a = 30;
	b = 50;
	somaPonteiro(a,b,&c);
	printf("\nValor de c:%d\n",c);
}
