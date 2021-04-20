/*Solicite do usu�rio o nome (validando que este deve ter mais de 2 caracteres), 
a idade (validando que a idade v�lida � entre 0 e 120),
a altura (validando entre 0 e 2m) e ao final, imprima os dados validados. 
Al�m disso, o usu�rio poder� digitar os dados de quantas pessoas julgar necess�rio.
*/

#include<stdio.h> //biblioteca para printf e scanf 
#include<string.h> //biblioteca para strlen e strcmp: http://linguagemc.com.br/a-biblioteca-string-h/
#include<ctype.h> //biblioteca para o uso do toupper e tolower: http://linguagemc.com.br/ctype-h-toupper-tolower-isalpha-isdigit-em-c/
int main(){
	    char nome[20], aux, aux2[3];
	    int idade, cont;
	    float altura;

	do{ //primeiro do-while - respons�vel por permitir ao usu�rio digitar os dados de v�rias pessoas
		do{ //o primeiro dado � o nome, que dever� ser validado, n�o pode ter menos de 2 caracteres
			printf("Informe o nome: "); //apresenta texto na tela
			fgets(nome, 20, stdin); //recebe string com espa�o em branco. fgtes("nome da vari�vel", "tamanho da vari�vel", stdin)
			fflush(stdin); //limpa o buffer de mem�ria
			if (strlen(nome) <= 2)//strlen: verifica o tamanho da string, se for menor ou igual a 2, apresenta o erro
				printf("Nome muito curto!\n");
			else printf("Sucesso\n"); //caso contr�rio, mostra a msg de sucesso e finaliza o while
		}while(strlen(nome) <= 2); //repeti��o quando o nome for inv�lido
		
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
		//EXEMPLO USANDO COMPARA��O DE STRING
		do{
			printf("\nDeseja realizar outra validacao ?[SIM|NAO]");
			scanf("%s", &aux2); //salva o aux2 na vari�vel, e por ser uma cole��o de char, trata-se de uma string e por isso, o c�digo de formata��o � o %s
			fflush(stdin);
			aux = toupper(aux); //Converte o caracter em mai�sculo
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

		printf("\nImpress�o dos dados validados!\n");
		printf("Nome: %s\n", nome);
		printf("Idade: %d anos\n", idade);
		printf("Altura: %.2f m\n", altura);
	    printf("-----------------------------------\n");
		
		do{
			printf("\nDeseja realizar outra validacao ?[s|n]\n");
			scanf("%c", &aux);
			fflush(stdin);
			aux = tolower(aux); //Converte o caractere em min�sculo
			if(aux != 's' && aux != 'n')
				printf("\nOpcao invalida!");
		}while(aux != 's' && aux != 'n');
		
	}while(aux == 's'); // }while(strcmp(aux2, "SIM")==0);
	
	
		return 0;
}	
