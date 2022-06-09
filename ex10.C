// 10 - Fazer um programa em "C" que lê um conjunto de 10 valores inteiros e verifica se algum dos valores é igual a média dos mesmos.

#include <stdio.h>

float mediaVetor(float vet[], int tam) {

    float media, soma = 0;
    int i;

    for(i = 0; i < tam; i++){
        soma += vet[i];
    }

    media = soma / tam;

    return media;
}

int main(){

    float vetor[10];
    
    for (int i = 0; i < 10; i++)
    {
        printf("Entre com o %iº valor:", i);
        scanf("%f", &vetor[i]);
    }
    
    printf("\nA média dos valores é: %f\n", mediaVetor(vetor, 10));

    for(int i = 0; i < 10; i++){

		if(mediaVetor(vetor, 10) == vetor[i]){

			printf("\nA média é igual ao valor: %d do vetor\n", vetor[i]);
		}
	}

    printf("\n\n");

}