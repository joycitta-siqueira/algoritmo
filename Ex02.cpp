/*
Leia dois valores inteiros, no caso para vari�veis A e B. 
A seguir, calcule a soma entre elas e atribua � vari�vel SOMA. 
A seguir escrever o valor desta vari�vel.

	int %d 0u %i inteiro
	float %f real
	double %lf real
	char %c caractere
		 %s cole��o de caracteres
	bool %b boleano 
	*/
#include<stdio.h>
int main(){
	int A, B, SOMA;
	printf("Digite a letra A:\n");
	scanf("%d", &A);//"c�digo de formata��o", c�digo de endere�amento nome da vari�vel 
	printf("Digite a letra B: ");
	scanf("%d", &B);
	SOMA = A + B; // = comando de atribui��o "recebe" 
	printf("%d + %d =\n%d e", SOMA); // \n - quebra de linha
	return 0;
}
