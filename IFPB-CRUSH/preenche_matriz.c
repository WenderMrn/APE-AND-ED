#include "mylib.h"

void preenche_matriz(char matriz[][10]){
	int i,j,sort=0;
	
		for(i=0; i < 10; i++){
	    
	        for(j=0;j < 10 ; j++){
	
	            sort = rand()%4;
	            
	            switch(sort){
	                case 0: matriz[i][j] = 'F';break;
	                case 1: matriz[i][j] = 'I';break;
	                case 2: matriz[i][j] = 'B';break;
	                case 3: matriz[i][j] = 'P';
	            }
	        }
		   
	    }
	
	
}
