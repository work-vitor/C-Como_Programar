#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Copiando uma string usando notação de array e notação de ponteiro.


//Declarando as funções
void copy1(char * const s1, const char * const s2);//prototipo
void copy2(char *s1, const char *s2);

int main(int argc, char *argv[]) {
	
	char string1[10];//cria array string1
	char *string2 = "Ola";//Cria um ponteiro para uma string
	char string3[10];//cria array string3
	char string4[] = "Adeus";//Cria um ponteiro para uma string
	
	//chamando a função copy1
	copy1(string1, string2);
	printf("String1 = %s\n", string1);
	
	//chamando a função copy2
	copy2(string3, string4);
	printf("String3 =  %s\n", string3);
	
	
	return 0;
}

//copia s2 para s1 usando notação de array
void copy1(char * const s1, const char * const s2)
{
	int i;//contador
	
	//loop pelas strings
	//s1 vai ser igual a s2, enquanto s2 for diferente de '\0' = "final da string"
	for(i=0; (s1[i] = s2[i]) != '\0'; i++){
		;//nao faz nada no corpo
	}//fim do for
	
}


//copia s2 para s1 usando notação de ponteiro
void copy2(char *s1, const char *s2)
{
	//loop pelas strings
	for( ; (*s1 = *s2) != '\0'; s1++, s2++ ){
		;//nao faz nada no corpo
	}//fim do for
}
