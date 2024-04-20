#include <stdio.h>
#include <stdlib.h>

#include "main.h"


/**
* Performs various actions related to game animations, player instructions, and text display in different languages.
*
* @param idioma Language code indicating the desired language for text and animations.
* @param torn Current turn in the game, influencing certain animations.
* @param comodins Array representing the availability of special tokens in the game.
* @param noms Array containing the names of players.
* @param jugador Index indicating the current player.
* @param guanyador Index indicating the winning player.
* @param partides Number of rounds or games played.
* @param colors Array representing the colors chosen by players.
* @param tornar_a_jugar Flag indicating whether players wish to play another round.
*/

void textos(int idioma, int torn, int comodins[2][COMODINS]);
void texto_triar_jugador(int idioma, char noms[2][40]);
void animacion_bomba();
void animacion_tsunami();
void animacion_hielo();
void instruccions(int idioma);
void animacion_4enralla();
void animacion_idiomas();
void animacion_mode_joc(int idioma);
void animacion_estil_joc(int idioma);
void animacion_jugador(int idioma, int jugador);
void animacion_partidas(int idioma);
void animacio_colors(int idioma);
void animacion_dificultat(int idioma);
void animacion_giro(int idioma);
void animacio_guanyar_ronda(int idioma,char noms[2][40], int guanyador, int partides,int colors[2]);
void animacio_guanyar_partida(int idioma,char noms[2][40], int guanyador, int partides,int colors[2]);
int animacio_tornar_a_jugar(int idioma, int tornar_a_jugar);
void animacio_despedida();
void animacio_empate(int idioma);
void animacio_punts();
void animacio_fletxes();
