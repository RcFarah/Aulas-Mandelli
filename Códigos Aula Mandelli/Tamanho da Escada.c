#include <stdio.h>
#include <math.h>

int main()
{
	const float pi = 3.14159;
	float graus, radiano, altura_parede, tamanho_escada;
	printf("Qual o angulo que a escada faz com a parede? ");
	scanf("%f", &graus);
	radiano = pi * graus/180;
	
	printf("Digite a altura da parede (em metros): ");
	scanf("%f", &altura_parede);
	
	tamanho_escada = altura_parede / sin(radiano);
	printf("O tamanho da escada e: %.2f m", tamanho_escada);
	
}
