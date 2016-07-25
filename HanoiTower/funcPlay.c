#include "lib.h"

int funcPlay(tlista *lista){
	tplayer player;
	char name[TAMNAME];
	int posicao[2],test=0;
	int lin=15,col=7,escolhaTorre = 1; //comeca por default na torre 1
	int opcao;
	int played=0, level=1,discs = 3, moves = 7,score=0;
	tpilha pilha1,pilha2,pilha3;
	char escolha, tecla;
	
	escolha = getInfoPlayer(name); //Exibe uma caixa para capturar o nome do jogador
	if(escolha == ESC)return;
	
	criarPilha(&pilha1);
	criarPilha(&pilha2);
	criarPilha(&pilha3);
	
	clrscr();
	color(BLACK, WHITE);
	
   setDiscs(&pilha1,discs);

	do{
	  	clrscr();	
	  	fflush(stdin);
	  	boxInfoPartida(level,moves,played, score, name);
	   
	  	color(BLACK, WHITE);
	   	
	   gotoxy(2,24);
		printf("Use arrow keys [ %c %c ] / R - reset level / ESC - EXIT ",27, 26);
		
		/**********************************
		* Atualiza as torres graficamente *
		***********************************/   		
		printHaste(17,10,12);
	   printHaste(42,10,12);
	   printHaste(67,10,12);
	   printBase(4,22,76);
	   	
		printTorre(pilha1,1);
		printTorre(pilha2,2);
		printTorre(pilha3,3);
		
		test = moveCursor(pilha1,  pilha2,  pilha3, posicao,&lin,&col,&escolhaTorre);
		
		if(test == 1){
			played += moveDisc(&pilha1,&pilha2,&pilha3,posicao);		
		}
		else if(test == 'R' || test == 'r'){
			printSquarShadow(20,13,11,9,255,RED,1,8);
			
			color(WHITE, RED);
			gowrite(23,13,"Do you really want to reset the level? (Y/N)");
			
			color(BLACK, WHITE);
			
			do{
				tecla = toupper(getch());	
			}while(tecla != 'Y' && tecla != 'N' && tecla != ESC);
			
			if(tecla == 'Y'){
				played = 0;
				criarPilha(&pilha1);
				criarPilha(&pilha2);
				criarPilha(&pilha3);
				setDiscs(&pilha1,discs);	
			}		
		}
		else if(test == ESC){
			escolha = ESC;
		} 
		
		if(played >= moves)
			if(verificaTorreCompleta(pilha2,pilha3,discs)==1){
		 		clrscr();
		 		
				if(level != 8){
					gotoxy(32,7);printf("Congratulations!!");
					gotoxy(23,8);printf("Do you want to start the next level? (Y/N)");	
				}
		
				score += (discs * 90) - (played - moves);
		 		boxInfoPartida(level,moves,played, score, name);
					
			   color(BLACK, WHITE);
				   	
				printHaste(17,10,12);
			   printHaste(42,10,12);
			   printHaste(67,10,12);
			   printBase(4,22,76);
			    
			   printTorre(pilha1,1);
				printTorre(pilha2,2);
				printTorre(pilha3,3);
				
				if(level != 8){
					do{
						tecla = toupper(getch());
						
					}while(tecla != 'N' && tecla != 'Y' && tecla != ESC);
			
					if( tecla == 'N' || tecla == ESC){
						strcpy(player.name, name);
						player.score = score;
						
						ranking(&(*lista),player);
						return 1;
					}
					else{
						played = 0;
						criarPilha(&pilha1);
						criarPilha(&pilha2);
						criarPilha(&pilha3);
						setDiscs(&pilha1,discs+=1);
						moves = (moves*2)+1;
						level++;	
					}	
				}
				else{
					printSquarShadow(20,20,10,10,255,RED,1,8);
					color(WHITE, RED);
					
					gowrite(32, 11, "Congratulations");
					gowrite(25, 12, "You win all levels of the game!");
					getch();
					
					strcpy(player.name, name);
					player.score = score;
					
					color(BLACK, WHITE);
					ranking(&(*lista),player);
					
					return 1;
				}	
			}
   }while(escolha != ESC && level <= 8);
   
   color(BLACK, WHITE);
	system("cls");
      
   if(escolha == ESC)
		return 0;
}
