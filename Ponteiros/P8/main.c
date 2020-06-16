#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Refazendo exercicios antigos, usando logica de ponteiros

struct fruta{
	
	float mora;
	float maca;
	float vMO;
	float vMA;
	float vt;
	float desc;
};

void Valores(struct fruta *x){
	
	//Calculando valor Maça
	if(x->maca<=5){
		x->vMA = x->maca*1.80;
	}else{
		x->vMA = x->maca*1.50;
	}
	
	//Calculando valor Morango
	if(x->mora<=5){
		x->vMO = x->mora*2.50;
	}else{
		x->vMO = x->mora*2.20;
	}
	
	x->vt = x->vMA+x->vMO;
	
}

int main(int argc, char *argv[]) {
	
	float total;
	
	struct fruta kg;
	
	struct fruta res;
	
	printf("Digite Kilos Morango:");
	scanf("%f",&kg.mora);
	
	printf("\nDigite Kilos Maca:");
	scanf("%f",&kg.maca);
	
	total = kg.maca + kg.mora;
	
	Valores(&kg);
	
	if(total > 8 || kg.vt > 25){
		kg.desc = (kg.vt*10)/100;
		kg.vt = kg.vt-kg.desc;
		printf("Valor total da compra com desconto R$:%.2f", kg.vt);
	}else{
		printf("Valor total R$:%.2f", kg.vt);
	}
	
	return 0;
}
