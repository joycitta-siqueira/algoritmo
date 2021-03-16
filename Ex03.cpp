/*
Leia 3 valores, no caso, vari�veis A, B e C, que s�o as tr�s notas de 
um aluno. A seguir, calcule a m�dia do aluno, sabendo que a nota A 
tem peso 2, a nota B tem peso 3 e a nota C tem peso 5. Considere 
que cada nota pode ir de 0 at� 10.0, sempre com uma casa decimal.
*/

#include<stdio.h>
int main(){
	double A, B, C, MEDIA; // double %lf - real - dupla precis�o
	printf("Digite a nota A: ");
	scanf("%lf", &A);
	printf("Digite a nota B: ");
	scanf("%lf", &B);
	printf("Digite a nota C: ");
	scanf("%lf", &C);
	MEDIA = (A*2+B*3+C*5)/10;
	printf("\n\nPrintf Separado\n\n");
	printf("Nota A: %lf\n", A);
	printf("Nota B: %.2lf\n", B); //formata��o do valor: .(quantidade de casas ap�s a v�rgula) 
	printf("Nota C: %.3lf\n", C);
	printf("Media: %.4lf\n", MEDIA);
	printf("\n\nPrintf Junto\n\n");
	printf("Nota A: %.1lf\nNota B: %.2lf\nNota C: %.3lf\nMedia: %.4lf\n", A, B, C, MEDIA);
	return 0;
}
