#include "mylib.h"

int embaralha_matriz(char matriz[][10]){
	int i,j,k,sort=0,existe;
	
	existe=FALSE;
	for(i=0;i<10;i++){
	  
	  	for(j=0;j<10;j++){
	  		if(matriz[i][j] == 'I' && matriz[i][j+1] == 'F'
			 && matriz[i][j+2] == 'P' && matriz[i][j+3] == 'B'
			  || matriz[i][j] == 'B' && matriz[i][j+1] == 'P'
			 && matriz[i][j+2] == 'F' && matriz[i][j+3] == 'I'){
					
				for(k=j;k<j+4;k++){
						
			    	sort = rand()%4;
            		 
				 switch(sort){
               	  case 0: matriz[i][j] = 'I';break;
               	  case 1: matriz[i][j] = 'F';break;
               	  case 2: matriz[i][j] = 'P';break;
               	  case 3: matriz[i][j] = 'B';
            	 }
				}
				existe = TRUE;
					
			 }
			 if(matriz[j][i] == 'I' && matriz[j+1][i] == 'F'
			 && matriz[j+2][i] == 'P' && matriz[j+3][i] == 'B' ||
			  matriz[j][i] == 'B' && matriz[j+1][i] == 'P'
			 && matriz[j+2][i] == 'F' && matriz[j+3][i] == 'I'){
				
				for(k=j;k<j+4;k++){
						
					sort = rand()%4;
            		 
				 switch(sort){
                	 case 0: matriz[j][i] = 'I';break;
               		 case 1: matriz[j][i] = 'F';break;
               		 case 2: matriz[j][i] = 'P';break;
               		 case 3: matriz[j][i] = 'B';
            	 }
				}
	 			existe = TRUE;		
			 }
			  	
	  	  }
	  	  
     }
     return existe;
	
}
