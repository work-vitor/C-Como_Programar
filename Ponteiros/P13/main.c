#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Usando notações de subscrito e ponteiro com arrays

int main(int argc, char *argv[]) {
	
	int b[] = {10, 20, 30, 40};//Inicializa array b
	int *bPtr = b;//define bPtr para apontar para array b
	int i;//contador
	int offset;//contador
	
	
	//Montra array b usando notação de subscrito de array
	printf("Array b impresso com: Notacao de subscrito de array:\n\n");
	
	//loop pelo array b
	for(i=0; i< 4; i++)
	{
		printf("b[%d] = %d \n", i, b[i]);
	}
	
	//Mostra array b usando nome do array e notação de ponteiro/deslocamento
	printf("\nNotacao de ponteiro/offset onde o ponteiro eh o nome do array:\n\n");
	       
	
	//loop pelo array b
	for(offset = 0; offset<4; offset++)
	{
		//*(b+offset) usado para referenciar o indice do array
		printf("*(b + %d) = %d\n", offset, *(b + offset));
	}
	
	//Mostra array b usando bPtr e notação de subscrito de array
	printf("\nNotacao de subscrito de ponteiro:\n\n");
	
	//loop pelo array b
	for(i=0; i < 4; ++i)
	{
		printf("bPtr[%d] = %d\n", i, bPtr[i]);
	}
	
	//Mostra array b usando bPtr e notação de ponteiro/deslocamento
	printf("\nNotacao de ponteiro/deslocamento:\n\n");
	
	//loop pelo array b
	for(offset = 0; offset<4; offset++)
	{
		//*(b+offset) usado para referenciar o indice do array
		printf("*(bPtr + %d) = %d\n", offset, *(bPtr + offset));
	}
	
	return 0;
}
