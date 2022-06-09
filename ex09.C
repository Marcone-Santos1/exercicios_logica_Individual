// 9 - Fazer uma rotina que recebe um array do tipo double e o número de valores que devem ser solicitados ao usuário e devolve o array preenchido com os valores digitados.
#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    double vet[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Entre com o %dº valor: ", i);
        scanf("%lf", &vet[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("\n%lf", vet[i]);
    }

    printf("\n");

    return 0;
}
