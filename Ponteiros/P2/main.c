#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Mesma fun��o, so que usando endere�o de memoria

void cubeByReference(int *nPtr){
	
	*nPtr = *nPtr * *nPtr * *nPtr;//cubo de *nPtr
	
}

int main(int argc, char *argv[]) {
	
	int number = 5;//Inicializa o numero
	
	printf("O valor original do numero eh %d", number);
	
	//Passa o endere�o do numero a cubeByReference
	cubeByReference(&number);
	
	printf("\nO novo valor do numero eh: %d\n", number);
	
	
	return 0;
}

/*prototipo - Sem usar endere�o de memoria

int number = 5;//Inicializa o numero
	
	printf("O valor original do numero eh %d", number);
	
	//Passa numero por valor a cubeByValue
	number = cubeByValue(number);
	
	printf("\nO novo valor do numero eh: %d\n", number);
	
int cubeByValue(int n){
	return n * n * n; /* calcula cubo da vari�vel local n e retorna resultado 
}*/
