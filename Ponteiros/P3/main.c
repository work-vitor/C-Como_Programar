#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Convertendo uma string em maiúsculas usando um ponteiro não constante para dados não constantes

void convertToUppercase( char *sPtr ); /* protótipo */

int main(int argc, char *argv[]) {
	
	
	char string[] = "caractere e R$35.98";//inicializa array char
	
	printf("A string antes da conversao eh: %s", string);
	
	convertToUppercase( string );
	printf("\nA string apos a conversao eh: %s", string);
	
	return 0;
}

void convertToUppercase(char *sPtr){
	
	while(*sPtr != '\0'){
		
		if(islower(*sPtr)){//caractere atual nao é '\n0' = "final da string"
			
			*sPtr = toupper(*sPtr);//converte em maiusculas
			
		}
		
		++sPtr;//desloca sPtr para o cacter seguinte
		
	}
	
}
