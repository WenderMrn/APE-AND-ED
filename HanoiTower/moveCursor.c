#include "lib.h"

int moveCursor(tpilha pilha1, tpilha pilha2, tpilha pilha3, int posicaoTroca[], int *lin, int *col,int *escolhaTorre){
	char tecla;
	int i, linDisc=14,colDisc=10;
	int disc=0, desloc=0;
	
	textcolor(BLACK);
	
	gotoxy(*lin,*col);
	printf("%c%c %c%c",174,174,175,175);

	for(i=0;i < 2 && tecla != SPC && tecla != ESC && tecla != 'r' && tecla != 'R';i++){

		do{
			gotoxy(1,1);tecla = getch();
		
			if(tecla == RIGHT && *lin < 65){
				gotoxy(*lin,*col);printf("     ");
				gotoxy((*lin)+=25,*col);printf("%c%c %c%c",174,174,175,175);
				*escolhaTorre+=1;
			}
			else if(tecla == LEFT && *lin > 15){
				gotoxy(*lin,*col);printf("     ");
				gotoxy((*lin)-=25,*col);printf("%c%c %c%c",174,174,175,175);
				*escolhaTorre-=1;
			}
			
			posicaoTroca[i] = *escolhaTorre;
							
		}while(tecla!= ENTER && tecla != SPC && tecla != ESC && tecla != 'r' && tecla != 'R');
	}
					
	if(tecla == ENTER)
		return 1;
		
	return tecla; 			
}
