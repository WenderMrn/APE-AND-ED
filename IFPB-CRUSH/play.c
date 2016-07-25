#include "mylib.h"

char play(char nomes[][22], int pontos[]){
	
	char matriz[10][10], nome[22],aux[22],tecla,existe, escolha;
	int i,j,sort,lin_m=0,col_m=0, linha=0,aux_pts,
	 coluna = 0, troca[4], pontuacao=0, tentativas = 0,antes=0;
	
	do{
		tentativas = 0;
		antes = 0;
		pontuacao = 0;
		sort = 0;
		coluna = 0;
		linha = 0;
		lin_m = 0;
		col_m = 0;
				
		srand(time(NULL));
		
		system("cls");
		cabecalho_pequeno();
		 
		preenche_matriz(matriz); // Preenche a matriz com os devidos caracteres
		
	    gotoxy(3,6);printf("Nome: ");
	    gotoxy(3,8);printf("Pontuacao: 0 ");
		tecla = scanfstr(nome,9,6); // Ler o nome do jogador
		
		if( tecla != ESC){
			
			linha=43; // Faz o curso da matriz começar na primeira linha
			coluna = 4; // Faz o curso da matriz começar na primeira coluna
			
			pinta_matriz(matriz,40,4,100); // Pinta a matriz que foi preenchida
			
			do{
			 
		      pontuacao+=verifica_pontuacao(matriz);
		      existe = embaralha_matriz(matriz); // Se embaralha retornar TRUE(1) significa que encontrou alguma formação IFPB.
		    	/* Enquanto a função "embaralha" estiver retornando TRUE é preciso chamar a função " verifica puntuação,
				pois só o motivo de preencher a matriz já pode forma um ou vários IFPBs, mas não se pode embaralhar todos de
				 uma vez, deve ser cara ocorrencia por vez,até que não reste formação de IFPB, pois o usuário perderia pontos
				  que não seriam considerados*/
			}while( existe == TRUE);
			
			
			gotoxy(8,22);printf(" Use as setas  [ %c%c %c %c ] ",24, 25, 27, 26);
			pinta_matriz(matriz,40,4,100);
			
			//antes = pontuacao;
			
			gotoxy(13,8);printf(" %d                     ", pontuacao);
			gotoxy(48,2);printf("N%c de jogadas: %d  ",167, tentativas = 10,167);
		    do{
		    	fflush(stdin);
		    	
		    	antes = pontuacao;
		    	gotoxy(13,8);printf(" %d                 ", pontuacao);
		    	
		    	tecla = cursor_matriz(troca,&lin_m,&col_m,&linha, &coluna);
				 /*Essa função captura as posições que o usuário escolheu para a troca.
				  O usuário precisa escolher duas coordenadas, Ex:(0,1) e (9,9), 
				  para serem trocadas pela função troca_pos*/
		    	
		    	if(tecla != ESC){
		    		
		    		troca_pos(matriz,troca,&lin_m, &col_m,pontuacao);   //troca os caracteres escolhidos
					pinta_matriz(matriz,40,4,10);						// pinta uma nova matriz pois pode ter ocorrido alguma alteração na mesma
					
					do{
			 
		      			pontuacao+=verifica_pontuacao(matriz); // Deve ser chamada antes da embaralha pois houve uma troca de caracteres antes
		      			existe = embaralha_matriz(matriz);
		      			/* Enquanto a função "embaralha" estiver retornando TRUE é preciso chamar a função " verifica puntuação
						pos o motivo de trocar um caracter de lugar pode forma um ou vários IFPBs, mas não se pode embaralhar todos
						,até que não reste formação de IFPB, pois o usuário perderia pontos que não seriam considerados.
						 Após embaralhar, automaticamente, é preciso chamar a função verifica_pontuação() para contabilizar se
						houver nova fomação de IFPB*/
		      			pinta_matriz(matriz,40,4,10); /* Sempre que se chama alguma função que modifica a matriz
						   							é preciso chamar essa função*/
		    
					}while( existe == TRUE); 
						
					if(antes == pontuacao && pontuacao >= 2)
						pontuacao-=2;
					
					gotoxy(48,2);printf("N%c de jogadas: %d  ", 167, tentativas -= 1);
					gotoxy(13,8);printf(" %d                     ", pontuacao);	
		    	}
	    		   			
		    }while(tecla != ESC && tentativas != 0);
	    }
	    
	    existe = FALSE; 
	    if(tecla != ESC){
	    	
	    	for(i=0;i < 3 && existe == FALSE;i++){
	    	
	    		if(pontuacao > pontos[i] && existe == FALSE){
	    			
	    			aux_pts=0;
	    			if(i == 0 && pontos[i] != 0){
	    				//...................................
						
					  strcpy(aux,nomes[i]);
					  aux_pts = pontos[i];
						//...................................

				      strcpy(nomes[i+2],nomes[i+1]);
					  pontos[i+2] = pontos[i+1];
						//...................................
						
					  strcpy(nomes[i+1],aux);
					  pontos[i+1] = aux_pts;
							
	    			}else if(i == 1){
	    				
	    				strcpy(nomes[i+1],nomes[i]);
	    				pontos[i+1] = pontos[i];
	    			}
	    			
					for(j=0;j<strlen(nome);j++)
	    			nomes[i][j] = nome[j];
	    					
		    		nomes[i][j]= '\0';
		    		pontos[i] = pontuacao;
		    		existe = TRUE;		
	    		}
	    		
	   		}
	    		
		   	textcolor(10);
		   	
		   	gotoxy(6,13);printf("+.+.+.+.+ Ranking +.+.+.+.+");
		   	if(pontos[0]!=0){
				gotoxy(3,15);printf("1. %s.", nomes[0]);gotoxy(32,15);printf("pts: %d", pontos[0]);
			}else{
				gotoxy(5,15);printf("Nao ha pontuacoes no momento!");
			}
			if(pontos[1]!=0){
				gotoxy(3,16);printf("2. %s.", nomes[1]);gotoxy(32,16);printf("pts: %d", pontos[1]);
			}
			if(pontos[2]!=0){
				gotoxy(3,17);printf("3. %s.", nomes[2]);gotoxy(32,17);printf("pts: %d", pontos[2]);
			}
			textcolor(15);
					
		   	do{
				gotoxy(10,20);printf("Comecar um novo jogo?(S/N)");gotoxy(78,22);
				escolha = toupper(getch());	
			}while(escolha != 'N' && escolha != 'S' && escolha != ESC);
		}		
		
	}while(escolha == 'S' && tecla != ESC);	
    
}
