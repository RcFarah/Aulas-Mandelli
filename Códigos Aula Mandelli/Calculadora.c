#include <stdio.h>
#include <math.h>
#include <locale.h>

int Calculadora() {
   
   setlocale(LC_ALL, "portuguese");
   int opcao, repetir;
   float num1, num2, resultado;
  
    do {
  
    printf("\n\n************************************");
    printf("\n*   Escolha uma operacao logica:   *\n");
    printf("*   [1] Soma                       *\n");
    printf("*   [2] Subtração                  *\n");
    printf("*   [3] Multiplicação              *\n");
    printf("*   [4] Divisão                    *\n");
    printf("*   [5] Potenciação                *\n");
    printf("*   [6] Finalizar                  *\n");
    printf("************************************\n\n");
   scanf("%d", &opcao);
   
   switch(opcao)
   {
       case 1:
            printf("Digite o 1º valor da soma: ");
            scanf("%f", &num1);
            printf("Digite o 2º valor da soma: ");
            scanf("%f", &num2);
            
            resultado = num1 + num2;
            
            printf("O Resultado é: %.3f\n", resultado);
            break;
        case 2:
            printf("Digite o 1º valor da Subtração: ");
            scanf("%f", &num1);
            printf("Digite o 2º valor da Subtração: ");
            scanf("%f", &num2);
            
            resultado = num1 - num2;
            
            printf("O Resultado é: %.3f\n", resultado);
            break;
        case 3:
            printf("Digite o 1º valor da Multiplicação: ");
            scanf("%f", &num1);
            printf("Digite o 2º valor da Multiplicação: ");
            scanf("%f", &num2);
            
            resultado = num1 * num2;
            
            printf("O Resultado é: %.3f\n", resultado);
            break;
        case 4:
            printf("Digite o 1º valor da Divisão: ");
            scanf("%f", &num1);
            printf("Digite o 2º valor da Divisão: ");
            scanf("%f", &num2);
            
            resultado = num1 / num2;
            
            printf("O Resultado é: %.3f\n", resultado);
            break;
        case 5:
            printf("Digite o 1º valor da Potênciação: ");
            scanf("%f", &num1);
            printf("Digite o 2º valor da Potênciação: ");
            scanf("%f", &num2);
            
            resultado = pow(num1, num2);
            
            printf("O Resultado é: %.3f\n", resultado);
            break;
        case 6:
            printf("\n\nOPERAÇÃO FINALIZADA! \nOBRIGADO POR USAR NOSSO PROGRAMA!");
            return 0;
            break;
        default:
            printf("Erro, Operação inválida.");
            break;
   }

    printf("\n\nDeseja fazer outra operação?\n");
    printf("1- Sim \n");
    printf("2- Não \n");
    scanf("%d", &repetir);
    
    } while(repetir == 1);
    printf("\n\nOPERAÇÃO FINALIZADA! \nOBRIGADO POR USAR NOSSO PROGRAMA!");
    
    return 0;
}
