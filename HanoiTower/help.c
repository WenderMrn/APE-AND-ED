#include "lib.h"

void help(){

	printSquarShadow(16,3,2,1,255,7,1,8);
	printSquare(16,3,2,21,4,4,255);
	textcolor(WHITE);
	textbackground(4);
	gowrite(30, 2, "HELP - HOW TO PLAY TOWER OF HANOI?");
	textbackground(7);
	textcolor(BLACK);
	gowrite(20, 6, "- The objective of the game is to move all the disks of");
	gowrite(18, 7, " the inicial to the rod end.");
	gowrite(20, 8, "- The rod over the left is given as initial.");
	gowrite(20, 9, "- The rod over the right is given as final.");
	gowrite(20, 10, "- As the disk from the top of each rod can be removed.");
	gowrite(20, 11, "- Only one disk may be moved at a time.");
	gowrite(20, 12, "- A larger disk may never be placed on a smaller.");
	
	gowrite(18, 14, "SCORING");
	gowrite(20, 16, "- Score is based on the amount of movement. ");
	gowrite(20, 17, "- Each level has a base score.");
	gowrite(20, 18, "- If it is exceeded the minimum number of attempts, the");
	gowrite(18, 19, " base score is divided by the amount of excess attempts.");
	
	gowrite(30, 22, "Press any key to continue...");
	getch();
	
	printSquarShadow(16,3,2,1,255,7,1,8);
	textbackground(7);
	
	gowrite(18, 3, "CONTROLS");
	gowrite(20, 6, "- Use the arrows to the RIGHT and LEFT to go on the rods.");
	gowrite(20, 7, "- To select a disc press ENTER, move to the desired stem");
	gowrite(18, 8, " and press ENTER again to release it.");
	gowrite(20,9, "- To cancel a move press the SPACE");
	gowrite(20,10, "- To reset a level press \"R\"");
	gowrite(20, 11, "- Press ESC to leave the level at any time.");


	gowrite(30, 22, "Press any key to back...");
	getch();
	
	textbackground(WHITE);
}
