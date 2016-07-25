#include "mylib.h"

int verifica_pontuacao(char matriz[][10]){
	int i,j,k, pont=0;

	  for(i=0;i < 10;i++){
	  
	  	for(j=0;j < 7;j++){
	  		
	  		if((matriz[i][j] == 'I' && matriz[i][j+1] == 'F'
			 && matriz[i][j+2] == 'P' && matriz[i][j+3] == 'B')
			  || (matriz[i][j] == 'B' && matriz[i][j+1] == 'P'
			 && matriz[i][j+2] == 'F' && matriz[i][j+3] == 'I')){
					
			 	pont+=10;
			 	printf("\a");
			 		
			 	for(k = 0;k < 4;k++,j++){
			 		
					gotoxy(43+(j*3),(i*2)+4);printf("%c",158);		
				}
				_sleep(500);
					
			 }
			 if(matriz[j][i] == 'I' && matriz[j+1][i] == 'F'
			 && matriz[j+2][i] == 'P' && matriz[j+3][i] == 'B' ||
			  matriz[j][i] == 'B' && matriz[j+1][i] == 'P'
			 && matriz[j+2][i] == 'F' && matriz[j+3][i] == 'I'){
		
			 	pont+=10;
			 	printf("\a");
	
			 	for(k = 0;k < 4;k++,j++){
			 		/* (43) deslocamento até a posição inicial da matriz, (i)					/
				   / numero da coluna multiplicado pelo deslocamento a baixo que é de 2 em 2 */
					gotoxy(43+(i*3),(j*2)+4);printf("%c",158); 			
				}
				_sleep(500);
			 }
			 	
	  	  }
	
      }
      return pont;
				 		 			 			 			 	 
}

