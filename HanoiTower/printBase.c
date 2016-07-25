#include "lib.h"

void printBase(int distanceLeft,int distanceTop, int sizeBase){
	int col = 0, lin = 0;
	
	col = distanceTop;
	lin = distanceLeft;
	
	textcolor(BLACK);	
	for(; lin <(sizeBase+distanceLeft);lin++){
		gotoxy(lin,col);printf("%c",176);
	}
}
