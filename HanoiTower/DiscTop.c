#include "lib.h"

int exibeTopo(tpilha pilha, tdado *valor){
	
	if(pilha.topo == -1) return 0;
	
	*valor = pilha.discos[pilha.topo];
	
	return 1;
}
