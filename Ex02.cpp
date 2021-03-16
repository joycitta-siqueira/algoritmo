/*
Leia dois valores inteiros, no caso para variáveis A e B. 
A seguir, calcule a soma entre elas e atribua à variável SOMA. 
A seguir escrever o valor desta variável.

	int %d 0u %i inteiro
	float %f real
	double %lf real
	char %c caractere
		 %s coleção de caracteres
	bool %b boleano 
	*/
#include<stdio.h>
int main(){
	int A, B, SOMA;
	printf("Digite a letra A:\n");
	scanf("%d", &A);//"código de formatação", código de endereçamento nome da variável 
	printf("Digite a letra B: ");
	scanf("%d", &B);
	SOMA = A + B; // = comando de atribuição "recebe" 
	printf("%d + %d =\n%d e", SOMA); // \n - quebra de linha
	return 0;
}
