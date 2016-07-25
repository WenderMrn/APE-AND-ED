#include "lib.h"

void color(int txtcolor, int backcolor){
	textcolor(txtcolor);
	textbackground(backcolor);
}

void gowrite(int x, int y, char text[200]){
     gotoxy(x, y);
     printf(text);
}

void header(){
	color(0, 15);
	gowrite(40,2,"CSTSI");
	gowrite(26,3,"Estrutura de Dados - IFPB 2014.1");
	gowrite(30,4,"Tower of Hanoi - The Game");
}

void loading(){
	int i;
	
	_sleep(140);
	printf("P");
	_sleep(140);
	printf("L");
	_sleep(140);
	printf("E");
	_sleep(140);
	printf("A");
	_sleep(140);
	printf("S");
	_sleep(140);
	printf("E");
	_sleep(140);
	printf(" ");
	_sleep(140);
	printf("W");
	_sleep(140);
	printf("A");
	_sleep(140);
	printf("I");
	_sleep(140);
	printf("T");
	_sleep(140);
	
	for(i = 1; i <= 3; i++){
		printf(".");
		_sleep(250);
	}
}

void footer(){
	
	color(0, 15);
	gotoxy(3,23);
	putchar(184);
	printf("Tower Of Hanoi v3.3 - 2014");
	gowrite(3, 24, "Developed by Wender Mariano, Rayssa Freitas and Leonardo Bernardo.");
}

void progressBar(int distLeft, int distTop,int distRight,int corBack, int corText, int simb, int time){
	int i=0;
	
	color(corText,corBack);
	
	for(i=distLeft;i < (80-distRight);i++){
		gotoxy(i,distTop);printf("%c",simb);	
		_sleep(time);
	}	
}
