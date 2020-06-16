#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*Imprimindo uma string um caractere por vez usando
um ponteiro não constante para dados constantes */

void printChar(const char *sPtr);

int main(int argc, char *argv[]) {
	
	//inicializa array de char
	char string[] = "Vou ser melhor que aqueles filhos da puta";
	
	printf("A string eh:\n");
	printChar(string);
	printf("\n");
	
	return 0;
}

/* sPtr nao pode modificar o caractere ao qual aponta
ou seja, sPtr é um ponteiro "somente de leitura" */

void printChar(const char *sPtr)
{
	
	//loop pela string inteira
	for(; *sPtr != '\0'; sPtr++){//sem inicialização
		
		printf("%c", *sPtr);
		
	}
	
	
}
