#include "lib.h"

/*

TORRE DE HANOI

CURSO: TECNOLOGIA EM SISTEMAS PARA INTERNET
DISCIPLINA: ESTRUTURA DE DADOS
PERÍODO: 2014.1
DESENVOLVEDORES: WENDER MARIANO, RAYSSA FREITAS E LEONARDO BERNARDO

*/

int main(){
	int opcao=0, test=0;
	tlista listaRanking;
	tplayer player;
	
	criarLista(&listaRanking);
	
	system("title TOWER OF HANOI - The Game v3.3");
	
	screen();
	color(0, 15);
	clrscr();
	
	do{
	  	system("cls");
	  	footer();
	  	
	  	opcao = OpcaoSelec(); /*Menu inicial*/
		
		switch(opcao){
			case 1: funcPlay(&listaRanking); break;
			case 2: help(); break;
			case 3: rankingOut(listaRanking); break;
			case 4: opcao = ConfQuit(); break;
		}
  	}while(opcao != 4);	
  	
	system("cls");
	return 0;
}
