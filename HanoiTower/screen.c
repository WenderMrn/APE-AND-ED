#include "lib.h"

void screen(){

	color(BLACK,WHITE);
	clrscr();
	
	printSquare(8,8,8,9,7,7,255);
	color(BLACK,7);
	gowrite(30,9,"TOWER OF HANOI - The Game");
	
	gotoxy(35, 14);
	color(0, 7);
	loading();
	
	gowrite(75,24,"");
	
	color(WHITE,RED);
	printSquare(10,10,12,12,1,WHITE,255);
	progressBar(10,12,10,RED,7,176,100);
	
		//PASSO 01
	color(0, 15);
	clrscr();
	
	header();
	
	printHaste(22,10,12);
	printHaste(40,10,12);
	printHaste(58,10,12);
	printBase(4,22,74);

	color(4, 4);
	printDisc(16,19,6,219);
	color(6, 6);
	printDisc(15,20,5,219);
	color(1, 1);
	printDisc(14,21,4,219);
	
	_sleep(500);
	//PASSO 02
	color(0, 15);
	clrscr();
	
	header();
	
	printHaste(22,10,12);
	printHaste(40,10,12);
	printHaste(58,10,12);
	printBase(4,22,74);
	
	color(4, 4);
	printDisc(16,8,6,219);
	color(6, 6);
	printDisc(15,20,5,219);
	color(1, 1);
	printDisc(14,21,4,219);
	
	_sleep(500);
	//PASSO 03
	
	color(0, 15);
	clrscr();
	
	header();
	
	printHaste(22,10,12);
	printHaste(40,10,12);
	printHaste(58,10,12);
	printBase(4,22,74);
	
	color(4, 4);
	printDisc(34,8,6,219);
	color(6, 6);
	printDisc(15,8,5,219);
	color(1, 1);
	printDisc(14,21,4,219);
	
	_sleep(500);
	//PASSO 04

	color(0, 15);
	clrscr();
	
	header();
	
	printHaste(22,10,12);
	printHaste(40,10,12);
	printHaste(58,10,12);
	printBase(4,22,74);
	
	color(4, 4);
	printDisc(52,8,6,219);
	color(6, 6);
	printDisc(33,8,5,219);
	color(1, 1);
	printDisc(14,21,4,219);
	
	_sleep(500);
	//PASSO 05
	
	color(0, 15);
	clrscr();
	
	header();
	
	printHaste(22,10,12);
	printHaste(40,10,12);
	printHaste(58,10,12);
	printBase(4,22,74);
	
	color(4, 4);
	printDisc(52,16,6,219);
	color(6, 6);
	printDisc(33,16,5,219);
	color(1, 1);
	printDisc(14,21,4,219);
	
	_sleep(500);
	//INVERTIDA
	color(0, 15);
	clrscr();
	
	header();
	
	printHaste(22,11,12);
	printHaste(40,11,12);
	printHaste(58,11,12);
	printBase(4,10,74);
	
	color(4, 4);
	printDisc(52,16,6,219);
	color(6, 6);
	printDisc(33,16,5,219);
	color(1, 1);
	printDisc(14,11,4,219);
	
	color(0, 15);
	gowrite(24,18, "OWER");
	gowrite(33,18, "OF");
	gowrite(47,18, "ANOI");
	
	_sleep(3500);
	clrscr();
}
