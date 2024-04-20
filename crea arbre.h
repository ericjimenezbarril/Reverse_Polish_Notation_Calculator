#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <string.h>
# define N 8
# define NIVELL 6


typedef struct node {
	struct node* *fills;     //dynamic array of pointers to Node
	int n_fills;             //dynamic array size
	char tauler[N][N];
	int top[N];              //To find out where we have the last file of each counter (7 the last, 0 at the top of all)
	int valor;               //The node value (F. Heurística)
	int nivell;
} Node;


/**

* Determines if a winning condition is met at a given position for a specific player.

* @param tauler The game board matrix.

* @param fila Row where the last move was made.

* @param col Column where the last move was made.

* @param torn Player turn number to check for a win.

* @return The maximum count of consecutive tokens found in any direction.

*/
int guanyar (char tauler[N][N], int fila, int col, int torn);


/**

* Performs a move on the game board.

* @param tauler The game board matrix.

* @param fila Row index for the move.

* @param col Column index for the move.

* @param nivell Level of the game indicating whose turn it is.

*/
void RealitzarTirada(char tauler[N][N],int fila, int col, int nivell);


/**

* Calculates which column to place a token in for a given child node.

* @param p Pointer to the parent node.

* @param index Index of the child to calculate the column for.

* @return Column index where the token should be placed.

*/
int CalculaColumna(Node *p, int index);


/**

* Counts the number of viable moves (children) for a given board state.

* @param t The game board matrix.

* @return Number of viable moves.

*/
int NumDeFills(char t[N][N]);


/**

* Creates a new node in the game tree.

* @param pare Pointer to the parent node.

* @param numDeFill Index of the child to create.

* @param nivell Level of the game indicating the depth of the node.

* @return Pointer to the newly created node.

*/
Node *creaNode(Node *pare, int numDeFill,int profunditat);


/**

* Creates one level of game tree nodes.

* @param pare Pointer to the parent node.

* @param nivell Current level of the game tree to create.

*/
void crea1Nivell(Node *pare,int profunditat);


/**

* Recursively builds a game tree from a root node.

* @param arrel Pointer to the root node.

*/
void creaArbre(Node *arrel);


/**

* Simulates a CPU move in the game.

* @param tauler Game board matrix.

* @param top_cols Array indicating the topmost free row in each column.

* @param ratlla Array to count the number of tokens in a row.

* @param colors Array of player colors.

*/
void tirada_cpu(char tauler[N][N], int top_cols[N], int ratlla[2], int colors[2], int idioma);


/**

* Recursively deletes a game tree starting from the root node.

* @param arrel Pointer to the root node to delete.

*/
void EsborrarArbre(Node *arrel);


/**

* Copies the content of one game board to another.

* @param tauler1 Destination matrix where the board is copied to.

* @param tauler2 Source matrix from which the board is copied.

*/
void replica_tauler(char tauler1[N][N], char tauler2[N][N]);


/**

* Copies the top columns from one array to another.

* @param top_cols1 Destination array for the top columns.

* @param top_cols2 Source array from which top columns are copied.

*/
void replica_top_cols(int top_cols1[N], int top_cols2[N]);

