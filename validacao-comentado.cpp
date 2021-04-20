/*Solicite do usuário o nome (validando que este deve ter mais de 2 caracteres), 
a idade (validando que a idade válida é entre 0 e 120),
a altura (validando entre 0 e 2m) e ao final, imprima os dados validados. 
Além disso, o usuário poderá digitar os dados de quantas pessoas julgar necessário.
*/

#include<stdio.h> //biblioteca para printf e scanf 
#include<string.h> //biblioteca para strlen e strcmp: http://linguagemc.com.br/a-biblioteca-string-h/
#include<ctype.h> //biblioteca para o uso do toupper e tolower: http://linguagemc.com.br/ctype-h-toupper-tolower-isalpha-isdigit-em-c/
int main(){
	    char nome[20], aux, aux2[3];
	    int idade, cont;
	    float altura;

	do{ //primeiro do-while - responsável por permitir ao usuário digitar os dados de várias pessoas
		do{ //o primeiro dado é o nome, que deverá ser validado, não pode ter menos de 2 caracteres
			printf("Informe o nome: "); //apresenta texto na tela
			fgets(nome, 20, stdin); //recebe string com espaço em branco. fgtes("nome da variável", "tamanho da variável", stdin)
			fflush(stdin); //limpa o buffer de memória
			if (strlen(nome) <= 2)//strlen: verifica o tamanho da string, se for menor ou igual a 2, apresenta o erro
				printf("Nome muito curto!\n");
			else printf("Sucesso\n"); //caso contrário, mostra a msg de sucesso e finaliza o while
		}while(strlen(nome) <= 2); //repetição quando o nome for inválido
		
		do{
			printf("\nInforme a idade: ");
			scanf("%d", &idade);
			fflush(stdin); 
			if (idade <= 0 || idade > 120)
				printf("Idade invalida, entre com a idade de 1 a 120 anos\n");
			else printf("Sucesso!\n");
		}while(idade <= 0 || idade > 120);
		
		do {
			printf("\nInforme a altura: ");
			scanf("%f", &altura);
			fflush(stdin); 
			if (altura <= 0.0 || altura > 2.00)
				printf("Altura invalida!\nEntre com uma altura de 0.1 a 2.00\n");
			else printf("Sucesso!\n");
		}while(altura <= 0.0 || altura > 2.00);
		
		/*
		//EXEMPLO USANDO COMPARAÇÃO DE STRING
		do{
			printf("\nDeseja realizar outra validacao ?[SIM|NAO]");
			scanf("%s", &aux2); //salva o aux2 na variável, e por ser uma coleção de char, trata-se de uma string e por isso, o código de formatação é o %s
			fflush(stdin);
			aux = toupper(aux); //Converte o caracter em maiúsculo
			if(strcmp(aux2, "SIM")==0 && strcmp(aux2, "NAO")==0) // compara string
				printf("\nOpcao invalida!");
		}while(strcmp(aux2, "SIM")==0 && strcmp(aux2, "NAO")==0);
		*/
		/*
		//EXEMPLO SEM TOUPPER OU TOLOWER
		do{
			printf("\nDeseja realizar outra validacao ?[S|N]");
			scanf("%c", &aux);
			fflush(stdin);
			if(aux != 's' && aux != 'S' && aux != 'N' && aux != 'n')
				printf("\nOpcao invalida!");
		}while(aux != 's' && aux != 'S' && aux != 'N' && aux != 'n');
		
		*/

		printf("\nImpressão dos dados validados!\n");
		printf("Nome: %s\n", nome);
		printf("Idade: %d anos\n", idade);
		printf("Altura: %.2f m\n", altura);
	    printf("-----------------------------------\n");
		
		do{
			printf("\nDeseja realizar outra validacao ?[s|n]\n");
			scanf("%c", &aux);
			fflush(stdin);
			aux = tolower(aux); //Converte o caractere em minúsculo
			if(aux != 's' && aux != 'n')
				printf("\nOpcao invalida!");
		}while(aux != 's' && aux != 'n');
		
	}while(aux == 's'); // }while(strcmp(aux2, "SIM")==0);
	
	
		return 0;
}	
