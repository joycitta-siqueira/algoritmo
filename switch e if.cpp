/*Fa�a um algoritmo que leia o n�mero de DDD e 
informe a qual cidade pertence, considerando s� os seguintes valores:
61 - Bras�lia
71 - Salvador
11 - S�o Paulo
21 - Rio de Janeiro
32 - Juiz de Fora
19 - Campinas
27 - Vit�ria
31 - Belo Horizonte
qualquer outro - uma cidade no Brasil sem identifica��o
*/

//switch case -> estrutura condicional //n�o se aplica a float, char (cadeia de caracteres)

#include<stdio.h>
int main(){
	int opcao, ddd;
	char nome[20];
	
	printf("Digite a opcao desejada:/n1. Ver cidade do DDD/n2. Ver o nome/n");
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1:
			printf("Digite o ddd");
			scanf("%d", &ddd);
			printf("DDD: %d", ddd);
			break;
		case 2:
			printf("Digite o nome");
			scanf("%s", &nome);
			printf("Nome: %s", nome);
			break;
		default: printf("Opcao invalida!");
		
	}
	
	if (opcao == 1) {
		printf("Digite o ddd");
		scanf("%d", &ddd);
	    printf("DDD: %d", ddd);
	} else if (opcao == 2){
		printf("Digite o nome");
		scanf("%s", &nome);
		printf("Nome: %s", nome);	
	} else printf("invalido!");
	
	
	
	
