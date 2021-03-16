/* 
Resolu��o comentada do exer�cio 1002, das atividades do URI. 

Este comando, torna blocos de linhas em coment�rios.

\\ Este comando, transforma apenas a linha em coment�rio. 

Lembrem-se do ; no final de cada comando, dentro do main. 

*/ 

/* Coment�rio de bloco */

#include <stdio.h> //biblioteca dos comandos de entrada e sa�da (printf() e scanf()).
#include <stdlib.h> //biblioteca respons�vel pelo comando system();
#include <math.h> //biblioteca dos comandos matem�ticos, neste caso, pow.
#include <locale.h> //biblioteca para uso da acentua��o dentro do printf.
#define PI 3.14159 //declara��o da constante PI. Por conven��o, utiliza-se identificadores com letras maiusculas, para facil localiza��o das constantes no fonte. 

int main() { /* N�o h� diferen�as entre a declara��o "main()" e "int main()". 
            Em todo programa C deve existir uma �nica fun��o main(). 
			A }  marca o fim do programa. */
	
	setlocale(LC_ALL, "Portuguese"); //habilita a acentua��o para o portugu�s e est� ligada a biblioteca <locale.h>
	
	double raio, area; /*declara��o de vari�veis. 
	O exerc�cio especifica o uso do tipo double, que se assemelha ao tipo float, por�m, permite maior precis�o num�rica, visto alocar maior espa�o na mem�ria. 
	Em c, o "_" pode ser utilizado como identificador. */
	
	printf("Digite o valor do raio:"); //Exibe o texto na tela. No URI, por n�o solicitar informa��es ao usu�rio, o printf � dispensado. 
	
	scanf("%lf", &raio); /*Salva o valor digitado na tela dentro da vari�vel especificada. 
	O c�digo de formata��o para vari�vel double, ponto flutuante longo, � %lf.
	A var�avel deve ser precedida do operador de endere�o & */
	
    area = pow(raio,2) * PI; 
	/* Realiza o c�culo da �rea utilizando a fun��o pow, as vari�veis raio e area, a constante PI e o substituto do <-, =.
	Existem outras formas de se realizar este calculo:
	
	sem a fun��o pow: area = raio * raio * PI
	sem a constante: area = raio * raio * 3.14159 ou pow(raio,2) * 3.14159
	
	*/
    
    
	printf("A=%.4lf\n", area); 
	/*Exibe o texto na tela e neste caso, o valor da var�avel area. 
	Como trabalhamos com n�meros decimais � poss�vel definir quantos a quantidade de n�meros ap�s a v�rgula, para isso, acrescente ao c�digo de formata��o: %.4lf, por exemplo.  
	O valor da var�avel ser� apresentado no local onde se encontra o c�digo de formata��o. 
	\n possibilita a quebra de linha e � obrigat�ria nos algoritmos enviados para o URI.
	� poss�vel n�o utilizar a vari�vel area realizando a soma diretamente no printf:  	printf("A=%.4lf\n", pow(raio,2) * PI); .	
	*/
	
	system("pause"); 
	//Solicita ao computador uma pausa at� que alguma tecla seja pressionada no teclado. Em nosso caso, desnecess�rio, por�m, n�o representar� erro de compila��o. 
	//Est� vinculada a biblioteca <stdlib.h>, ou seja, se eu retirar esta linha, poderei retirar tamb�m a biblioteca.

    return 0; /*Respons�vel por: 1. apresentar se o algoritmo compilou com sucesso. 2. Seu resultado poder� ser utilizado em outras fun��es. Em nosso caso, 
    desnecess�rio, por�m, n�o representar� erro de compila��o. */


} //Finaliza o programa.
