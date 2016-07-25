
#include "lib.h"

void printHaste(int distanceLeft,int distanceTop, int sizeHaste){
	int col = 0, lin = 0;
	
	textcolor(BLACK);
	lin = distanceLeft;
	
	for(col = distanceTop; col < (sizeHaste+distanceTop); col++){
			gotoxy(lin,col);printf("%c",176);
	}	
}
