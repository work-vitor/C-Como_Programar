#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n1, *pn1;
	
	n1 = 7;
	
	pn1 = &n1;//Atribuindo endereço de memoria da var n1
	
	//printf("\n %d \n", *pn1);//Imprime o valor da variavel 'n1' apontada pelo point 'pn1'
	
	printf("O endereco de n1 eh: %p"
			"\nO valor de pn1 eh: %p", &n1, pn1);//endereço apontado de n1
			
	printf("\n \nO valor de n1 eh: %d"
			"\nO valor de *pn1 eh: %d", n1, *pn1);//valor atribuido indiretamente pelo ponteiro
			
	printf("\n \nMostrando que * e & sao complementos um "
			"do outro:\n&*pn1 = %p "
			"\n*&pn1 = %p\n", &*pn1, *&pn1);
	
	return 0;
}
