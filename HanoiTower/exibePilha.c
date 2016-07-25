#include "lib.h"

int exibePilha(tpilha pilha){
	int i;
	
	if(pilha.topo == -1) return -1;
	
	textcolor(GREEN);
	printf("\n........\n");
	
	for(i= pilha.topo; i >= 0;i--){
		printf("[%d]",pilha.discos[i]);
	}
		
	printf("\n........\n");
	textcolor(BLACK);
	
	return 1;
}
