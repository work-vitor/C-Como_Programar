#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/* Tentando modificar dados por meio de um
 ponteiro não constante para dados constantes. */
 
 //exemplo fazendo sozinho
 
 void h(int *xPtr);//declara função
 
 /*Função que nao funciona pois tenta modificar
   dados constantes. Apenas usada para teste
 
 void h(int *xPtr){
	
	*xPtr = 100;//tentando mudar um dado constante
	
}*/
 
int main(int argc, char *argv[]) {
	
	int y = 10;
	
	printf("\n");
	h(&y);
	
	printf("\nModificado: %d", y);
	
	return 0;
}

//Função que funciona pois nao contem dados constante
void h(int *xPtr){
	
	*xPtr = 100;//tentando mudar um dado constante
	
}
