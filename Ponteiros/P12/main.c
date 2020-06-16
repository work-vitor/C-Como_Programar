#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Demonstrando o operador sizeof

int main(int argc, char *argv[]) {
	
	//Declarando variaveis
	char c;
	short s;
	int i;
	long l;
	float f;
	double d;
	long double ld;
	int array[20]; //cria array de 20 elementos int
	int *ptr = array; //cria ponteiro para o array
	
	printf("     sizeof c = %d TSIZEOF(char) = %d\n"
		   "     sizeof s = %d TSIZEOF(short) = %d\n"
		   "     sizeof i = %d TSIZEOF(int) = %d\n"
		   "     sizeof l = %d TSIZEOF(long) = %d\n"
		   "     sizeof f = %d TSIZEOF(float) = %d\n"
		   "     sizeof f = %d TSIZEOF(double) = %d\n"
		   "     sizeof ld = %d TSIZEOF(long double) = %d\n"
		   "     sizeof array = %d\n"
		   "     sizeof ptr = %d\n",
			sizeof c, sizeof( char ), sizeof s, sizeof( short ), sizeof i,
			sizeof( int ), sizeof l, sizeof( long ), sizeof f,
			sizeof( float ), sizeof d, sizeof( double ), sizeof ld,
			sizeof( long double ), sizeof array, sizeof ptr);
	
	
	
	
	return 0;
}
