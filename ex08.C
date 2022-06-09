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
    float vetor[5] = {3.0, 4.3, 5.6, 2.8, 7.9};
    float resultado;

    resultado = mediaVetor(vetor, 5);
    printf("A media dos vetores e de %.2f\n", resultado);
}