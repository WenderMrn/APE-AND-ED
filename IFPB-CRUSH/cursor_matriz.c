#include "mylib.h"

char cursor_matriz(int troca[], int *posX, int *posY, int *linha, int *coluna){
	
	char tecla;
	int sequencia=0;
	
	_setcursortype(_NORMALCURSOR);
	
  do{
  	
  
	do{
		
		gotoxy(*linha,*coluna);tecla = getch();
		if( tecla == RIGHT && *linha < 68){
				gotoxy(*linha+=3,*coluna);
				 *posY = *posY+=1;
		}
		else if(tecla == LEFT && *linha > 45){
			gotoxy(*linha-=3,*coluna);
			*posY = *posY-=1;
		}
		else if( tecla == DOWN && *coluna < 21){
			
			gotoxy(*linha,*coluna+=2);
		}		
		else if (tecla == UP && *coluna > 5){
				gotoxy(*linha,*coluna-=2);
		}
		
		switch(*coluna){
			case 4: *posX=0;break;
			case 6: *posX=1;break;
			case 8: *posX=2;break;
			case 10: *posX=3;break;
			case 12: *posX=4;break;
			case 14: *posX=5;break;
			case 16: *posX=6;break;
			case 18: *posX=7;break;
			case 20: *posX=8;break;
			case 22: *posX=9;
		}
		
	}while( tecla != ENTER && tecla != ESC);
	
	troca[sequencia] = *posX;troca[sequencia+=1] = *posY;
	sequencia++;
	
 }while(sequencia < 4 && tecla != ESC);	
 
 	_setcursortype(_NOCURSOR);	
 	
	return tecla;	
	
}
