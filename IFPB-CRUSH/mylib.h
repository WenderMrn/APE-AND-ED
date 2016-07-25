#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio2.h.>

#define TRUE 1
#define FALSE 0

#define RIGHT 77
#define LEFT  75
#define DOWN  80
#define UP    72

#define ENTER 13
#define ESC 27
#define SPC 32
#define BS 8

char cursor_escolha(int linha1, int coluna1,int linha2, int coluna2);
void cabecalho();
void cabecalho_pequeno();
char play(char nomes[][22],int pontos[]);
char cursor_matriz(int troca[], int *posX, int *posY, int *linha, int *coluna);
void pinta_matriz(char matriz[][10], int lin, int col,int atraso);
char scanfstr(char string[],int linha, int coluna);
char troca_pos(char matriz[][10],int troca[], int *posX, int *posY, int pontuacao);
int verifica_pontuacao(char matriz[][10]);
int embaralha_matriz(char matriz[][10]);
int ranking(char nome[][22], int pontos[]);
void  preenche_matriz(char matriz[][10]);


