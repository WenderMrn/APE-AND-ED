#include "lib.h"


/**************************
* função não implementada *
***************************/


int moveDiscPaint(tpilha pilha1, tpilha pilha2, tpilha pilha3,
 int *linDisc, int *colDisc, char tecla,int numpilha){
 	
		int sizeDisc=0, acresimo=0;
		int numPilha=0,disc=0;
		

		 /*Movimenta os discos graficamente sobre as torres*/
			if(tecla == RIGHT && *linDisc <= 50){
				
				switch(numPilha){
					case 1:
						exibeTopo(pilha1,&disc);
						
						if(disc == 0) return 0;
						
						switch(disc){
							case 1:
								printDisc(*linDisc+=25,*colDisc,1,219); 
							;break;
						}
							
					;break;
						
				}

				
			}else if(tecla == LEFT){
	
			}
}
