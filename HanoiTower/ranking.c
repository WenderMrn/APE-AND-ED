#include "lib.h"


int ranking(tlista *lista,tplayer player){
	int pos=0, saida=-2, i;
	
	printSquarShadow(16,3,2,1,255,7,1,8);
	printSquare(16,3,2,21,4,4,255);
	
	color(WHITE, 4);
	gowrite(43,2,"RANKING");
	
	saida = getPos(*lista,player,&pos);
	
	if(saida == 0 ){	
		inserir(&(*lista),player,1);
	}
	else if(saida == 1){
		saida=0;
		saida = inserir(&(*lista),player,pos);
		
		if(saida == 0){ /*saída igual a zero indica	 que a lista/
					  / esta cheia e é preciso remover o ultimo*/
			remov(&(*lista),TAMLISTA);
			inserir(&(*lista),player,pos);
		}
	}

	if(statusLista(*lista)==1){
		color(1, 7);
		gowrite(37,12,"No scores currently!");
		color(BLACK, WHITE);
	}
	else{
		exibeLista(*lista,20,5,1,7);
	}
	
	color(BLACK, WHITE);
	getch();
}

void rankingOut(tlista lista){
	
	printSquarShadow(16,3,2,1,255,7,1,8);
	printSquare(16,3,2,21,4,4,255);
	
	color(WHITE, 4);
	gowrite(43,2,"RANKING");
	
	if(statusLista(lista)==1){
		color(1, 7);
		gowrite(37,12,"No scores currently!");
		color(BLACK, WHITE);
	}
	else{
		exibeLista(lista,20,5,1,7);
	}
	
	color(BLACK, WHITE);
	getch();
}

int getPos(tlista lista, tplayer player, int *pos ){
	int i;
	
	if( lista.tam == 0 ) return 0;
	
	for(i=0; i < lista.tam+1;i++){
		if(player.score > lista.score[i]){
			*pos = i+1;
			return 1;
		}
	}
	
	return -1;
}

int inserir(tlista *lista, tplayer player, int pos){
	int  i=0;
	
	if( lista->tam == 3) return 0;
	
	for(i= lista->tam-1; i >= pos-1; i--){
		lista->score[i+1] = lista->score[i];
		strcpy(lista->name[i+1],lista->name[i]);
	}
	
	strcpy(lista->name[pos-1], player.name);
	lista->score[pos-1] = player.score;
	
	(lista->tam)++;
	
	return 1;         
}

int remov(tlista *lista, int pos){
	int i=0;
	
	if( lista->tam == 0 ||(pos < 1 || pos > TAMLISTA))
		 return 0;
	
	for(i= lista->tam-1; i >= pos-1; i--){
		lista->score[i] = lista->score[i+1];
		strcpy(lista->name[i],lista->name[i+1]);
	}
	
	(lista->tam)--;
	
	return 1;
}

int statusLista(tlista lista){
	
	if(lista.tam == 0) return 1;
	return 0; 
}

void exibeLista(tlista lista, int distLeft, int distTop, int corText, int corBack){
	int i;
	
	textcolor(corText);
	textbackground(corBack);
	
	for( i= 0; i < lista.tam; i++){
		gotoxy(distLeft,distTop+i);
		printf(" %s  ",lista.name[i]);
		
		gotoxy(63,distTop+i);
		printf("%d pts ",lista.score[i] );
	}	
}

void criarLista(tlista *lista){
	int i=0;
	
	for(i=0; i < TAMLISTA;i++)
		lista->score[i] = 0;
	
	lista->tam = 0;		
}
