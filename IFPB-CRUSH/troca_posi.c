#include "mylib.h"

char troca_pos(char matriz[][10],int troca[], int *posX, int *posY, int pontuacao){
	int valido=0,i,j;
	 char aux=0;
	
	if(troca[0] == troca[2] && troca[1] == troca[3] ){ // Não faz nada pois as posições dos elementos são iguais
	}		
	else if ( troca[0] == troca[2] && troca[1] == troca[3] + 1 // Verifica se é uma troca para a casa vizinha direita
	|| troca[0] == troca[2] && troca[1]  == troca[3] - 1 ){ // Verifica se é uma troca para a casa vizinha esquerda
		
		valido = TRUE;
		
	}else if(troca[0] == troca[2]+1 && troca[1] == troca[3] // Verifica se é uma troca para a casa vizinha acima
	|| troca[0]  == troca[2] -1 && troca[1] == troca[3] ){ // Verifica se é uma troca para a casa vizinha abaixo
		
		valido = TRUE;
		
	}
	if(valido == TRUE){ // Só troca as posições que realmente são válidas
		
		aux = matriz[troca[0]][troca[1]];
		matriz[troca[0]][troca[1]] = matriz[troca[2]][troca[3]];
		matriz[troca[2]][troca[3]] = aux; 	
	}
	
}
