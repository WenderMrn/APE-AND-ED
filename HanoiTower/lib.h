#include <stdio.h>
#include <stdlib.h>
#include <conio2.h>

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

/**********************************************************
 *       Essa pilha: usada na manipula��o dos discos      *
 **********************************************************/
 
#define NUMDISC 10

typedef int tdado;

typedef struct{
	tdado discos[NUMDISC];
	int topo;
}tpilha;

/***********************************************************
 *     Essa Lista: usada para salvar os nomes e os pontos  *
 *     dos tr�s melhores jogadores						   *
 ***********************************************************/
 
#define TAMLISTA 3
typedef char elem;

typedef struct{
	elem name[TAMLISTA][80]; // � uma matriz onde cada linha � uma nome
	int score[TAMLISTA];
	int tam;
}tlista; 



/***************************************************************************
*  strutura auxiliar para salvar a pontua��o e o nome do jogador corrente  *
***************************************************************************/

#define TAMNAME 80

typedef struct{
	char name[TAMNAME];
	int score;	
}tplayer;

void printHaste(int distanceLeft,int distanceTop, int sizehaste);
	/*************************************************************************************
	*	distanceLeft: distancia entre a Haste e a margem esquerda da tela                *
	*	distanceTop: distancia entre a Haste e do topo da tela							 *
	*	sizeAst: tamanho da Haste														 *	
	*																					 *
	*	valores testados e calculados:													 *				
	*	printHaste(17,10,12); posicao da torre 1.										 *
	*	printHaste(42,10,12); posicao da torre 2 										 *  			
	*   printHaste(67,10,12); posicao da torre 3										 *
******************************************************************************************/
void printBase(int distanceLeft,int distanceTop, int sizeBase);
	/*********************************************************************************************
	*	distanceLeft: distancia entre a base( uma linha horizontal) e a margem esquerda da tela  *
	*	distanceTop: distancia entre a basee e do topo da tela									 *
	*	sizeBase: tamanho da base 																 *
**************************************************************************************************/
void printDisc(int distanceLeft,int distanceTop, int sizeDisc, int caracter);
	/********************************************************************************************
	*	distanceLeft: distancia entre o disco e a margem esquerda da tela						*
	*	distanceTop: distancia entre o disco e o topo da tela									*
	*	sizeDisc: tamanho do disco(1 a 6). Quanto maior, maior ser� o disco desenhado			*
	*	caracter: tipo de caracter que ser� impresso 											*
*************************************************************************************************/
int moveCursor(tpilha pilha1, tpilha pilha2, tpilha pilha3, int posicaoTroca[],
 int *lin, int *col,int *escolhaTorre);
 
void criarPilha(tpilha *pilha);
	
void setDiscs(tpilha *pilha,int numDiscs);
	/**********************************************************************************
	* Essa fun��o inicializa uma pilha com discos, o n�mero de discos � determinado   *
	*  pelo par�mentro numDiscs, que pode receber valores de 1 a 6. Os discos s�o     * 
	* coloridos por default, mas caso queira mudar va na fun��o PrintDisc e altere os *
	* valores do textcolor(); dentro da switch().									  *
	***********************************************************************************/
int exibePilha(tpilha pilha);

int moveDisc(tpilha *pilha1,tpilha *pilha2, tpilha *pilha3,int posTroca[]);
	/********************************************************
	*	move os discos fisicamente de uma pilha para outra  *
	* 	� necessario passar todas as tr�s pilhas, pois n�o	*
	*	se sabe	qual ser� modificada.						*
	********************************************************/

int printTorre(tpilha pilha,int numPilha);
	/**********************************************************
	* Imprime uma torre na tela.							  *
	* O primeiro par�metro � a torre e o segundo � a posi��o, *
	* 1 para imrpimir uma torre na 							  *
	* primeira Haste, 2 na segunda e 3 na terceira 			  *
	***********************************************************/
void printSquarShadow(int distanceLeft, int distanceRight,int distanceTop,
int distanceDown,int textura, int corback, int desloc, int corShadow);
	/**************************************************************************** 
	* Essa fun��o pinta janelas com sombra. O primeira par�metro � a dist�ncia  *
	*  da esquerda(int distanceLeft), o segundo da direita(int distanceRight), 	*
	*  o terceiro de cima(int distanceTop), o quarto debaixo(distanceDown),		*
	* o 5 parametro � a textura da janela(int textura), o sexto � a cor da 		*
	* janela(int corback), o tamnho da sombra(int desloc) e a cor da sombra		*
	*  (int corShadow) .  														*
	*****************************************************************************/
void printSquar(int distanceLeft, int distanceRight,int distanceTop,
int distanceDown, int cortext,int corback, int textura);
	/**********************************************************************************
	* semelhante a fun��o printSquarShadow(), no entanto n�o possui sombra na janela  *
	***********************************************************************************/
	
//-------------------------------------------------------------//
//           Fun��es para manipula��o da lista do ranking	   //
//-------------------------------------------------------------//
int ConfQuit();
int funcPlay(tlista *lista);
int OpcaoSelec();
void boxInfoPartida(int nivel, int MinJogadas, int jogadasRealizadas, int score,  char name[] );
int verificaTorreCompleta(tpilha pilha2, tpilha pilha3, int qtdDisc);
char getInfoPlayer(char name[]);


int inserir(tlista *lista, tplayer player, int pos);
int ranking(tlista *lista,tplayer player);
void rankingOut();
int remov(tlista *lista, int pos);
void exibeLista(tlista lista, int distLeft, int distTop, int corText,
int corBack);
void criarLista(tlista *lista);

//---------------------------------------//
//              OTHERS FUNCTIONS          //
//---------------------------------------//
void gowrite(int x, int y, char text[140]);
void header();
void loading();
void footer();
void progressBar(int distLeft, int distTop,int distRight,int corBack, int corText, int simb, int time);
  


