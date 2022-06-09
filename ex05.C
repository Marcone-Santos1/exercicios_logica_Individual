#include <stdio.h>

int main(int argc, char const *argv[])
{

    // 5 - Fazer um programa em "C" que lê o preço de um produto e inflaciona esse preço em 10% se ele for menor que 100 e em 20% se ele for maior ou igual a 100.

    float valor;

    printf("Entre com o valor R$: ");
    scanf("%f", &valor);

    if (valor < 100)
    {
        printf("O valor inflacionado é de R$: %.2f", valor + (valor * 0.1));

    } else {

        printf("O valor inflacionado é de R$: %.2f", valor + (valor * 0.2));

    }
    
    printf("\n\n");
    

    return 0;
}
