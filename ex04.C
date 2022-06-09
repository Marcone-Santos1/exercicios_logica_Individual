#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){

	// Fazer um programa que imprime a tabela ASCII(código decimal código hexa, caracter) para os códigos de 0 a 127

	printf("Tabela ASCII:\n");

	for(int i = 0; i < 88; i++){

		printf("\n\nDecimal: %o ", i);
		printf("\nHexadecimal: %x", i);

		if(i > 32){

			printf("\nCaractere: %c", i); //Caracteres (começam a partir do código 32 da tabela).

		}
	}

	return 0;
}