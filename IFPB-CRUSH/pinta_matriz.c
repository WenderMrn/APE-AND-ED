#include "mylib.h"

void pinta_matriz(char matriz[][10], int lin, int col,int atraso){

	int i,j,k, retorno=lin;
	
	_setcursortype(_NOCURSOR);
	
	for(i=0; i < 10; i++){
    
        for(j=0;j < 10 ; j++){
        	switch(matriz[i][j]){
        		case 'I': textcolor(3);break;
        		case 'F': textcolor(10);break;
        		case 'P': textcolor(12);break;
        		case 'B': textcolor(14);break;
        	}
        	gotoxy(lin+=3,col);printf("%c", matriz[i][j]); // Pinta cada elemento da linha separada por 3 espacos
      		
        		for(k=0;k<90000*atraso;k++);
        }
        col+=2; // faz  a função gotxy() pular 2 espaços na vertical
        lin=retorno; // Semelhante a \r, serve para fazer o gotoxy() voltar para o começo da linha após preencher uma.
    }
    
	textcolor(15); // volta a cor original
	 
}
