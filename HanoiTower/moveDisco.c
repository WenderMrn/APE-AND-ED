#include "lib.h"

int moveDisc(tpilha *pilha1,tpilha *pilha2, tpilha *pilha3,int posTroca[]){
	
	int disc=0, pos1=0, pos2=0, test=0;
	int torreDest=0,torreOrig=0;	
	pos1 = posTroca[0];
	pos2 = posTroca[1];
	
	/************************************************************************
	*	Esses dois switchs juntamente com o if, abaixo, são responsáveis por não permitir que o usuário  *   
	*	coloque um disco maior sobre um menor.  								*
	*************************************************************************/
	
	switch(pos1){ // torreOrig: disco do topo da torre que será movido de uma torre de origem
		case 1:
			exibeTopo(*pilha1,&torreOrig);
			break;
		case 2:
			exibeTopo(*pilha2,&torreOrig);
			break;
		case 3:
			exibeTopo(*pilha3,&torreOrig);
			break;
	}
	switch(pos2){ //torreDest: disco do topo da torre destino que recebera o disco de outra torre sobre ele
		case 1:
			exibeTopo(*pilha1,&torreDest);
			break;
		case 2:
			exibeTopo(*pilha2,&torreDest);
			break;
		case 3:
			exibeTopo(*pilha3,&torreDest);
			break;
	}
	
	if(torreOrig < torreDest ) 
		return 1;
		
	//......................................//

	switch(pos1){
		case 1: 
			test = pop(&(*pilha1),&disc);
			break;
		case 2: 
			test =	pop(&(*pilha2),&disc);
			break;
		case 3: 
			test =	pop(&(*pilha3),&disc);
	}
	
	if(test == 0)
		return 0;
	
	switch(pos2){
		case 1: 
			push(&(*pilha1),disc);
			break;
		case 2: 
			push(&(*pilha2),disc);
			break;
		case 3: 
			push(&(*pilha3),disc);
	}
	
	return 1;	
}
