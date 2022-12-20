#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>


// INSTRUÇÃO PARA UTILIZAÇÃO DE "FOR": na barra de ferramentas do dev c++ clique em Ferramentas, depois clique em Opções do Compilador , vai abrir uma janelinha,
// clique na aba Geração de Código, aonde diz Padrão da Linguagem (-std) selecione para ISO C99 e clique em Ok, agora seu código vai funcionar, e não vai aparecer mais essa mensagem de erro.


// ---------------------------------------
// Estruturação dos itens do nosso serviço.
struct produto
{
    int ProductCode;
    int QuantityProduct;
};

struct user_info
{
    char UserName[30];
};

struct client_info
{
    int client_code;
    int client_product_code;
};

struct produto VetorProduto[5];
struct user_info user;
struct client_info client;
// ---------------------------------------

// ---------------------------------------
// Cadastro do Produtos
void RegisterProduct()
{
    printf("\n+===================================+");
    printf("\n+       CADASTRO DOS PRODUTOS       +");
    printf("\n+===================================+");

    for (int i = 0; i < 5; i++)
    {
        int codigo;
        printf("\nInsira o código numérico do %dº produto: ", i + 1);
        scanf("%d", &codigo);
        VetorProduto[i].ProductCode = codigo;

        if (VetorProduto[i - 1].ProductCode == codigo)
        {
            printf("Este código de produto já foi inserido, por favor instancie outro...");
            i -= 1;
        }
    }
}
// ---------------------------------------

// ---------------------------------------
// Registro do estoque de produtos
void ProductQuantity()
{
    printf("\n+===================================+");
    printf("\n+        ESTOQUE DE PRODUTOS        +");
    printf("\n+===================================+");
    int quantidade;
    for (int i = 0; i < 5; i++)
    {

        printf("\nInsira o quantidade do %dº produto: ", i + 1);
        scanf("%d", &quantidade);
        if (quantidade < 0)
        {
            printf("Impossível adicionar valores negativos.");
            i -= 1;
        }
        else
        {
            VetorProduto[i].QuantityProduct = quantidade;
        }
    }
}
// ---------------------------------------

// ---------------------------------------
// Exibição do estoque de produtos
void ProductManager()
{
    for (int i = 0; i < 5; i++)
    {
        printf("O codigo dos produtos é: %d\n", VetorProduto[i].ProductCode);
        printf("A quantidade do %dº produto é: %d\n", VetorProduto[i].ProductCode, VetorProduto[i].QuantityProduct);
    }
}
// ---------------------------------------
// ---------------------------------------
// Pedido do Cliente
void UserRequest()
{
    int restart = 0;
    while (restart != 1)
    {
        int i = 0;
        int choice;
        printf("\n====================================");
        printf("\n      PEDIDO DO CLIENTE             ");
        printf("\n====================================");
        printf("\n-----------------------------------------------------");
        printf("\n    CADASTRO DO CÓDIGO DE IDENTIFICAÇÃO DO CLIENTE   ");
        printf("\n-----------------------------------------------------");
        printf("\n[1] - Cadastrar cliente\n[0] - Sair\n>> ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
        {
            int local_client_code;
            int local_product_code;
            printf("Insira o código numérico de identificação do cliente: ");
            scanf("%d", &local_client_code);
            client.client_code = local_client_code;
            printf("\n---------------------------------------------------------------------------");
            printf("\n             CADASTRO DO CÓDIGO DO PRODUTO PEDIDO PELO CLIENTE             ");
            printf("\n---------------------------------------------------------------------------");
            printf("\nInsira o código numérico do produto desejado pelo cliente: ");
            scanf("%d", &local_product_code);
            client.client_product_code = local_product_code;

            do
            {
                if (client.client_product_code != VetorProduto[i].ProductCode)
                {

                    i++;
                }
                else
                {
                    break;
                }
            } while (i <= 5);
            if (i >= 5)
            {
                printf("Produto não encontrado");
            }
            else
            {
                printf("Produto encontrado");
            }

            break;
        }
        case 0:
        {
            exit(0);
            break;
        }
        default:
        {
            printf("Entrada inválida");
            restart = 1;
            break;
        }
        }

        int quantity;
        int invalidInput;
        do
        {
            invalidInput = 0;
            printf("\n---------------------------------------------------------------------------");
            printf("\n          CADASTRO DA QUANTIDADE DE PRODUTOS PEDIDOS PELO CLIENTE          ");
            printf("\n---------------------------------------------------------------------------");
            printf("\nInsira a quantidade do produto #%d pedida pelo cliente: ", client.client_product_code);
            scanf("%d", &quantity);
            if (quantity <= 0)
            {
                printf("\nQuantidade de produtos requistados inválida...");
                invalidInput = 1;
            }
            if (quantity > VetorProduto[i].QuantityProduct)
            {
                printf("\nEstoque insuficiente...");
                invalidInput = 1;
            }
            invalidInput = 1;

        } while (invalidInput != 1);

        printf("\n====================================");
        printf("\n     PEDIDO ATENDIDO, OBRIGADO!     ");
        printf("\n====================================");
        VetorProduto[i].QuantityProduct -= quantity;
        printf("\n====================================");
        printf("\n        ESTOQUE ATUALIZADO          ");
        printf("\n====================================");
        ProductManager();
    }
}
// ---------------------------------------

// ---------------------------------------
// Cadastro do Colaborador
void RegisterUser()
{
    printf("\n+===================================+");
    printf("\n+     CADASTRO DO COLABORADOR       +");
    printf("\n+===================================+");
    printf("\nPor favor insira o nome de sua conta a seguir(max. 15 caracteres):\n");
    printf(">>  ");
    fflush(stdin);
    fgets(user.UserName, 15, stdin);
}
// ---------------------------------------

// ---------------------------------------
// Exibição do Menu
void ShowMenu()
{
    setlocale(LC_ALL, "Portuguese");
    printf("+====================================+");
    printf("\n+ Aplicativo de Gerenciamento Omega  + ");
    printf("\n=====================================+");
}
// ---------------------------------------

// ---------------------------------------
// Instacializador do Programa
int main()
{
    ShowMenu();
    RegisterUser();
    RegisterProduct();
    ProductQuantity();
    ProductManager();
    UserRequest();
}
// ---------------------------------------
