#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <string.h>
#include <sys/time.h>
#include <conio.h>
#include <math.h>

# define N 8
# define TIRADES 50
# define NIVELL 6
#define COMODINS 5


/**
* Prints the game board matrix with colors representing player tokens.
*
* @param m The game board matrix to be printed.
* @param colors Array representing the colors chosen by players.
*/
void imprimeix(char m[N][N], int colors[2]);


/**
* Prompts the user to choose the language for the game and sets the selected language.
* Prints language selection instructions and animations.
*
* @param idioma Pointer to store the selected language code.
*/
//void triar_idioma(int *idioma);


/**
* Prompts the user to choose the game mode and sets the selected mode.
* Prints game mode selection instructions and animations.
*
* @param idioma Language code indicating the desired language for text and animations.
* @param modejoc Pointer to store the selected game mode.
*/
//void mode_joc(int idioma,int *modejoc);


/**
* Prompts the user to choose the game style and sets the selected style.
* Prints game style selection instructions and animations.
*
* @param idioma Language code indicating the desired language for text and animations.
* @param esticjoc Pointer to store the selected game style.
*/
//void estil_joc(int idioma, int *esticjoc);


/**
* Prompts the user to input player names and stores them in an array.
* Allows the user to enter different names for each player.
* If playing against the CPU, one of the names will be "CPU".
*
* @param idioma Language code indicating the desired language for text and animations.
* @param noms Array to store the names of players.
* @param modejoc The selected game mode.
*/
//void noms_jug(int idioma,  char noms[2][40], int modejoc);


/**
* Prompts the user to input the number of rounds or games to play and stores the value.
* Validates the input to ensure it is a single-digit odd number.
* Re-prompts the user if the input is not valid.
*
* @param idioma Language code indicating the desired language for text and animations.
* @param punts Pointer to store the number of rounds or games.
*/
//void num_de_partides(int idioma,int *punts);


/**
* Prompts the user to choose the game difficulty and returns the selected level.
* Validates the input to ensure it is a single-digit number between 0 and 4.
* Re-prompts the user if the input is not valid.
*
* @param idioma Language code indicating the desired language for text and animations.
* @return The selected game difficulty level.
*/
//int dificultat_joc(int idioma);


/**
* Prompts the user to choose a color for a player and returns the selected color.
* Validates the input to ensure it is a single-digit number between 1 and 6.
* Re-prompts the user if the input is not valid.
*
* @param noms The name of the player for whom the color is being chosen.
* @param idioma Language code indicating the desired language for text and instructions.
* @return The selected color for the player.
*/
//int escollir_color(char noms[40], int idioma);


/**
* Prompts the user to choose a color for each player and stores the selected colors.
* Ensures that each player has a different color.
*
* @param idioma Language code indicating the desired language for text and instructions.
* @param noms Array containing the names of players.
* @param colors Array to store the selected colors for each player.
*/
//void triar_colors(int idioma, char noms[2][40], int colors[2]);


/**
* Simulates rolling dice for each player to determine the starting player.
* Prints the results of each dice roll and announces the starting player.
* If both players roll the same number, rolls the dice again.
*
* @param jugador_inici Pointer to store the player who starts the game.
* @param idioma Language code indicating the desired language for text and instructions.
*/
//void tirar_dau(int *jugador_inici, int idioma);


/**
* Prompts the user to choose the starting player or randomly selects one if the user chooses so.
* Validates the user input and handles incorrect selections.
* Announces the chosen starting player.
*
* @param jugador_inici Pointer to store the chosen starting player.
* @param idioma Language code indicating the desired language for text and instructions.
* @param noms Array containing the names of players.
*/
//void triar_jugador(int *jugador_inici,int idioma, char noms[2][40])


/**
* Initializes the game board with empty cells and sets the top index for each column.
*
* @param tauler The game board matrix to be initialized.
* @param top_cols Array storing the top index for each column, indicating the next available row for placing a token.
*/
void inicia_tauler(char tauler[N][N], int top_cols[N]);


/**
* Updates the count of consecutive tokens for the current player after making a move.
*
* @param ratlla Array storing the count of consecutive tokens for each player.
* @param torn The current player's turn.
* @param tauler The game board matrix.
* @param top_cols Array storing the top index for each column.
* @param j The column index where the last move was made.
*/
void recompte(int ratlla[2], int torn,char tauler[N][N], int top_cols, int j);


/**
* Executes a player's move based on the game difficulty and player input.
*
* @param torn The current player's turn.
* @param idioma The language setting for displaying prompts.
* @param noms Array storing the names of the players.
* @param dificultat The game difficulty level.
* @return The column index where the player made the move.
*/
//int executar_tirada(int torn, int idioma, char noms[2][40], int dificultat);


/**
* Executes a player's move by placing a token in the specified column of the game board.
*
* @param torn The current player's turn.
* @param tauler The game board represented as a 2D array.
* @param top_cols Array representing the top row index of each column where tokens can be placed.
* @param idioma The language setting for displaying prompts.
* @param ratlla Array storing the maximum number of consecutive tokens for each player.
* @param noms Array storing the names of the players.
* @param dificultat The game difficulty level.
* @param colors Array storing the colors chosen by each player.
* @param comodins Array storing the number of wildcard tokens each player has.
* @param comodins_restants Array storing the number of wildcard tokens remaining for each player.
* @param estiljoc The game style setting.
* @param modejoc The game mode setting.
*/
void tirada(int torn, char tauler[N][N], int top_cols[N], int idioma, int ratlla[2], char noms[2][40], int dificultat,
            int colors[2], int comodins[2][COMODINS], int comodins_restants[2], int estiljoc, int modejoc);


            /**
* Allows a player to choose a wildcard token and specifies its application.
*
* @param comodi Pointer to the variable storing the chosen wildcard token.
* @param idioma The language setting for displaying prompts.
* @param tauler The game board represented as a 2D array.
* @param top_cols Array representing the top row index of each column where tokens can be placed.
* @param torn The current player's turn.
* @param dificultat The game difficulty level.
* @param comodins Array storing the number of wildcard tokens each player has.
* @param comodins_restants Array storing the number of wildcard tokens remaining for each player.
*/
void triar_comodi(int *comodi, int idioma, char tauler[N][N], int top_cols[N], int torn, int dificultat,
                  int comodins[2][COMODINS], int comodins_restants[2]);


                  /**
* Simulates the rolling of a die and executes the corresponding action based on the result.
*
* @param dado The result of rolling the die.
* @param idioma The language setting for displaying prompts.
* @param tauler The game board represented as a 2D array.
* @param top_cols Array representing the top row index of each column where tokens can be placed.
* @param torn The current player's turn.
* @param ratlla Array storing the number of tokens in a row for each player.
* @param noms Array storing the names of the players.
* @param dificultat The game difficulty level.
* @param colors Array storing the colors of the players.
* @param comodins Array storing the number of wildcard tokens each player has.
* @param comodins_restants Array storing the number of wildcard tokens remaining for each player.
* @param modejoc The game mode.
*/
void dau(int dado, int idioma, char tauler[N][N], int top_cols[N], int torn, int ratlla[2], char noms[2][40],
         int dificultat, int colors[2],int comodins[2][COMODINS],int comodins_restants[2], int modejoc);


/**
* Applies the effect of a power-up to the game board and game state.
*
* @param comodi The power-up to be applied.
* @param idioma The language setting for displaying prompts.
* @param tauler The game board represented as a 2D array.
* @param top_cols Array representing the top row index of each column where tokens can be placed.
* @param torn The current player's turn.
* @param ratlla Array storing the number of tokens in a row for each player.
* @param noms Array storing the names of the players.
* @param dificultat The game difficulty level.
* @param colors Array storing the colors of the players.
* @param comodins Array storing the number of wildcard tokens each player has.
* @param comodins_restants Array storing the number of wildcard tokens remaining for each player.
* @param modejoc The game mode.
*/
void aplicar_comodi(int comodi, int idioma, char tauler[N][N], int top_cols[N], int torn, int ratlla[2], char noms[2][40],
                    int dificultat, int colors[2], int comodins[2][COMODINS], int comodins_restants[2], int modejoc);


/**
* Manages a single game round, including player turns, game board updates, and determining the winner.
*
* @param jugador_inici The player who starts the game round.
* @param partides Pointer to the total number of rounds played.
* @param partides_guanyades Array storing the number of rounds won by each player.
* @param idioma The language setting for displaying prompts.
* @param noms Array storing the names of the players.
* @param modejoc The game mode.
* @param dificultat The game difficulty level.
* @param colors Array storing the colors of the players.
* @param estiljoc The game style.
* @param empate Pointer to the number of tied rounds.
* @return The ID of the winning player or the starting player in case of a tie.
*/
int partida(int jugador_inici,int *partides, int partides_guanyades[2], int idioma, char noms[2][40], int modejoc,
            int dificultat, int colors[2],int estiljoc, int *empate);
