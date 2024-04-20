#include <stdio.h>
#include <stdlib.h>
#include <time.h>

# define N 8
# define NIVELL 6


/**
* Checks for potential immediate wins on the board.
*
* @param tauler The game board matrix.
* @param top_cols Array indicating the topmost free row in each column.
*
* @return A score indicating potential wins; negative for player 1, positive for player 2.
*/
int posible_guanyar_directe(char tauler[N][N], int top_cols[N]);


/**
* Sets a winner based on the board configuration.
*
* @param tauler The game board matrix.
* @param top_cols Array indicating the topmost free row in each column.
*
* @return A score reflecting the set of configurations leading to a win.
*/
int set_guanyador(char tauner[N][N], int top_cols[N]);


/**
* Evaluates the board focusing on the center columns.
*
* @param tauler The game board matrix.
* @param top_cols Array indicating the topmost free row in each column.
*
* @return A score based on the occupation of central columns.
*/
int tirs_centrats(char tauler[N][N], int top_cols[N]);


/**
* Calculates a heuristic value for the board state.
*
* @param p Pointer to the node representing the current game state.
*
* @return Heuristic value of the node.
*/
int Heuristica(Node * p);


/**
* Returns the minimum value in an array.
*
* @param i Number of elements in the array.
* @param v Array of integers.
*
* @return Minimum value found in the array.
*/
int minim(int i, int v[i]);


/**
* Returns the maximum value in an array.
*
* @param i Number of elements in the array.
* @param v Array of integers.
*
* @return Maximum value found in the array.
*/
int maxim(int i, int v[i]);


/**
* Chooses the best child node based on the heuristic values.
*
* @param p Pointer to the parent node.
*
* @return Index of the chosen child node.
*/
int EscollirFill(Node *p);

/**
* Implements the Minimax algorithm to determine the optimal move in a game tree.
*
* @param p Pointer to the current node in the game tree.
*
* @return The optimal value for the current node, calculated using the Minimax algorithm.
*/

int MiniMax(Node *p);
