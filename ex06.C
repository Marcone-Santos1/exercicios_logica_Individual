#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    // 6 - Fazer um programa em "C" que lê 10 valores e imprime o maior e o menor valores lidos.

    int vetor[10];

    int num1 = 999;
    int num2 = -999;

    for (int i = 1; i <= 10; i++)
    {

        printf("Entre com o %dº valor: ", i);
        scanf("%d", &vetor[i]);
        
    }

    for (int i = 0; i < 10; i++)
    {
		if(num1 > vetor[i]){
			num1 = vetor[i];
		}
		if(num2 < vetor[i]){
			num2 = vetor[i];
		}
    }
    
    printf("\nO menor valor é: %d", num1);
	printf("\nO maior valor é: %d", num2);

    return 0;
}
