#include "lib.h"

int OpcaoSelec(){
	char tecla;
	int opcao=1;
	
	printSquarShadow(5,30,5,4,255,3,1,8);
	
	textcolor(1);
	printSquare(5,30,6,16,3,7,255); // imprime a atual
	textbackground(7);
	gowrite(6,7, "PLAY GAME");
	
	textbackground(3);
	gowrite(6,10, "HELP");
	gowrite(6,13, "RANKING");
	gowrite(6,16, "QUIT");
	
	
	do{
		color(1, 7);
	
		tecla =  getch();

		if(tecla == UP && opcao > 1){
			opcao--;			
		}
		else if(tecla == DOWN && opcao  < 4){
			opcao++;
		}
		
		switch(opcao){
			case 1:
				printSquare(5,30,9,13,3,3,255); // apaga a anterior
				printSquare(5,30,6,16,3,7,255); // imprime a atual
				textbackground(7);
				gowrite(6,7, "PLAY GAME");
				textbackground(3);
				gowrite(6,10, "HELP");
				break;
			
			case 2:
				printSquare(5,30,6,16,3,3,255); // apaga a anterior
				printSquare(5,30,9,13,3,7,255); // imprime a atual
				printSquare(5,30,12,10,3,3,255);// apaga a anterior
				textbackground(3);
  				gowrite(6,7, "PLAY GAME");
  				textbackground(7);
				gowrite(6,10, "HELP");
				textbackground(3);
				gowrite(6,13, "RANKING");
				break;
			
			case 3:
				printSquare(5,30,9,13,3,3,255);
				printSquare(5,30,15,5,3,3,255);
				printSquare(5,30,12,10,3,7,255);
				textbackground(3);
				gowrite(6,10, "HELP");
				textbackground(7);
				gowrite(6,13, "RANKING");
				textbackground(3);
				gowrite(6,16, "QUIT");
				break;
				
			case 4:
				printSquare(5,30,12,10,3,3,255);
				printSquare(5,30,15,7,3,7,255);
				textbackground(3);
				gowrite(6,13, "RANKING");
				textbackground(7);
				gowrite(6,16, "QUIT");
				break;
		}
	}while(tecla != ENTER);
	
	color(BLACK, WHITE);
	
	return opcao;
}
