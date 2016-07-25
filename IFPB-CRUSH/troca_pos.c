#include "mylib.h"

char troca_pos(char matriz[][10],int troca[], int *posX, int *posY, int pontuacao){
	int valido=0,i,j;
	 char aux=0;
	
	if(troca[0] == troca[2] && troca[1] == troca[3] ){
		
		//gotoxy(10,10);printf("IGUAIS"); // não faça nada
		
	}else if ( troca[0] == troca[2] && troca[1] == troca[3] + 1 
	|| troca[0] == troca[2] && troca[1]  == troca[3] - 1 ){
		
		valido = TRUE;
		
	}else if(troca[0] == troca[2]+1 && troca[1] == troca[3] 
	|| troca[0]  == troca[2] -1 && troca[1] == troca[3] ){
		
		valido = TRUE;
		
	}
				
	if(valido == TRUE){
		
		aux = matriz[troca[0]][troca[1]];
		matriz[troca[0]][troca[1]] = matriz[troca[2]][troca[3]];
		matriz[troca[2]][troca[3]] = aux; 	
	}
	
}
