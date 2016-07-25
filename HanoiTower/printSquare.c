#include "lib.h"

void printSquare(int distanceLeft, int distanceRight,int distanceTop, int distanceDown,
 int cortext,int corback, int textura){
	int i=0, j=0;
	
	color(cortext, corback);
	
	for(i=distanceTop;i <= (24 - distanceDown) ; i++){
		for( j=distanceLeft; j <= (80 - distanceRight);j++){
			gotoxy(j,i);
			printf("%c",textura);
		}
	}
	
	color(BLACK, WHITE);
}
