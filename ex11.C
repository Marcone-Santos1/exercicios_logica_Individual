#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    /*Fazer um programa que lê valores para uma matriz do tipo
    "float" de 5 linhas por 3 colunas e imprime a diferença entre a média
    dos elementos das colunas pares e a média dos elementos das linhas ímpares.*/

    float mat[5][3];
    int i, j;
    float somaPar;
    float somaImpar;
    float diff;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\nDigite os valores da matriz: ");
            scanf("%f", &mat[i][j]);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\n%f\n", mat[i][j]);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j % 2 != 0)
            {
                somaPar += mat[i][j] / 5;
            }
            else if ((i + 1) % 2 != 0)
            {
                somaImpar += mat[i][j] / 9;
            }
        }
    }

    printf("\n A média dos elementos das colunas pares é: %f\n", somaPar);
    printf("\n A média dos elementos das linhas ímpares é: %f\n", somaImpar);

    diff = somaPar - somaImpar;
    printf("\n A diferença entre as duas médias é de: %f\n\n", diff);

    return 0;
}