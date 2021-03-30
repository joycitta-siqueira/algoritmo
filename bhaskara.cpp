//Entrada: a, b, c
//Saída: x' e x''
//Processamento: calculo
//SEQUENCIAL
//DECISÃO OU CONDICIONAL
#include<stdio.h>//biblioteca para entrada e saída de dados: printf e scanf
#include<math.h>//biblioteca matemática
int main(){//inicio do algoritmo: função main
	double a, b, c, x1, x2, delta; 
	printf("Digite o valor de a: ");
	scanf("lf", &a); //10
	printf("Digite o valor de b: ");
	scanf("%lf", &b); //20.1
	printf("Digite o valor de c: ");
	scanf("%lf", &c); //5.1
	printf("%lf", c);
    
    delta = pow(b,2) - 4*a*c; // 200,1
        10==0 (f)
        200,1 < 0 (f)
        f or f = f
    
    if (a == 0 or delta < 0)  //== (igual) != (diferente)  < (menor)   > (maior)   <= (menor igual)  >= (maior igual)
			printf("Impossivel calcular!\n");
		else {
			x1 = (-(b) + sqrt(delta) )/ (2*a); //
			x2 = (-(b) - sqrt(delta) )/ (2*a); //
			printf("X1 = %.2lf\tX2 = %.4lf\n", x1, x2);
		}
	
	
	
	return 0;//retorno da função
}//final do algoritmo
