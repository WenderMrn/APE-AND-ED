#include "lib.h"

int verificaTorreCompleta(tpilha pilha2, tpilha pilha3, int qtdDisc){

	if((pilha3.topo == qtdDisc-1) || (pilha2.topo == qtdDisc-1))
		return 1;
	
	return 0;
}
