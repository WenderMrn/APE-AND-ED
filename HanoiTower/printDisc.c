#include "lib.h"

void printDisc(int distanceLeft,int distanceTop, int sizeDisc, int caracter){
	int col = 0, lin = 0;
	
	col = distanceTop;
	lin = distanceLeft;
	
	switch(sizeDisc){
		
		case 10:
			textcolor(BLACK); //Menor disco	
			sizeDisc = 5;
			break;
		case 9:
			textcolor(CYAN); 	
			sizeDisc = 7;
			break;	
		case 8:
			textcolor(DARKGRAY); //Disco menor 	
			sizeDisc = 9;
			break;
		case 7:
			textcolor(LIGHTGREEN);	
			sizeDisc = 11;
			break;
		case 6:
			textcolor(GREEN);	
			sizeDisc = 13;
			break;
		case 5:
			textcolor(BLUE);	
			sizeDisc = 15;
			break;
		case 4:
			textcolor(LIGHTRED);	
			sizeDisc = 17;
			break;
		case 3:
			textcolor(RED); //maior disco
			sizeDisc = 19;
			break;
		case 2:
			textcolor(BROWN); //maior disco
			sizeDisc = 21;
			break;	
		case 1:
			textcolor(LIGHTBLUE); //maior disco
			sizeDisc = 23;
	}
	
	for(; lin <(sizeDisc+distanceLeft);lin++){
		gotoxy(lin,col);printf("%c",caracter);
	}
	textcolor(BLACK);	
}
