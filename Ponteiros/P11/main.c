#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//A aplicação de sizeof a um array retorna
//o numero de bytes no array

size_t getSize(float *ptr);//prototipo

int main(int argc, char *argv[]) {
	
	float array[20];//Criando o array
	
	printf("O numero de bytes no array eh %d"
		   "\nO numero de bytes retornados por getSize eh %d\n",
		   sizeof(array), getSize(array));
	
	return 0;
}

//retorna tamanho de ptr
size_t getSize(float *ptr){
	
	
	return sizeof(ptr);
	
}
