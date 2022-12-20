#include <stdio.h>
#include <locale.h>
#include <unistd.h>
#include <stdlib.h>

int maquinasFichasVirtuais() {
    
    setlocale(LC_ALL, "portuguese");

    int ficha_5, ficha_10, ficha_20, ficha_50, ficha_100, qtdFicha100, qtdFicha50, qtdFicha20, qtdFicha10, qtdFicha5, valor_deposito;
    ficha_5 = 5;
    ficha_10 = 10;
    ficha_20 = 20;
    ficha_50 = 50;
    ficha_100 = 100;

    float total, ficha;



    printf("---------------\n");
    printf("CASSINO LOURUS JOSÉUS\n");
    printf("---------------\n");
    printf("\nFichas disponíveis na máquina:\n\n5\n10\n20\n50\n100\n\n\n");
    printf("Valor do saque: R$");
    scanf("%d", &valor_deposito);

    if(valor_deposito >= 5){
        qtdFicha100 = valor_deposito / ficha_100;
        valor_deposito = valor_deposito % ficha_100;
        
        qtdFicha50 = valor_deposito / ficha_50;
        valor_deposito = valor_deposito % ficha_50;
        
        qtdFicha20 = valor_deposito / ficha_20;
        valor_deposito = valor_deposito % ficha_20;
        
        qtdFicha10 = valor_deposito / ficha_10;
        valor_deposito = valor_deposito % ficha_10;
        
        qtdFicha5 = valor_deposito / ficha_5;
    }
    
    printf("Fichas de 100: %d\nFichas de 50: %d\nFichas de 20: %d\nFichas de 10: %d\nFichas de 5: %d", qtdFicha100, qtdFicha50, qtdFicha20, qtdFicha10, qtdFicha5);
    
    return 0;
}