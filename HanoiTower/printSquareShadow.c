#include "lib.h"

void printSquarShadow(int distanceLeft, int distanceRight,int distanceTop, int distanceDown,int textura, int corback,
 int desloc, int corShadow){
	int i=0, j=0;
	
	printSquare(distanceLeft+desloc,distanceRight-desloc,distanceTop+desloc,
	distanceDown-desloc,7,corShadow,176);
	
	textbackground(corback);
	
	for(i=distanceTop;i <= (24 - distanceDown) ; i++){
		for( j=distanceLeft; j <= (80 - distanceRight);j++){
				gotoxy(j,i);printf("%c",textura);
		}
	}
		
	color(BLACK, WHITE);
}
