#include "lib.h"

int ConfQuit(){
	char opcao;
	
	printSquarShadow(20,20,10,10,255,RED,1,8);
	
   /*******************************************************
   * A função textcolor() e textbackground(), abaixo,     *
   * serve apenas para o texto que vem abaixo que ficará  *
   * sobre a janela acima(printSquareShadow()).           *
   ********************************************************/
   
	color(WHITE, RED);
	gowrite(27, 12,"You really want to exit? (Y/N)");
	
	do{
		opcao = toupper(getch());  
	}while(opcao != 'N' && opcao != 'Y' && opcao != ESC);
	
	color(1, WHITE);
	
	if(opcao == 'Y')
		return 4;
		
	return 0; 
}

