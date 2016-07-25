#include "lib.h"

int printTorre(tpilha pilha,int numPilha){
	int i=0,linDisc=0,colDisc=19, disc=0;
	int discTextura = 219;
	
	switch(numPilha){
		case 1:
			linDisc = 14;
			break;
		case 2:
			linDisc = 39;
			break;
		case 3:
			linDisc = 64;
	}
	
	colDisc = 21;
	
	for(i=1;i <= pilha.topo+1;i++){
		disc = pilha.discos[i-1];
		
		switch(disc){
			/********************************************************************
			* Quanto maior o disco menos distante ele deve ficar da esquerda	*
			* para que o discos fiquem alinhados com a Haste						*
			*********************************************************************/
			case 1: printDisc(linDisc-8,colDisc,1,discTextura);break; 
			case 2: printDisc(linDisc-7,colDisc,2,discTextura);break;
			case 3: printDisc(linDisc-6,colDisc,3,discTextura);break;
			case 4: printDisc(linDisc-5,colDisc,4,discTextura);break;
			case 5: printDisc(linDisc-4,colDisc,5,discTextura);break;
			case 6: printDisc(linDisc-3,colDisc,6,discTextura);break;
			case 7: printDisc(linDisc-2,colDisc,7,discTextura);break;
			case 8: printDisc(linDisc-1,colDisc,8,discTextura);break;
			case 9: printDisc(linDisc,colDisc,9,discTextura);break;
			case 10: printDisc(linDisc+1,colDisc,10,discTextura);break;
		}
		
		if(disc >= 1 && disc <= 9){
			colDisc--;
			/********************************************************************
			* A coluna começa com um valor default, que faz um disco ser	   *
			* impresso na tela na ultima posição, quando um disco é impresso   *
			* a variável "colDisc" precisa ser decrementada para que o próximo *
			* disco fique em cima do anterior. 							 	   *
			********************************************************************				 */ 
		}		
	}
}
