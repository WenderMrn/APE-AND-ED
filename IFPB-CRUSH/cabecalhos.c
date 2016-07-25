#include "mylib.h"

void cabecalho(){
	
		gotoxy(1,1);printf("________________________________________________________________________________");
		gotoxy(1,2);printf("|                                        CRUSH                                 |");
		gotoxy(36,2);textcolor(3);printf("I");
		gotoxy(37,2);textcolor(10);printf("F");
		gotoxy(38,2);textcolor(12);printf("P");
		gotoxy(39,2);textcolor(14);printf("B");
		textcolor(15);
		gotoxy(1,3);printf("--------------------------------------------------------------------------------");
		textattr(7);
		gotoxy(1,2);printf("| ESC: sair ");
		textattr(15);
		gotoxy(1,22);printf("--------------------------------------------------------------------------------");

}
void cabecalho_pequeno(){
	
	gotoxy(1,1);printf(" _______________________________________");
	gotoxy(1,2);printf("|                IFPB CRUSH             |");
	gotoxy(18,2);textcolor(3);printf("I");
	gotoxy(19,2);textcolor(10);printf("F");
	gotoxy(20,2);textcolor(12);printf("P");
	gotoxy(21,2);textcolor(14);printf("B");
	textcolor(15);
	gotoxy(1,3);printf("|_______________________________________|");
	textattr(7);
	gotoxy(1,2);printf("| ESC: sair ");
	textattr(15);
	gotoxy(1,22);printf("-----------------------------------------");
}
