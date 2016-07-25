#include "lib.h"

int push(tpilha *pilha, tdado valor){ // Insere no topo
	
	if(pilha->topo == NUMDISC - 1 ) return 0;
	
	(pilha->topo)++;
	
	pilha->discos[pilha->topo] = valor;
	
	return 1;
}
