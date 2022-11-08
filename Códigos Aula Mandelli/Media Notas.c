#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	float nota1, nota2, nota3, nota4, media_final;
	printf("Digite qual a primeira nota: ");
	scanf("%f", &nota1);
	printf("Digite o valor da segunda nota: ");
	scanf("%f", &nota2);
	printf("Digite o valor da terceira nota: ");
	scanf("%f", &nota3);
	printf("Digite o valor da quarta nota: ");
	scanf("%f", &nota4);
	
	media_final = (nota1 + nota2 + nota3 + nota4) / 4;
	
	if(media_final >= 7){
		printf("Aluno APROVADO\n Média Final: %.2f", media_final);
	}
	else{
		printf("Aluno REPROVADO\n Média Final: %.2f", media_final);
	}
}
