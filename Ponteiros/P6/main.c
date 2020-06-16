#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main(int argc, char *argv[]) {
	
	//EXEMPLO 01
	
	//Tentando modificar um ponteiro constante para dados não constantes
	int x = 10;
	int y;
	
	/* ptr é um ponteiro constante para um inteiro que pode ser modificado por
	   meio de ptr, mas ptr sempre aponta para o mesmo local da memória */
	int  * const ptr = &x;
	
	*ptr = 7; //permitido *ptr nao é constante
	printf("Valor do ponteiro: %d", *ptr);
	
	ptr = &y;//Vai ocorrer um erro, pois o endereço é constante
			 //e não pode ser modificadp, apenas o valor dos dados
			 
	
	//EXEMPLO 02
	
	
	
	//Tentando modificar um ponteiro constante para dados não constantes
	
	int a, b;
	
	/* point é um ponteiro constante para um inteiro constante
	   point sempre aponta o mesmo local; o inteiro nesse local 
	   nao pode ser modificado*/
	   
	const int point = &a;
	
	printf("\nEndereco de memoria: %d\n", point);
	
	/point = 10; /* erro: *point é const; não pode atribuir novo valor */
	point = &b; /* erro: point é const; não pode atribuir novo endereço */
	
	return 0;
}
