#include <stdio.h>
#include <locale.h>

int main(){
	
	float nota1, nota2, nota3, media, nota_restante;
	
	setlocale(LC_ALL, "portuguese");
	printf("Digite qual a primeira nota: ");
	scanf("%f", &nota1);
	printf("Digite o valor da segunda nota: ");
	scanf("%f", &nota2);
	printf("Digite o valor da terceira nota: ");
	scanf("%f", &nota3);

	
	media = (nota1 + nota2 + nota3) / 3;
	nota_restante = 7 - media;
	
	if(media >= 0 && media < 3){
		printf("ALUNO REPROVADO\nMédia: %f", media);
	}
	
	if(media >= 3 && media < 7){
		printf("FAZER EXAME\nMédia: %f\nNota necessária: %f", media, nota_restante);
	}
	
	if(media >= 7 && media <= 10){
		printf("ALUNO APROVADO\nMédia: %f", media);
	}
	return 0;
}
