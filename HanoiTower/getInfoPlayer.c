#include "lib.h"

char getInfoPlayer(char name[]){
	char tecla;
	
	system("cls");
	printSquarShadow(20,20,5,10,255,3,1,8);

	color(7, 3);
	gowrite(20,5, "Tower of Hanoi                ESC - EXIT");

	gowrite(21,10, "Player ");
	color(1, 7);
	gowrite(28,10,"                              ");
	
	tecla = scanfstr(name,32,10,53);
	
	color(BLACK, WHITE);
	return tecla;
}
