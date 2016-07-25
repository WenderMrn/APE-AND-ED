#include "lib.h"

char scanfstr(char string[],int lin, int col, int colMax){
	int i = 0, minLeft = lin;
	char tecla;

	do{ //Salva o nome do Player 
		do{
			fflush(stdin);
			/*gotoxy(lin,col);*/
			
			gotoxy(1,1);tecla = toupper(getch());
			
			if(isalpha(tecla) && tecla != BS && lin < colMax || (tecla == SPC && lin < colMax) ){
				string[i++] = tecla;
				gotoxy(lin++,col);printf("%c",tecla);
			}
			else if(tecla == BS && lin > minLeft){
				gotoxy(--lin,col);printf(" \b");
				string[--i] = '\0';
			}
			
		}while(tecla!= ENTER && tecla != ESC);

		string[i]='\0';
	}while(string[0] == '\0' && tecla != ESC); // evitar guardar um nome em branco
	
	return tecla;
}
