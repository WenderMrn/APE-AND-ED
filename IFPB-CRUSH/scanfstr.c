#include "mylib.h"

char scanfstr(char string[],int linha, int coluna){
	
	int i;
	char tecla;
	
	i=0;

	do{ //Salva o nome do Player 
		do{
			fflush(stdin);
			gotoxy(linha,coluna);tecla = toupper(getch());
			if(isalpha(tecla) && tecla != BS && linha < 30 || (tecla == SPC && linha < 30) ){
				string[i++] = tecla;
				gotoxy(linha++,coluna);printf("%c",tecla);
			}else if(tecla == BS && linha > 9){
				gotoxy(--linha,coluna);printf(" \b");
				string[--i] = '\0';
			}
		}while(tecla!= ENTER && tecla != ESC);

		string[i]='\0';
	}while(string[0] == '\0' && tecla != ESC); // evitar guardar um nome em branco
	
	return tecla;
		
}
