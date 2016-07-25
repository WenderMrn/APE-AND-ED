#include "mylib.h"

char cursor_escolha(int linha1, int coluna1,int linha2, int coluna2){
	char escolha,tecla;
		
	do{
		fflush(stdin);
		//textattr(3);
		tecla = getch();
		if( tecla == UP){
			gotoxy(linha1,coluna1);printf(">>");
			gotoxy(linha2,coluna2);printf("  ");
			gotoxy(78,23);
			escolha = '1';		
		}else if ( tecla == DOWN ){
			gotoxy(linha2,coluna2);printf(">>");
			gotoxy(linha1,coluna1);printf("  ");
			gotoxy(78,23);
			escolha = '2';
		
		}
						
	}while( tecla != ENTER && tecla != ESC);
	//textattr(14);
	
	if(tecla != ESC)
		return escolha;
	else
		return tecla;
		

}


