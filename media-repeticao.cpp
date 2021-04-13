#include<stdio.h>
int main(){
	float numero, soma, media;
	int contador;
	soma = 0;
	for(contador=1; contador<=5; contador++){
		printf("Digite o numero %d:\n", contador);
		scanf("%f", &numero);
		soma = soma + numero;
	}	
		media = soma/50; 
		printf("media: %f\n", media);
		
	
	
	return 0;
}
