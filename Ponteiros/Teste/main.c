#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Refiz um exercicio passado, porem usando ponteiros

struct valores{
	char combu;
	float litros;
	float valor;
	float desc;
};

void valorAlcoool(struct valores *x){
	
	if(x->litros<=20){
		
		x->valor = x->litros * 2.90;
		x->desc = (x->valor*3)/100;
		x->valor = x->valor-x->desc;
		
	}else{
		x->valor = x->litros * 2.90;
		x->desc = (x->valor*5)/100;
		x->valor = x->valor-x->desc;
	}
	
	
}

void valorGasolina(struct valores *x){
	
	if(x->litros<=20){
		
		x->valor = x->litros * 3.90;
		x->desc = (x->valor*4)/100;
		x->valor = x->valor-x->desc;
		
	}else{
		x->valor = x->litros * 3.90;
		x->desc = (x->valor*6)/100;
		x->valor = x->valor-x->desc;
	}
	
	
}


int main(int argc, char *argv[]) {
	
	//Declarando a estrutura	
	struct valores cal;
	
	//Declarando ponteiro que aponta uma estrutura
	struct valores *ptrCal;
	
	ptrCal = &cal;
	
	
	printf("Digite o combustivel desejado?");
	scanf("%c",&cal.combu);
	
	printf("\nInforme quantos litros deseja:");
	scanf("%f",&cal.litros);
	
	
	if(cal.combu == 'A' || cal.combu == 'a'){
		
		valorAlcoool(ptrCal);
		
		printf("Valor total a pagar: %.2f", ptrCal->valor);
		
	}
	else{
		
		valorGasolina(ptrCal);
		
		printf("Valor total a pagar: %.2f", ptrCal->valor);
	
	}
	return 0;
}
