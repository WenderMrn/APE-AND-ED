#include "mylib.h"

int main() {
	char escolha;
	int maior_ponto[3], nomes[3][22], pontos[]={0,0,0};
	//textbackground(3);
	
	_setcursortype(_NOCURSOR);
		gotoxy(35,13);printf("Wait...");
		_sleep(1500);
	do{
		
	
		system("cls");
		cabecalho();
		_setcursortype(_NOCURSOR);	
		gotoxy(8,7);printf("Play");
		gotoxy(8,9);printf("Ranking");
		gotoxy(30,22);printf(" Use as setas[ %c ]/ R - resetar/ ESC - sair", 23);
		gotoxy(2,23);printf("%c 2014. Developed by Wender Mariano ",184);
		gotoxy(78,23);
		
		escolha = cursor_escolha(5,7,5,9); // retorna '1' ou '2', ESC ou ENTER;
		 
		 switch(escolha){
		 	case '1':play(nomes,pontos);break;
		 	case '2':ranking(nomes,pontos);
		 }	
		if(escolha == ESC){
			gotoxy(20,15);
			printf("Voce tem certeza que deseja sair?(S/N)");
			gotoxy(78,23);
			do{
				escolha = toupper(getch());
			}while(escolha != 'N' && escolha != 'S' && escolha != ESC);
		}
				
	}while(escolha != 'S' && escolha != ESC);
	system("cls");
	return 0;
}

