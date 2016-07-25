#include "lib.h"

int pop(tpilha *pilha, tdado *valor){
	// remove do topo
	
	if(pilha->topo == -1) return 0;
	
	*valor = pilha->discos[pilha->topo];
	
	(pilha->topo)--;
	
	return 1; 
}

