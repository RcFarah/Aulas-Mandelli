#include <stdio.h> 
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	double numero;
	double numero_quadrado, numero_cubo, numero_raizquadrada, numero_raizcubica;
	
	printf("Defina um numero maior que ZERO: ");
	scanf("%lf", &numero);
	
	while(numero <= 0){
		printf("Defina um numero maior que ZERO: ");
		scanf("%lf", &numero);
		if(numero <=0){
			printf("Favor, digite um numero MAIOR QUE ZERO!\n");
		}
	}
	
	numero_quadrado = pow(numero, 2);
	numero_cubo = pow(numero, 3);
	numero_raizquadrada = sqrt(numero);
	numero_raizcubica = cbrt(numero);
	
	printf("Quadrado: %.2lf\nCubo: %.2lf\nRaiz Quadrada: %.2lf\nRaiz Cúbica: %.2lf", numero_quadrado, numero_cubo, numero_raizquadrada, numero_raizcubica);

}
