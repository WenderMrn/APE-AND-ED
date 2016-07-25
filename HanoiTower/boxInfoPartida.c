#include "lib.h"

void boxInfoPartida(int nivel, int MinJogadas, int jogadasRealizadas, int score,  char name[] ){

	printSquarShadow(3,1,1,21,255,3,0,8);
	color(1, 3);
	
	gotoxy(6,2);printf("[ LEVEL %d ]  score: %d   Min: %d    played: %d   %s ",nivel, score,
	MinJogadas,jogadasRealizadas, name);
	 
	textbackground(WHITE);
}
