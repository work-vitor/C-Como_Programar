#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Programa de embaralhamento e distribuição de cartas

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Declarando as funções
void embaralha(int wbaralho[][13]);
void distribui(const int wbaralho[][13], const char *wNaipe[], const char *wNaipe[]);

int main(void) {

	//inicializa array naipe
	const char *naipe[4] = {"Copas", "Ouros", "Paus", "Espadas"};
	
	//inicializa array naipe
	const char *naipe[13] = 
	{"As", "Dois", "Tres", "Quatro",
	 "Cinco", "Seis", "Sete", "Oito",
	  "Nove", "Dez", "Valete", "Dama", "Rei"
	};
	
	//inicializa array baralho
	int baralho[4][13] = {0};
	
	srand(time(0));//semente do gerador de numero aleatorio
	
	shuffle(baralho);//embralha
	distribui(deck, face, suit);//distribui as cartas do baralho
	
	return 0;
}

//Emberalha cartas
void embralha(int wbaralho[][13])
{
	
	int linha;//numero de linha
	int coluna;//numero de coluna
	int carta;//contador
	
	//para cada uma das 52 cartas, escolhe slot de deck aleatoriamente
	for(carta = 1; carta <= 52; carta++){
		
		//Escolhe novo local aleatorio ate que slot nao ocupado seja encontrado
		do{
			linha = rand() % 4;
			coluna = rand() % 13;
		}while(wBaralho[linha][coluna] != 0);//fim do do..while
		
		//coloca numero da carta no slot escolhido do baralho
		wBaralho[linha][coluna] = carta;
	}//fim de for
}//fim da função shunffle


//distribui cartas no baralho
void distribui(const int wBaralho[][13], const char *wNaipe[], const char *wNaipe[])
{
	
	int carta;//contador de cartas
	int linha;//contador de linhas
	int coluna;//contador de coluna
	
	//distrubui cada uma das 52 cartas
	for(carta = 1; carta <= 52; carta++){
	
		for(linha = 0; linha <= 3; linha++){
		
			//loop pelas colunas de wBaralho para linha atual
			for(coluna = 0; coluna <= 12; coluna++){
			
				//se slot contem cartão atual, mostra carta
				if(wBaralho[linha][coluna] == carta){
					printf("%5s of %-8s%c", wNaipe[coluna], wNaipe[linha],
					carta % 2 == 0 ? '\n' : '\t');
				}//fim do if
			}//fim do for	
		}//fim do for
	}//fim do for
}//fim da função distribui

