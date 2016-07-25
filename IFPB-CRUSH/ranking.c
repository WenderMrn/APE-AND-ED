#include "mylib.h"

int ranking(char nomes[][22],int pontos[]){
	int i;
	char tecla;
	
	//do{
	system("cls");
	gotoxy(1,1);printf("--------------------------------------------------------------------------------");
	gotoxy(1,2);printf("|                                  RANKING                                      |");
	gotoxy(1,3);printf("--------------------------------------------------------------------------------");
		
	if(pontos[0]!=0){
		gotoxy(10,5);printf("1. %s", nomes[0]);gotoxy(53,5);printf("pontos: %d", pontos[0]);
	}else{
		gotoxy(25,13);printf("Nao ha pontuacoes no momento!");
	}
	if(pontos[1]!=0){
			gotoxy(10,6);printf("2. %s", nomes[1]);gotoxy(53,6);printf("pontos: %d", pontos[1]);
	}
	if(pontos[2]!=0){
		gotoxy(10,7);printf("3. %s", nomes[2]);gotoxy(53,7);printf("pontos: %d", pontos[2]);
	}
		
	textattr(7);
	gotoxy(1,2);printf("| ESC: sair ");
	textattr(15);
	gotoxy(1,22);printf("--------------------------------------------------------------------------------");
	gotoxy(2,23);printf("%c2014. Developed by Wender Mariano ",184);_setcursortype(_NOCURSOR);		
	while(tecla != ESC){
		tecla = getch();
	}
			

			
}
