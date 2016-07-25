#include "mylib.h"

int embaralha_matriz(char matriz[][10]){
	int i,j,k,sort=0,existe;
	
	existe=FALSE;
	for(i=0;i<10;i++){
	  
	  	for(j=0;j < 7;j++){
	  		if(matriz[i][j] == 'I' && matriz[i][j+1] == 'F'
			 && matriz[i][j+2] == 'P' && matriz[i][j+3] == 'B'
			  || matriz[i][j] == 'B' && matriz[i][j+1] == 'P'
			 && matriz[i][j+2] == 'F' && matriz[i][j+3] == 'I'){
					
				for(k=j;k<j+4;k++){
						
			    	sort = rand()%4;
            		 
				 switch(sort){
               	  case 0: matriz[i][k] = 'I';break;
               	  case 1: matriz[i][k] = 'B';break;
               	  case 2: matriz[i][k] = 'F';break;
               	  case 3: matriz[i][k] = 'P';
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
                	 case 0: matriz[k][i] = 'I';break;
               		 case 1: matriz[k][i] = 'P';break;
               		 case 2: matriz[k][i] = 'F';break;
               		 case 3: matriz[k][i] = 'B';
            	 }
				}
	 			existe = TRUE;		
			 }
			  	
	  	  }
	  	  
     }
     return existe; /* Sempre que essa função encontra uma sequencia de IFPB
	 			   / ela retorna 1, assim a função que chamou (play()) faz 
					uma nova busca por formações IFPB para pontuar devidamente*/
	
}
