#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct produto{
	char nome[10];
	int vd;
	int quant;
	float preco;
	float desc;
	float vt;
};

void Operacao(struct produto *x){
	
	if(x->quant <= 5){
		x->vd = 2;
		x->vt = x->quant*x->preco;
		x->desc = (x->vt*2)/100;
		x->vt = x->vt - x->desc;
	}
	else if(x->quant>5 && x->quant<=10){
		x->vd = 3;
		x->vt = x->quant*x->preco;
		x->desc = (x->vt*3)/100;
		x->vt = x->vt - x->desc;
	}
	else{
		x->vd = 5;
		x->vt = x->quant*x->preco;
		x->desc = (x->vt*5)/100;
		x->vt = x->vt - x->desc;
	}
	
}

int main(int argc, char *argv[]) {
	
	int i;
	char fim;
	
	struct produto co;
	
	struct produto resu;
	
	do{
		printf("Digite o nome do produto:");
		scanf("%s",&co.nome);
		
		printf("Digite a quantidade adquirida:");
		scanf("%d",&co.quant);
		
		printf("Digite o valor unitario:");
		scanf("%f",&co.preco);
		
		Operacao(&co);
		
		printf("Produto: %s | com desconto de: %d porcento | valor total: %.2f", co.nome, co.vd, co.vt);
		
		printf("\n*************************************************\n");
		
		printf("\n\nDeseja fazer mais uma operacaoS/N:");
		scanf("%s",&fim);
		
	}while(fim != 'n' && fim != 'N');
	
	return 0;
}
