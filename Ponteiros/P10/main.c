#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Esse programa coloca valores em um array, ordena os valores em
//ordem crescente e imprime o array resultante.

void bubbleSort(int * const array, const int size);//Declaração protótipo

int main(int argc, char *argv[]) {
	
	//Inicializando o array
	int a[SIZE]  =  {2, 6, 4, 8, 10 ,12, 89, 68, 45, 37};
	
	int i;//contador
	
	printf("Intes de dados na ordem original:\n");
	
	//loop para o array
	for(i=0; i<SIZE; ++i){
		printf("%4d", a[i]);
	}
	
	bubbleSort(a, SIZE);//Ordena o array
	
	printf("\nItens de dados em ordem crescente:\n");
	
	//loop para o array
	for(i=0; i<SIZE; ++i){
		printf("%4d", a[i]);
	}
	
	return 0;
}

//Ordena um array de inteiros usando algoritimo bubble sort
void bubbleSort(int * const array, const int size)
{
	void swap(int *elementPtr, int *elementPtr2);//Declarando Protótipo
	int pass;//contador de pasasdas
	int j;//contador de comparação
	
	//loop para controlar passadas
	for(pass = 0; pass < size - 1; pass++)
	{
		
		//loop para controlar comparações durante cada passasda
		for(j = 0; j < size - 1; j++)
		{
		
			//troca elementos adjacentes se estivem fora de ordem
			if(array[j] > array[j+1]){
				swap(&array[j], &array[j+1]);
			}//fim do if
			
		}//fim do for interno
		
	}//fim do for externo
		
}//fim da função bubbleSort


//troca valores nos locais de memoria apontados por elementPtr
// e elementPtr2
void swap(int *elementPtr, int *elementPtr2)
{
	int hold = *elementPtr;
	*elementPtr = *elementPtr2;
	*elementPtr2 = hold;
}//Fim da função swap
