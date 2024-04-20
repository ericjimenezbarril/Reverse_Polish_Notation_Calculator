
#include "main.h"
#include "grafics.h"
/// 4 EN RALLA ///
void animacion_4enralla(){
        printf("\t\t\t\t\t\033[0;31m          ___             ___   ___         ___\n");
        printf("\t\t\t\t\t|  |     |    |\\   |     |   | |   |  \\  / |   |\n");
        printf("\t\t\t\t\t|__|     |___ | \\  |     |___| |___|   \\/  |___|\n");
        printf("\t\t\t\t\t   |     |    |  \\ |     |\\    |   |   /   |   |\n");
        printf("\t\t\t\t\t   |     |___ |   \\|     | \\   |   |  /    |   |\n\n\n");

        printf("\t\t\t\t   \033[0;32m          ___             ___   ___  ____            ___\n");
        printf("\t\t\t\t   |  |     |    |\\   |     |   | |   |  |   |    |    |   |\n");
        printf("\t\t\t\t   |__|     |___ | \\  |     |___| |___|  |   |    |    |___|\n");
        printf("\t\t\t\t      |     |    |  \\ |     |\\    |   |  |   |    |    |   |\n");
        printf("\t\t\t\t      |     |___ |   \\|     | \\   |   |  |   |___ |___ |   |\n\n\n");

        printf("\t\t\t\t  \033[0;36m     _______                       ___   _____      \n");
        printf("\t\t\t\t |  |     |    |\\   |      /\\       |   | |     |  \\      /\\      /    \n");
        printf("\t\t\t\t |__|     |    | \\  |     /  \\      |___| |     |   \\    /  \\    /  \n");
        printf("\t\t\t\t    |     |    |  \\ |    /____\\     |\\    |     |    \\  /    \\  /    \n");
        printf("\t\t\t\t    |   __|___ |   \\|   /      \\    | \\   |_____|     \\/      \\/      \n\n\n");
        ;printf("\033[0m");
    ///PONER ESTO
    sleep(2);
    ///QUITAR ESTO
    //usleep(5);
    printf("\033[2J\033[H");
}

///  ANIMACIÓN IDIOMAS ///
void animacion_idiomas(){
    printf("\033[0m");

    printf("\t\t\t\t __________________________________________\n");
    printf("\t\t\t\t|                                          |\n");
    printf("\t\t\t\t| \t       \033[0;31m1: CAS\033[0;33mTELLA\033[0;31mNO\033[0m    \t   | \n");
    printf("\t\t\t\t|                                          |\n");
    printf("\t\t\t\t| \t       \033[0;31m2:\033[0;33m C\033[0;31mA\033[0;33mT\033[0;31mA\033[0;33mL\033[0;31mA\033[0m  \t\t   |\n");
    printf("\t\t\t\t|                                          |\n");
    printf("\t\t\t\t| \t       \033[1;34m3: E\033[0;31mN\033[0mGL\033[0;31mI\033[1;34mSH\033[0m    \t\t   |\n");
    printf("\t\t\t\t|__________________________________________|\n");

    printf("\033[0m");

}



/// INSTRUCCIONS
void instruccions(int idioma){
        if(idioma==1){printf("\033[0;31m");
            printf("\t-----  |\\    |   -----  -----  |-----|   |     | |-----|  |-----| -----    -----     |\\    |  |-----| -----\n");
            printf("\t  |    | \\   |   |        |    |     |   |     | |        |         |     |     |    | \\   |  |       |   \n");
            printf("\t  |    |  \\  |    ----    |    |-----/   |     | |        |         |     |     |    |  \\  |  |---|    ---- \n");
            printf("\t  |    |   \\ |        |   |    |     \\   |     | |        |         |     |     |    |   \\ |  |            |\n");
            printf("\t__|__  |    \\|   -----    |    |     |   |_____| |-----|  |-----| __|__   |_____|    |    \\|  |-----|  ----- \n");
            printf("\n\n\tLas instrucciones se mantendran hasta que clique cualquier boton");
            printf("\033[1;31m");
            printf("\n\tEl objetivo del juego es conseguir hacer una linea de 4 de tus fichas, ya sea vertical, horizontal o diagonal.\n");
            printf("\tGanara (cada ronda) el primero que lo consiga, siempre y cuando no se llene antes el tablero.\n");
            printf("\tEl juego lo gana el que gane mas rondas.\n");
            printf("\tEn caso de que en cualquier ronda un jugador quiera tirar aleatorio, puede pulsar '0'\n");
            printf("\tLos modos de dificultad solo determinan el tiempo que tiene para realizar cada lanzamiento\n");
            printf("\tPodra elegir dos modos de juego, para jugar 1vs1 o para enfrentarse a una máquina (CPU)\n");
            printf("\tEn el modo alternativo, dispondrá de %d comodines que le otorgaran distintos potenciadores\n", COMODINS);
            printf("\tEn este modo, cuando quiera tirar una ficha, PULSE SOLO EL NUMERO (NO ENTER), en caso contrario\n");
            printf("\tLe aparecerá \033[0;31mun error\033[1;31m, no se preocupe, podra seguir jugando");
            printf("\033[0m");}
         if(idioma==2){printf("\033[1;32m");
            printf("\t-----  |\\    |   -----  -----  |-----|   |     | |-----|  |-----| -----    -----     |\\    |   -----\n");
            printf("\t  |    | \\   |   |        |    |     |   |     | |        |         |     |     |    | \\   |   |   \n");
            printf("\t  |    |  \\  |    ----    |    |-----/   |     | |        |         |     |     |    |  \\  |    ---- \n");
            printf("\t  |    |   \\ |        |   |    |     \\   |     | |        |         |     |     |    |   \\ |        |\n");
            printf("\t__|__  |    \\|   -----    |    |     |   |_____| |-----|  |-----| __|__   |_____|    |    \\|    ----- \n");
            printf("\n\n\tLes instruccions es mantindran fins que cliqui qualsevol boto");
            printf("\033[0;32m");
            printf("\n\tL objectiu del joc es aconseguir fer una linia de 4 de les fitxes, ja sigui vertical, horitzontal o diagonal.\n");
            printf("\tGuanyara (cada ronda) el primer que ho aconsegueixi, sempre que no s ompli abans el tauler.\n");
            printf("\tEl joc el guanya el que guanyi mes rondes.\n");
            printf("\tEn cas que en qualsevol ronda un jugador vulgui llencar aleatori, pot pulsar '0'\n");
            printf("\tEls modes de dificultat nomes determinen el temps que te per realitzar cada llancament\n");
            printf("\tPodra triar dos modes de joc, per jugar 1vs1 o per enfrontar-se a una maquina (CPU)\n");
            printf("\tAl mode alternatiu, disposareu de %d comodins que us atorgaran diferents potenciadors\n", COMODINS);
            printf("\tEn aquest mode, quan vulgui llencar una fitxa, PREMI NOMES EL NUMERO (NO ENTER), en cas contrari\n");
            printf("\tLi apareixera \033[0;31mun error\033[0;32m,no us preocupeu, podreu continuar jugant");
            printf("\033[0m");}
        if(idioma==3){printf("\033[0;36m");
            printf("\t-----  |\\    |   -----  -----  |-----|   |     | |-----|   -----  -----    -----     |\\    |   -----\n");
            printf("\t  |    | \\   |   |        |    |     |   |     | |           |      |     |     |    | \\   |   |   \n");
            printf("\t  |    |  \\  |    ----    |    |-----/   |     | |           |      |     |     |    |  \\  |    ---- \n");
            printf("\t  |    |   \\ |        |   |    |     \\   |     | |           |      |     |     |    |   \\ |        |\n");
            printf("\t__|__  |    \\|   -----    |    |     |   |_____| |-----|     |    __|__   |_____|    |    \\|    ----- \n");
            printf("\n\n\tThe instructions will continue until you click any button");
            printf("\033[1;36m");
            printf("\n\tThe objective of the game is to make a line of 4 of your pieces, whether vertical, horizontal or diagonal..\n");
            printf("\tThe first person to get it will win (each round), as long as the board is not filled first.\n");
            printf("\tThe game is won by whoever wins the most rounds.\n");
            printf("\tIn case in any round a player wants to roll random, he can press '0'\n");
            printf("\tThe difficulty modes only determine the time you have to perform each throw\n");
            printf("\tYou can choose two game modes, to play 1vs1 or to face a machine (CPU)\n");
            printf("\tIn alternative mode, you will have %d wild cards that will grant you different power-ups\n", COMODINS);
            printf("\tIn this mode, when you want to throw a token, PRESS ONLY THE NUMBER (NOT ENTER), otherwise\n");
            printf("\tYou will see \033[0;31man error\033[1;36m, don't worry, you can continue playing");
            printf("\033[0m");}
    while(!kbhit()){}
    printf("\033[2J\033[H");
}
///ANIMACIÓN MODE JOC ///
void animacion_mode_joc(int idioma){
            ///TRIEM EL MODE DE JOC
    printf("\033[0;35m");
    printf("\t\t GGGG     AAAAA    MMM   MMM    EEEE     MMM   MMM    OOO    DDDD    EEEE\n");
    printf("\t\tG    G    A   A    M  M M  M    E        M  M M  M   O   O   D   D   E   \n");
    printf("\t\tG         AAAAA    M   M   M    EEE      M   M   M   O   O   D   D   EEE \n");
    printf("\t\tG    G    A   A    M       M    E        M       M   O   O   D   D   E   \n");
    printf("\t\t GGGG     A   A    M       M    EEEE     M       M    OOO    DDDD    EEEE\n");
    printf("\n\n\t\t\t\t O      O                  O       [CPU]      \n");
    printf("\t\t\t\t/|\\ VS /|\\                /|\\ VS    /|\\     \n");
    printf("\t\t\t\t/ \\    / \\                / \\       / \\ \n\n\n");

        if(idioma==1){printf("\033[0;31m");
            printf("\t\tA que modo de juego quieres jugar?\n\t\tPara jugar '1vs1' pulsa 1, para jugar contra la CPU pulsa 2: ");
           printf("\033[0m");}
         if(idioma==2){printf("\033[0;32m");
            printf("\t\tA quin mode de joc vols jugar?\n\t\tPer jugar '1vs1' prem 1, per jugar contra la CPU prem 2: ");
            printf("\033[0m");}
        if(idioma==3){printf("\033[1;36m");
            printf("\t\tWhat game mode do you want to play?\n\t\tTo play '1vs1' press 1, to play against the CPU press 2: ");
            printf("\033[0m");}
}
/////////////////////////////////////////////
///ANIMACIÓN VERSIO JOC ///
void animacion_estil_joc(int idioma){
            ///TRIEM LA VERSIO DE JOC
    printf("\033[1;35m");
    printf("\t\t GGGG     AAAAA    MMM   MMM    EEEE      V       V   EEEE   RRRR     SSSS   IIIII    OOO     N   N\n");
    printf("\t\tG    G    A   A    M  M M  M    E          V     V    E      R   R    S        I     O   O    NN  N\n");
    printf("\t\tG         AAAAA    M   M   M    EEE         V   V     EEE    RRRR      SSS     I     O   O    N N N\n");
    printf("\t\tG    G    A   A    M       M    E            V V      E      R  R         S    I     O   O    N  NN\n");
    printf("\t\t GGGG     A   A    M       M    EEEE          V       EEEE   R   RR   SSSS   IIIII    OOO     N   N\n");
    printf("\n\n\t\t\t\t   \033[0;35mCLASSIC              ALTERNATIVE\n");
    printf("\t\t\t\t  \033[0m|\033[1;31mX\033[0m|\033[0;33m0\033[0m|\033[0;33m0\033[0m|\033[0;33m0\033[0m|            \033[1;31m*      \033[0;34m~     \033[1;36m* \n");
    printf("\t\t\t\t  \033[0m|\033[1;31mX\033[0m|\033[1;31mX\033[0m|\033[0;33m0\033[0m|\033[1;31mX\033[0m|          \033[0;31m[\033[1;31mBOOM\033[0;31m]  \033[0;34m~~~  \033[1;36m*-|-*\n");
    printf("\t\t\t\t  \033[0m|\033[0;33m0\033[0m|\033[1;31mX\033[0m|\033[0;33m0\033[0m|\033[0;33m0\033[0m|         \033[0;31m [    ] \033[0;34m~~~~~   \033[1;36m*\n\n\n");

/// TEXTOS EN LOS IDIOMAS ///
        if(idioma==1){printf("\033[0;31m");
            printf("\t\tA que version de juego quieres jugar?\n\t\tPara jugar 'Clasico' pulsa 1, para jugar 'Alternativo' pulsa 2: ");
           printf("\033[0m");}
         if(idioma==2){printf("\033[0;32m");
            printf("\t\tA quina versio de joc vols jugar?\n\t\tPer jugar 'Classic' prem 1, per jugar 'Alternatiu' prem 2: ");
            printf("\033[0m");}
        if(idioma==3){printf("\033[1;36m");
            printf("\t\tWhat game version do you want to play?\n\t\tTo play 'Classic' press 1, to play 'Alternative' press 2: ");
            printf("\033[0m");}
}
/////////////////////////////////////////////
void animacion_jugador(int idioma, int jugador){

    if(jugador==1){
         ///NOMBRE JUGADOR 1 ///
        printf("\033[0;34m");
        printf("\t\t/----    |            /\\      \\     /   /-----|    /----       111\n");
        printf("\t\t|    |   |           /  \\      \\   /    |          |    |      111\n");
        printf("\t\t|----    |          /____\\      \\ /     |---|      |____/      111\n");
        printf("\t\t|        |         /      \\      |      |          |    \\      111\n");
        printf("\t\t|        |_____   /        \\     |      \\-----|    |     \\     111\n\n\n");

            if(idioma==1){printf("\033[0;31m");
                printf("\t\tIntroduce el nombre del jugador 1: ");
               printf("\033[0m");}
             if(idioma==2){printf("\033[0;32m");
                printf("\t\tIntrodueix el nom del jugador 1: ");
                printf("\033[0m");}
            if(idioma==3){printf("\033[1;36m");
                printf("\t\tEnter the name of player 1: ");
                printf("\033[0m");}
    }
    else if(jugador==2){
        /// /// /// ////// ////// ///
         ///NOMBRE JUGADOR 1 ///
        printf("\033[0;34m");
        printf("\t\t/----    |            /\\      \\     /   /-----|    /----       222  222\n");
        printf("\t\t|    |   |           /  \\      \\   /    |          |    |      222  222\n");
        printf("\t\t|----    |          /____\\      \\ /     |---|      |____/      222  222\n");
        printf("\t\t|        |         /      \\      |      |          |    \\      222  222\n");
        printf("\t\t|        |_____   /        \\     |      \\-----|    |     \\     222  222\n\n\n");

            if(idioma==1){printf("\033[0;31m");
                printf("\t\tIntroduce el nombre DIFERENTE para el jugador 2: ");
               printf("\033[0m");}
             if(idioma==2){printf("\033[0;32m");
                printf("\t\tIntrodueix el nom DIFERENT per el jugador 2: ");
                printf("\033[0m");}
            if(idioma==3){printf("\033[1;36m");
                printf("\t\tEnter a DIFFERENT name for player 2: ");
                printf("\033[0m");}
    }
}

///ANIMACIÓN MODE JOC ///
void animacion_partidas(int idioma){
            ///TRIEM EL MODE DE JOC
    printf("\033[1;35m");
    printf("\t\tN   N  [[ ]]     GGGG     AAAAA    MMM   MMM    EEEE   SSSS\n");
    printf("\t\tNN  N           G    G    A   A    M  M M  M    E      S   \n");
    printf("\t\tN N N           G         AAAAA    M   M   M    EEE     SSS\n");
    printf("\t\tN  NN           G    G    A   A    M       M    E          S\n");
    printf("\t\tN   N            GGGG     A   A    M       M    EEEE   SSSS \n");

/// TEXTOS EN LOS IDIOMAS ///
        if(idioma==1){printf("\033[0;31m");
            printf("\n\n\t\tDecide al mayor de cuantas partidas quieres jugar (numero impar y maximo 9): ");
           printf("\033[0m");}
         if(idioma==2){printf("\033[0;32m");
            printf("\n\n\t\tDecideix al major de quantes partides vols jugar (nombre imparell i maxim 9): ");
            printf("\033[0m");}
        if(idioma==3){printf("\033[1;36m");
            printf("\n\n\t\tDecide the largest of how many games you want to play (odd number and maximum 9): ");
            printf("\033[0m");}
}
/////////////////////////////////////////////
void animacion_dificultat(int idioma){
///DIBUJO RELOJ
    printf("\t\t\t\t\t  __________________________________________________ \n");
    printf("\t\t\t\t\t /_________________________________________________/ | \n");
    printf("\t\t\t\t\t||                                                || |\n") ;
    printf("\t\t\t\t\t||                                                || |\n");
    printf("\t\t\t\t\t|| \033[0;32m  _______    _______      _______    _______ \033[0m  || |\n");
    printf("\t\t\t\t\t|| \033[0;32m |       |  |       |    |       |  |       | \033[0m || |\n");
    printf("\t\t\t\t\t|| \033[0;32m |       |  |       |    |       |  |       | \033[0m || |\n");
    printf("\t\t\t\t\t|| \033[0;32m |_______|  |_______|  o |_______|  |_______|  \033[0m|| |\n");
    printf("\t\t\t\t\t|| \033[0;32m |       |  |       |  o |       |  |       | \033[0m || |\n");
    printf("\t\t\t\t\t|| \033[0;32m |       |  |       |    |       |  |       |  \033[0m|| |\n");
    printf("\t\t\t\t\t|| \033[0;32m |_______|  |_______|    |_______|  |_______| \033[0m || |\n");
    printf("\t\t\t\t\t||                                                || |\n");
    printf("\t\t\t\t\t||________________________________________________||/\n");
    printf("\t\t\t\t\t \\-------------------------------------------------/\n\n\n");

/// /// /// /// /// ///

/// TEXTOS EN LOS IDIOMAS ///
        if(idioma==1){printf("\033[0;31m");
            printf("Elige el nivel del juego ('0': sin tiempo, 1': 1 min/tirada, '2': 30 seg/tirada, '3': 15 seg/tirada, '4': 7.5 seg/tirada)\n");
            printf("Nivel: ");
           printf("\033[0m");}
         if(idioma==2){printf("\033[0;32m");
            printf("Escull el nivell del joc ('0': sense temps, 1': 1 min/tirada, '2': 30 seg/tirada, '3': 15 seg/tirada, '4': 7.5 seg/tirada)\n");
            printf("Nivell: ");
            printf("\033[0m");}
        if(idioma==3){printf("\033[1;36m");
            printf("Choose the game level ('0': without time, 1': 1 min/round, '2': 30 sec/round, '3': 15 sec/round, '4': 7.5 sec/round)\n");
            printf("Level: ");
            printf("\033[0m");}

}
/////////////////////////////////////////////
///ELECCIÓ COLORS DE CADA JUGADOR
void animacio_colors(int idioma){
    printf("\n\n");
    printf("\t\t\t\t \033[0;31mO      \033[0;32m[CPU]   \033[0;33m   O      \033[0;34m[CPU]     \033[0;35m O  \033[0;36m    [CPU]  \n");
    printf("\t\t\t\t\033[0;31m/|\\     \033[0;32m /|\\  \033[0;33m    /|\\  \033[0;34m    /|\\  \033[0;35m    /|\\  \033[0;36m    /|\\     \n");
    printf("\t\t\t\t\033[0;31m/ \\     \033[0;32m / \\   \033[0;33m   / \\  \033[0;34m    / \\   \033[0;35m   /|\\   \033[0;36m   /|\\ \033[0m\n\n\n");

    /// TEXTOS EN LOS IDIOMAS ///
    if (idioma==1){
    printf("\t\tDecide el color con el que juega cada jugador.\n");
    printf("\t\tLos colores disponibles son:\n");
    printf("\t\t\033[0;31mROJO: \033[0m1     \033[0;32mVERDE: \033[0m2     \033[0;34mAZUL: \033[0m3     \033[0;33mAMARILLO: \033[0m4     \033[0;35mMORADO: \033[0m5     \033[0;36mCIAN: \033[0m6\n");
    }
    else if (idioma==2){
    printf("\t\tDecideix el color amb que juga cada jugador.\n");
    printf("\t\tEls colors disponibles son:\n");
    printf("\t\t\033[0;31mVERMELL: \033[0m1     \033[0;32mVERD: \033[0m2     \033[0;34mBLAU: \033[0m3     \033[0;33mGROC: \033[0m4     \033[0;35mMORAT: \033[0m5     \033[0;36mCIAN: \033[0m6\n");
    }
    else if (idioma==3){
    printf("\t\tDecide the color each player plays with.\n");
    printf("\t\tAvailable colors are:\n");
    printf("\t\t\033[0;31mRED: \033[0m1 \033[0;32mGREEN: \033[0m2 \033[0;34mBLUE: \033[0m3 \033[0;33mYELLOW: \033[0m4 \033[0;35mPURPLE: \033[0m5 \033[0;36mCYAN: \033[0m6\n");
    }
}
/////////////////////////////////////////////


void texto_triar_jugador(int idioma, char noms[2][40]){
    ///DIBUJO DADO
    printf("\t\t\t\t\t     ____________________________\n");
    printf("\t\t\t\t\t    /                          // | \n");
    printf("\t\t\t\t\t   /       \033[0;31m O \033[0m                //  | \n");
    printf("\t\t\t\t\t  /              \033[0;31m  O \033[0m        //   | \n");
    printf("\t\t\t\t\t /__________________________//    | \n");
    printf("\t\t\t\t\t||                          ||    |\n") ;
    printf("\t\t\t\t\t||                          ||  \033[0;31m 0\033[0m|\n");
    printf("\t\t\t\t\t||                          || \033[0;31m0 \033[0m |\n");
    printf("\t\t\t\t\t||     \033[0;31m  O       O  \033[0m        ||    |\n");
    printf("\t\t\t\t\t||                          ||  \033[0;31m 0\033[0m|\n");
    printf("\t\t\t\t\t||      \033[0;31m O       O \033[0m         ||\033[0;31m 0 \033[0m |\n");
    printf("\t\t\t\t\t||                          ||    |\n");
    printf("\t\t\t\t\t||      \033[0;31m O       O  \033[0m        ||   /\n");
    printf("\t\t\t\t\t||                          ||  /\n");
    printf("\t\t\t\t\t||                          || /\n");
    printf("\t\t\t\t\t||__________________________||/\n");
    printf("\t\t\t\t\t \\--------------------------/\n\n\n");

/// /// /// /// /// ///

    /// TEXTOS EN LOS IDIOMAS ///
    if (idioma==1){printf("\033[0;31m");
        printf("\t\tDecide que jugador empieza el primer juego (despues, empieza quien gana).\n");
        printf("\t\tSeleccione '1' para que empiece el jugador %s, '2' para que empiece el jugador %s, '0' para hacer sorteo: ", noms[0], noms[1]);
        printf("\033[0m");}

    else if (idioma==2){printf("\033[0;32m");
        printf("\t\tDecideix quin jugador comenca el primer joc (despres, comenca qui guanya).\n");
        printf("\t\tSeleccioneu '1' perque comenci el jugador %s, '2' perque comenci el jugador %s, '0' per fer sorteig: ", noms[0], noms[1]);
        printf("\033[0m");}
    else if (idioma==3){printf("\033[0;36m");
        printf("\t\tDecide which player starts the first game (then who wins starts).\n");
        printf("\t\tSelect '1' for player %s to start, '2' for player %s to start, '0' for it to be drawn: ", noms[0], noms[1]);
        printf("\033[0m");}
}
/// /// /// /// /// /// /// /// /// /// /// ///




/// TRIAR COMODINS TEXTOS ///
void textos(int idioma, int torn, int comodins[2][COMODINS]){
    ///TENEMOS 16 TIPOS (PARA LOS COLORES)
    ///1.TEXTOS EN IDIOMAS///
    if (comodins[torn-1][0]==1 && comodins[torn-1][1]==1 && comodins[torn-1][2]==1 && comodins[torn-1][3]==1){
    if(idioma==1) printf("\t\t\tQuieres usar comodin? Recuerda:\033[1;32m0: 'No', 1:'BOMBA: Eliminas una columna',\n\t\t\t2: 'TSUNAMI: Eliminas todo el top', 3:'HELADA: Congelas el turno de tu adversario 1 turno',\n\t\t\t4: 'GIRO: Rotamos todo el tablero a la izquierda', 5:'Dado'\033[0m\n");
    else if (idioma==3) printf("\t\t\tDo you want to use wildcard? Remember:\033[1;32m0: 'No', 1: 'BOMB: You delete a column',\n\t\t\t2: 'TSUNAMI: You eliminate the entire top', 3:'FROST: Freeze your opponent's turn for 1 turn',\033[1;32m\n\t\t\t4: 'TURN: We rotate the whole board to the left', 5:'Dice'\033[0m\n");
    else if (idioma==2) printf("\t\t\tVoleu utilitzar el comodi? Recordeu:\033[1;32m0: 'No', 1: 'BOMBA: Elimines una columna',\n\t\t\t2: 'TSUNAMI: Elimines tot el top', 3:'GELADA: Congela el torn del teu oponent durant 1 torn',\033[1;32m\n\t\t\t4: 'GIR: Rotem tot el tauler a la esquerra', 5:'Dau'\033[0m\n");
   }////////////////////////////////////////////
   ///2.TEXTOS EN IDIOMAS///
    if (comodins[torn-1][0]==0 && comodins[torn-1][1]==1 && comodins[torn-1][2]==1 && comodins[torn-1][3]==1){
    if(idioma==1) printf("\t\t\tQuieres usar comodin? Recuerda:\033[1;32m0: 'No', \033[1;31m1:'BOMBA: Eliminas una columna',\033[1;32m\n\t\t\t2:'TSUNAMI: Eliminas todo el top', 3:'HELADA: Congelas el turno de tu adversario 1 turno',\n\t\t\t4: 'GIRO: Rotamos todo el tablero a la izquierda', 5:'Dado'\033[0m\n");
    else if (idioma==3) printf("\t\t\tDo you want to use wildcard? Remember:\033[1;32m0: 'No', \033[1;31m1: 'BOMB: You delete a column',\033[1;32m\n\t\t\t2:'TSUNAMI: You eliminate the entire top', 3:'FROST: Freeze your opponent's turn for 1 turn',\033[1;32m\n\t\t\t4: 'TURN: We rotate the whole board to the left', 5:'Dice'\033[0m\n");
    else if (idioma==2) printf("\t\t\tVoleu utilitzar el comodí? Recordeu:\033[1;32m0: 'No',\033[1;31m 1:'BOMBA: Elimines una columna',\033[1;32m\n\t\t\t2:'TSUNAMI: Elimines tot el top', 3:'GELADA: Congela el torn del teu oponent durant 1 torn',\033[1;32m\n\t\t\t4: 'GIR: Rotem tot el tauler a la esquerra', 5:'Dau'\033[0m\n");
   }////////////////////////////////////////////
   ///3.TEXTOS EN IDIOMAS///
    if (comodins[torn-1][0]==1 && comodins[torn-1][1]==0 && comodins[torn-1][2]==1 && comodins[torn-1][3]==1){
    if(idioma==1) printf("\t\t\tQuieres usar comodin? Recuerda:\033[1;32m0: 'No', 1:'BOMBA: Eliminas una columna',\033[1;31m\n\t\t\t2:'TSUNAMI: Eliminas todo el top',\033[1;32m 3:'HELADA: Congelas el turno de tu adversario 1 turno',\n\t\t\t4: 'GIRO: Rotamos todo el tablero a la izquierda', 5:'Dado'\033[0m\n");
    else if (idioma==3) printf("\t\t\tDo you want to use wildcard? Remember:\033[1;32m0: 'No',1: 'BOMB: You delete a column',\033[1;31m\n\t\t\t2:'TSUNAMI: You eliminate the entire top',\033[1;32m 3:'FROST: Freeze your opponent's turn for 1 turn',\033[1;32m\n\t\t\t4: 'TURN: We rotate the whole board to the left', 5:'Dice'\033[0m\n");
    else if (idioma==2) printf("\t\t\tVoleu utilitzar el comodí? Recordeu:\033[1;32m0: 'No', 1:'BOMBA: Elimines una columna',\033[1;31m\n\t\t\t2:'TSUNAMI: Elimines tot el top',\033[1;32m 3:'GELADA: Congela el torn del teu oponent durant 1 torn',\033[1;32m\n\t\t\t4: 'GIR: Rotem tot el tauler a la esquerra', 5:'Dau'\033[0m\n");
   }////////////////////////////////////////////
   ///4.TEXTOS EN IDIOMAS///
    if (comodins[torn-1][0]==0 && comodins[torn-1][1]==0 && comodins[torn-1][2]==1 && comodins[torn-1][3]==1){
    if(idioma==1) printf("\t\t\tQuieres usar comodin? Recuerda:\033[1;32m0: 'No',\033[1;31m 1:'BOMBA: Eliminas una columna',\n\t\t\t2:'TSUNAMI: Eliminas todo el top',\033[1;32m 3:'HELADA: Congelas el turno de tu adversario 1 turno',\n\t\t\t4: 'GIRO: Rotamos todo el tablero a la izquierda', 5:'Dado'\033[0m\n");
    else if (idioma==3) printf("\t\t\tDo you want to use wildcard? Remember:\033[1;32m0: 'No',\033[1;31m1: 'BOMB: You delete a column',\n\t\t\t2:'TSUNAMI: You eliminate the entire top',\033[1;32m 3:'FROST: Freeze your opponent's turn for 1 turn',\033[1;32m\n\t\t\t4: 'TURN: We rotate the whole board to the left', 5:'Dice'\033[0m\n");
    else if (idioma==2) printf("\t\t\tVoleu utilitzar el comodí? Recordeu:\t\033[1;32m0: 'No',\033[1;31m 1:'BOMBA: Elimines una columna',\n\t\t\t2:'TSUNAMI: Elimines tot el top',\033[1;32m t3:'GELADA: Congela el torn del teu oponent durant 1 torn',\033[1;32m\n\t\t\t4: 'GIR: Rotem tot el tauler a la esquerra',5:'Dau'\033[0m\n");
   }////////////////////////////////////////////
    ///5.TEXTOS EN IDIOMAS///
    if (comodins[torn-1][0]==1 && comodins[torn-1][1]==0 && comodins[torn-1][2]==0 && comodins[torn-1][3]==1){
    if(idioma==1) printf("\t\t\tQuieres usar comodin? Recuerda:\033[1;32m0: 'No', 1:'BOMBA: Eliminas una columna',\033[1;31m\n\t\t\t2:'TSUNAMI: Eliminas todo el top', 3:'HELADA: Congelas el turno de tu adversario 1 turno',\033[1;32m\n\t\t\t4: 'GIRO: Rotamos todo el tablero a la izquierda', 5:'Dado'\033[0m\n");
    else if (idioma==3) printf("\t\t\tDo you want to use wildcard? Remember:\033[1;32m0: 'No',1: 'BOMB: You delete a column',\033[1;31m\n\t\t\t2:'TSUNAMI: You eliminate the entire top', 3:'FROST: Freeze your opponent's turn for 1 turn',\033[1;32m\n\t\t\t4: 'TURN: We rotate the whole board to the left', 5: 'Dice'\033[0m\n");
    else if (idioma==2) printf("\t\t\tVoleu utilitzar el comodí? Recordeu:\033[1;32m0: 'No', 1:'BOMBA: Elimines una columna',\033[1;31m\n\t\t\t2:'TSUNAMI: Elimines tot el top', 3:'GELADA: Congela el torn del teu oponent durant 1 torn',\033[1;32m\n\t\t\t4: 'GIR: Rotem tot el tauler a la esquerra',5:'Dau'\033[0m\n");
   }////////////////////////////////////////////
   ///6.TEXTOS EN IDIOMAS///
    if (comodins[torn-1][0]==0 && comodins[torn-1][1]==0 && comodins[torn-1][2]==0 && comodins[torn-1][3]==1){
    if(idioma==1) printf("\t\t\tQuieres usar comodin? Recuerda:\033[1;32m0: 'No',\033[1;31m 1:'BOMBA: Eliminas una columna',\n\t\t\t2:'TSUNAMI: Eliminas todo el top', 3:'HELADA: Congelas el turno de tu adversario 1 turno',\033[1;32m\n\t\t\t4: 'GIRO: Rotamos todo el tablero a la izquierda', 5:'Dado'\033[0m\n");
    else if (idioma==3) printf("\t\t\tDo you want to use wildcard? Remember:\033[1;32m0: 'No',\033[1;31m1: 'BOMB: You delete a column',\n\t\t\t2:'TSUNAMI: You eliminate the entire top', 3:'FROST: Freeze your opponent's turn for 1 turn',\033[1;32m\n\t\t\t4: 'TURN: We rotate the whole board to the left', 5:'Dice'\033[0m\n");
    else if (idioma==2) printf("\t\t\tVoleu utilitzar el comodí? Recordeu:\033[1;32m0: 'No',\033[1;31m 1:'BOMBA: Elimines una columna',\n\t\t\t2:'TSUNAMI: Elimines tot el top', 3:'GELADA: Congela el torn del teu oponent durant 1 torn',\033[1;32m\n\t\t\t4: 'GIR: Rotem tot el tauler a la esquerra', 5:'Dau'\033[0m\n");
   }////////////////////////////////////////////
   ///7.TEXTOS EN IDIOMAS///
    if (comodins[torn-1][0]==1 && comodins[torn-1][1]==1 && comodins[torn-1][2]==0 && comodins[torn-1][3]==1){
    if(idioma==1) printf("\t\t\tQuieres usar comodin? Recuerda:\033[1;32m0: 'No', 1:'BOMBA: Eliminas una columna',\n\t\t\t2:'TSUNAMI: Eliminas todo el top',\033[1;31m 3:'HELADA: Congelas el turno de tu adversario 1 turno',\033[1;32m\n\t\t\t4: 'GIRO: Rotamos todo el tablero a la izquierda', 5: 'Dado'\033[0m\n");
    else if (idioma==3) printf("\t\t\tDo you want to use wildcard? Remember:\033[1;32m0: 'No', 1: 'BOMB: You delete a column',\n\t\t\t2:'TSUNAMI: You eliminate the entire top',\033[1;31m 3:'FROST: Freeze your opponent's turn for 1 turn',\033[1;32m\n\t\t\t4: 'TURN: We rotate the whole board to the left', 5:'Dice'\033[0m\n");
    else if (idioma==2) printf("\t\t\tVoleu utilitzar el comodí? Recordeu:\033[1;32m0: 'No', 1:'BOMBA: Elimines una columna',\n\t\t\t2:'TSUNAMI: Elimines tot el top',\033[1;31m 3:'GELADA: Congela el torn del teu oponent durant 1 torn',\033[1;32m\n\t\t\t4: 'GIR: Rotem tot el tauler a la esquerra', 5:'Dau'\033[0m\n");
   }////////////////////////////////////////////
   ///8.TEXTOS EN IDIOMAS///
    if (comodins[torn-1][0]==0 && comodins[torn-1][1]==1 && comodins[torn-1][2]==0 && comodins[torn-1][3]==1){
    if(idioma==1) printf("\t\t\tQuieres usar comodin? Recuerda:\033[1;32m0: 'No', \033[1;31m1:'BOMBA: Eliminas una columna',\033[1;32m\n\t\t\t2:'TSUNAMI: Eliminas todo el top',\033[1;31m 3:'HELADA: Congelas el turno de tu adversario 1 turno',\033[1;32m\n\t\t\t4: 'GIRO: Rotamos todo el tablero a la izquierda', 5: 'Dado'\033[0m\n");
    else if (idioma==3) printf("\t\t\tDo you want to use wildcard? Remember:\033[1;32m0: 'No', \033[1;31m1: 'BOMB: You delete a column',\033[1;32m\n\t\t\t2:'TSUNAMI: You eliminate the entire top',\033[1;31m 3:'FROST: Freeze your opponent's turn for 1 turn',\033[1;32m\n\t\t\t4: 'TURN: We rotate the whole board to the left', 5: 'Dice'\033[0m\n");
    else if (idioma==2) printf("\t\t\tVoleu utilitzar el comodí? Recordeu:\033[1;32m0: 'No',\033[1;31m 1:'BOMBA: Elimines una columna',\033[1;32m\n\t\t\t2:'TSUNAMI: Elimines tot el top',\033[1;31m 3:'GELADA: Congela el torn del teu oponent durant 1 torn',\033[1;32m\n\t\t\t4: 'GIR: Rotem tot el tauler a la esquerra', 5: 'Dau'\033[0m\n");
   }

    ///9.TEXTOS EN IDIOMAS///
    if (comodins[torn-1][0]==1 && comodins[torn-1][1]==1 && comodins[torn-1][2]==1 && comodins[torn-1][3]==0){
    if(idioma==1) printf("\t\t\tQuieres usar comodin? Recuerda:\033[1;32m0: 'No', 1:'BOMBA: Eliminas una columna',\n\t\t\t2: 'TSUNAMI: Eliminas todo el top', 3:'HELADA: Congelas el turno de tu adversario 1 turno',\033[1;31m\n\t\t\t4: 'GIRO: Rotamos todo el tablero a la izquierda',\033[1;32m 5:'Dado'\033[0m\n");
    else if (idioma==3) printf("\t\t\tDo you want to use wildcard? Remember:\033[1;32m0: 'No', 1: 'BOMB: You delete a column',\n\t\t\t2: 'TSUNAMI: You eliminate the entire top', 3:'FROST: Freeze your opponent's turn for 1 turn',\033[1;31m\n\t\t\t4: 'TURN: We rotate the whole board to the left',\033[1;32m 5:'Dice'\033[0m\n");
    else if (idioma==2) printf("\t\t\tVoleu utilitzar el comodi? Recordeu:\033[1;32m0: 'No', 1: 'BOMBA: Elimines una columna',\n\t\t\t2: 'TSUNAMI: Elimines tot el top', 3:'GELADA: Congela el torn del teu oponent durant 1 torn',\033[1;31m\n\t\t\t4: 'GIR: Rotem tot el tauler a la esquerra',\033[1;32m 5:'Dau'\033[0m\n");
   }////////////////////////////////////////////
   ///10.TEXTOS EN IDIOMAS///
    if (comodins[torn-1][0]==0 && comodins[torn-1][1]==1 && comodins[torn-1][2]==1 && comodins[torn-1][3]==0){
    if(idioma==1) printf("\t\t\tQuieres usar comodin? Recuerda:\033[1;32m0: 'No', \033[1;31m1:'BOMBA: Eliminas una columna',\033[1;32m\n\t\t\t2:'TSUNAMI: Eliminas todo el top', 3:'HELADA: Congelas el turno de tu adversario 1 turno',\033[1;31m\n\t\t\t4: 'GIRO: Rotamos todo el tablero a la izquierda',\033[1;32m 5:'Dado'\033[0m\n");
    else if (idioma==3) printf("\t\t\tDo you want to use wildcard? Remember:\033[1;32m0: 'No', \033[1;31m1: 'BOMB: You delete a column',\033[1;32m\n\t\t\t2:'TSUNAMI: You eliminate the entire top', 3:'FROST: Freeze your opponent's turn for 1 turn',\033[1;31m\n\t\t\t4: 'TURN: We rotate the whole board to the left',\033[1;32m\033[1;32m 5:'Dice'\033[0m\n");
    else if (idioma==2) printf("\t\t\tVoleu utilitzar el comodí? Recordeu:\033[1;32m0: 'No',\033[1;31m 1:'BOMBA: Elimines una columna',\033[1;32m\n\t\t\t2:'TSUNAMI: Elimines tot el top', 3:'GELADA: Congela el torn del teu oponent durant 1 torn',\033[1;31m\n\t\t\t4: 'GIR: Rotem tot el tauler a la esquerra', 5:'Dau'\033[0m\n");
   }////////////////////////////////////////////
   ///11.TEXTOS EN IDIOMAS///
    if (comodins[torn-1][0]==1 && comodins[torn-1][1]==0 && comodins[torn-1][2]==1 && comodins[torn-1][3]==0){
    if(idioma==1) printf("\t\t\tQuieres usar comodin? Recuerda:\033[1;32m0: 'No', 1:'BOMBA: Eliminas una columna',\033[1;31m\n\t\t\t2:'TSUNAMI: Eliminas todo el top',\033[1;32m 3:'HELADA: Congelas el turno de tu adversario 1 turno',\033[1;31m\n\t\t\t4: 'GIRO: Rotamos todo el tablero a la izquierda',\033[1;32m 5:'Dado'\033[0m\n");
    else if (idioma==3) printf("\t\t\tDo you want to use wildcard? Remember:\033[1;32m0: 'No',1: 'BOMB: You delete a column',\033[1;31m\n\t\t\t2:'TSUNAMI: You eliminate the entire top',\033[1;32m 3:'FROST: Freeze your opponent's turn for 1 turn',\033[1;31m\n\t\t\t4: 'TURN: We rotate the whole board to the left',\033[1;32m 5:'Dice'\033[0m\n");
    else if (idioma==2) printf("\t\t\tVoleu utilitzar el comodí? Recordeu:\033[1;32m0: 'No', 1:'BOMBA: Elimines una columna',\033[1;31m\n\t\t\t2:'TSUNAMI: Elimines tot el top',\033[1;32m 3:'GELADA: Congela el torn del teu oponent durant 1 torn', \033[1;31m\n\t\t\t4: 'GIR: Rotem tot el tauler a la esquerra',\033[1;32m 5:'Dau'\033[0m\n");
   }////////////////////////////////////////////
   ///12.TEXTOS EN IDIOMAS///
    if (comodins[torn-1][0]==0 && comodins[torn-1][1]==0 && comodins[torn-1][2]==1 && comodins[torn-1][3]==0){
    if(idioma==1) printf("\t\t\tQuieres usar comodin? Recuerda:\033[1;32m0: 'No',\033[1;31m 1:'BOMBA: Eliminas una columna',\n\t\t\t2:'TSUNAMI: Eliminas todo el top',\033[1;32m 3:'HELADA: Congelas el turno de tu adversario 1 turno',\033[1;31m\n\t\t\t4: 'GIRO: Rotamos todo el tablero a la izquierda',\033[1;32m 5:'Dado'\033[0m\n");
    else if (idioma==3) printf("\t\t\tDo you want to use wildcard? Remember:\033[1;32m0: 'No',\033[1;31m1: 'BOMB: You delete a column',\n\t\t\t2:'TSUNAMI: You eliminate the entire top',\033[1;32m 3:'FROST: Freeze your opponent's turn for 1 turn',\033[1;31m\n\t\t\t4: 'TURN: We rotate the whole board to the left',\033[1;32m 5:'Dice'\033[0m\n");
    else if (idioma==2) printf("\t\t\tVoleu utilitzar el comodí? Recordeu:\033[1;32m0: 'No',\033[1;31m 1:'BOMBA: Elimines una columna',\n\t\t\t2:'TSUNAMI: Elimines tot el top',\033[1;32m 3:'GELADA: Congela el torn del teu oponent durant 1 torn',\033[1;31m\n\t\t\t4: 'GIR: Rotem tot el tauler a la esquerra',\033[1;32m 5:'Dau'\033[0m\n");
   }////////////////////////////////////////////
    ///13.TEXTOS EN IDIOMAS///
    if (comodins[torn-1][0]==1 && comodins[torn-1][1]==0 && comodins[torn-1][2]==0 && comodins[torn-1][3]==0){
    if(idioma==1) printf("\t\t\tQuieres usar comodin? Recuerda:\033[1;32m0: 'No', 1:'BOMBA: Eliminas una columna',\033[1;31m\n\t\t\t2:'TSUNAMI: Eliminas todo el top', 3:'HELADA: Congelas el turno de tu adversario 1 turno',\033[1;31m\n\t\t\t4: 'GIRO: Rotamos todo el tablero a la izquierda',\033[1;32m 5:'Dado'\033[0m\n");
    else if (idioma==3) printf("\t\t\tDo you want to use wildcard? Remember:\033[1;32m0: 'No',1: 'BOMB: You delete a column',\033[1;31m\n\t\t\t2:'TSUNAMI: You eliminate the entire top', 3:'FROST: Freeze your opponent's turn for 1 turn',\033[1;31m\n\t\t\t4: 'TURN: We rotate the whole board to the left',\033[1;32m 5: 'Dice'\033[0m\n");
    else if (idioma==2) printf("\t\t\tVoleu utilitzar el comodí? Recordeu\033[1;32m0: 'No', 1:'BOMBA: Elimines una columna',\033[1;31m\n\t\t\t2:'TSUNAMI: Elimines tot el top', 3:'GELADA: Congela el torn del teu oponent durant 1 torn',\033[1;31m\n\t\t\t4: 'GIR: Rotem tot el tauler a la esquerra',\033[1;32m 5:'Dau'\033[0m\n");
   }////////////////////////////////////////////
   ///14.TEXTOS EN IDIOMAS///
    if (comodins[torn-1][0]==0 && comodins[torn-1][1]==0 && comodins[torn-1][2]==0 && comodins[torn-1][3]==0){
    if(idioma==1) printf("\t\t\tQuieres usar comodin? Recuerda:\033[1;32m0: 'No',\033[1;31m 1:'BOMBA: Eliminas una columna',\n\t\t\t2:'TSUNAMI: Eliminas todo el top', 3:'HELADA: Congelas el turno de tu adversario 1 turno',\033[1;31m\n\t\t\t4: 'GIRO: Rotamos todo el tablero a la izquierda',\033[1;32m 5:'Dado'\033[0m\n");
    else if (idioma==3) printf("\t\t\tDo you want to use wildcard? Remember:\033[1;32m0: 'No',\033[1;31m1: 'BOMB: You delete a column',\n\t\t\t2:'TSUNAMI: You eliminate the entire top', 3:'FROST: Freeze your opponent's turn for 1 turn',\033[1;31m\n\t\t\t4: 'TURN: We rotate the whole board to the left',\033[1;32m 5:'Dice'\033[0m\n");
    else if (idioma==2) printf("\t\t\tVoleu utilitzar el comodí? Recordeu:\033[1;32m0: 'No',\033[1;31m 1:'BOMBA: Elimines una columna',\n\t\t\t2:'TSUNAMI: Elimines tot el top', 3:'GELADA: Congela el torn del teu oponent durant 1 torn',\033[1;31m\n\t\t\t4: 'GIR: Rotem tot el tauler a la esquerra',\033[1;32m\033[1;32m 5:'Dau'\033[0m\n");
   }////////////////////////////////////////////
   ///15.TEXTOS EN IDIOMAS///
    if (comodins[torn-1][0]==1 && comodins[torn-1][1]==1 && comodins[torn-1][2]==0 && comodins[torn-1][3]==0){
    if(idioma==1) printf("\t\t\tQuieres usar comodin? Recuerda:\033[1;32m0: 'No', 1:'BOMBA: Eliminas una columna',\n\t\t\t2:'TSUNAMI: Eliminas todo el top',\033[1;31m 3:'HELADA: Congelas el turno de tu adversario 1 turno',\033[1;31m\n\t\t\t4: 'GIRO: Rotamos todo el tablero a la izquierda',\033[1;32m5: 'Dado'\033[0m\n");
    else if (idioma==3) printf("\t\t\tDo you want to use wildcard? Remember:\033[1;32m0: 'No', 1: 'BOMB: You delete a column',\n\t\t\t2:'TSUNAMI: You eliminate the entire top',\033[1;31m 3:'FROST: Freeze your opponent's turn for 1 turn',\033[1;31m\n\t\t\t4: 'TURN: We rotate the whole board to the left',\033[1;32m 5:'Dice'\033[0m\n");
    else if (idioma==2) printf("\t\t\tVoleu utilitzar el comodí? Recordeu:\033[1;32m0: 'No', 1:'BOMBA: Elimines una columna',\n\t\t\t2:'TSUNAMI: Elimines tot el top',\033[1;31m 3:'GELADA: Congela el torn del teu oponent durant 1 torn',\033[1;31m\n\t\t\t4: 'GIR: Rotem tot el tauler a la esquerra',\033[1;32m 5:'Dau'\033[0m\n");
   }////////////////////////////////////////////
   ///16.TEXTOS EN IDIOMAS///
    if (comodins[torn-1][0]==0 && comodins[torn-1][1]==1 && comodins[torn-1][2]==0 && comodins[torn-1][3]==0){
    if(idioma==1) printf("\t\t\tQuieres usar comodin? Recuerda:\033[1;32m0: 'No', \033[1;31m1:'BOMBA: Eliminas una columna',\033[1;32m\n\t\t\t2:'TSUNAMI: Eliminas todo el top',\033[1;31m 3:'HELADA: Congelas el turno de tu adversario 1 turno',\033[1;31m\n\t\t\t4: 'GIRO: Rotamos todo el tablero a la izquierda',\033[1;32m 5: 'Dado'\033[0m\n");
    else if (idioma==3) printf("\t\t\tDo you want to use wildcard? Remember:\033[1;32m0: 'No', \033[1;31m1: 'BOMB: You delete a column',\033[1;32m\n\t\t\t2:'TSUNAMI: You eliminate the entire top',\033[1;31m 3:'FROST: Freeze your opponent's turn for 1 turn',\033[1;31m\n\t\t\t4: 'TURN: We rotate the whole board to the left',\033[1;32m 5: 'Dice'\033[0m\n");
    else if (idioma==2) printf("\t\t\tVoleu utilitzar el comodí? Recordeu:\033[1;32m0: 'No',\033[1;31m 1:'BOMBA: Elimines una columna',\033[1;32m\n\t\t\t2:'TSUNAMI: Elimines tot el top',\033[1;31m 3:'GELADA: Congela el torn del teu oponent durant 1 torn',\033[1;31m\n\t\t\t4: 'GIR: Rotem tot el tauler a la esquerra',\033[1;32m 5: 'Dau'\033[0m\n");
   }
   ////////////////////////////////////////////

    if(idioma==1) printf("\t\t\tComodin: ");
    else if(idioma==2) printf("\t\t\tComodi: ");
    else if(idioma==3) printf("\t\t\tWildcard: ");
}
///////////////////////////////////////////////////

void animacion_bomba(){
            /// ANIMACIÓN BOMBA ///
            printf("\033[1;31m");
            printf("\t\t\t                     ***\n");
            printf("\t\t\t                       *\n");
            printf("\t\t\t                       | \n");
            printf("\t\t\t                      .-.\033[0m\n");
            printf("\t\t\t     ____________________________________\n");
            printf("\t\t\t   //                                    \\\\\n");
            printf("\t\t\t  //                                      \\\\\n");
            printf("\t\t\t //                                        \\\\\n");
            printf("\t\t\t//                                          \\\\\n");
            printf("\t\t\t||                                          ||\n");
            printf("\t\t\t||\033[1;31m  _____       _____                _____ \033[0m ||\n");
            printf("\t\t\t|| \033[1;31m|     |     /     \\    |\\    /|  |     |\033[0m ||\n");
            printf("\t\t\t|| \033[1;31m|     |    |       |   | \\  / |  |     | \033[0m||\n");
            printf("\t\t\t||\033[1;31m |_____/    |       |   |  \\/  |  |_____/ \033[0m||\n");
            printf("\t\t\t|| \033[1;31m|     \\    |       |   |      |  |     \\\033[0m ||\n");
            printf("\t\t\t|| \033[1;31m|     |    |       |   |      |  |     | \033[0m||\n");
            printf("\t\t\t|| \033[1;31m|_____|     \\_____/    |      |  |_____|\033[0m ||\n");
            printf("\t\t\t||                                          \033[0m||\n");
            printf("\t\t\t \\\\                                         //\n");
            printf("\t\t\t  \\\\                                       //\n");
            printf("\t\t\t   \\\\                                     //\n");
            printf("\t\t\t    \\\\___________________________________//\n\n\n");

        sleep(1);
}
void animacion_tsunami(){
/// ANIMACIÓN TSUNAMI ///
                printf("\033[0;34m");
                printf("\t             ~~~~~                       ~~~~~                          ~~~~~\n");
                printf("\t          ~~~~~~~~~~                   ~~~~~~~~~~                     ~~~~~~~~~~\n");
                printf("\t        ~~~~~~~~~~~~~~               ~~~~~~~~~~~~~~                 ~~~~~~~~~~~~~~ \n");
                printf("\t      ~~~~~~~~~~~~~~~~~~           ~~~~~~~~~~~~~~~~~~             ~~~~~~~~~~~~~~~~~~ \n");
                printf("\t    ~~~~~~~~~~~~~~~~~~~~~~       ~~~~~~~~~~~~~~~~~~~~~~         ~~~~~~~~~~~~~~~~~~~~~~\n");
                printf("\t  ~~~~~~~~~~~~~~~~~~~~~~~~~~   ~~~~~~~~~~~~~~~~~~~~~~~~~~     ~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                printf("\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

                /// ANIMACIÓN TSUNAMI ///
                printf("\t          ------- --------  |       |      /\\      |\\      /|  -------\n");
                printf("\t             |    |         |       |     /  \\     | \\    / |     |\n");
                printf("\t             |    |______   |       |    /    \\    |  \\  /  |     |\n");
                printf("\t             |           |  |       |   / -----\\   |   \\/   |     |\n");
                printf("\t             |    _______|  |_______|  /        \\  |        |  -------\n");
                printf("\033[0m");
sleep(1);
}
void animacion_hielo(){
            printf("\033[1;36m");
            printf("\t\t                               * \n");
            printf("\t\t                               |\n");
            printf("\t\t                            *--|--*\n");
            printf("\t\t                               |\n");
            printf("\t\t                      *--|--|--|--|--|--*\n");
            printf("\t\t                               |\n");
            printf("\t\t                   *--|--|--|--|--|--|--|--*\n");
            printf("\t\t                               |\n");
            printf("\t\t             *--|--|--|--|--|--|--|--|--|--|--|--*\n");
            printf("\t\t                               |\n");
            printf("\t\t       *--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--*\n");
            printf("\t\t                               |\n");
            printf("\t\t    *--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--*\n");
            printf("\t\t                               |\n");
            printf("\t\t       *--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--*\n");
            printf("\t\t                               |\n");
            printf("\t\t             *--|--|--|--|--|--|--|--|--|--|--*\n");
            printf("\t\t                               |\n");
            printf("\t\t                   *--|--|--|--|--|--|--|--*\n");
            printf("\t\t                               |\n");
            printf("\t\t                      *--|--|--|--|--|--*\n");
            printf("\t\t                               |\n");
            printf("\t\t                            *--|--*\n");
            printf("\t\t                               |\n");
            printf("\t\t                               *\n");
            printf("\033[0m");
            sleep(1);
}


void animacion_giro(int idioma){
    printf("\033[0;32m");

    if(idioma==1){
        printf("\t\t\t\t/----   -------      /----       /------\\ \n");
        printf("\t\t\t\t|    |     |         |    |      |      |   \n");
        printf("\t\t\t\t|          |         |____/      |      |     \n");
        printf("\t\t\t\t|   -\\     |         |    \\      |      |      \n");
        printf("\t\t\t\t\\___/   ___|___      |     \\     \\______/           \n\n\n");
    }

    else if(idioma==2){
        printf("\t\t\t\t/----   -------      /----  \n");
        printf("\t\t\t\t|    |     |         |    | \n");
        printf("\t\t\t\t|          |         |____/   \n");
        printf("\t\t\t\t|   -\\     |         |    \\   \n");
        printf("\t\t\t\t\\___/   ___|___      |     \\  \n\n\n");
    }

    else if(idioma==3){
                printf("\t\t\t\t-------   |       |   /----     |\\    |\n");
                printf("\t\t\t\t   |      |       |   |    |    | \\   |\n");
                printf("\t\t\t\t   |      |       |   |____/    |  \\  |\n");
                printf("\t\t\t\t   |      |       |   |    \\    |   \\ |\n");
                printf("\t\t\t\t   |      |_______|   |     \\   |    \\|\n");
    }

            printf("\t\t\t      *******************************        *\n");
            printf("\t\t\t    *********************************       ***\n");
            printf("\t\t\t  ***********************************      *****\n");
            printf("\t\t\t  *****                                   *******\n");
            printf("\t\t\t  *****                                  *********\n");
            printf("\t\t\t  *****                                    *****\n");
            printf("\t\t\t*********                                  *****\n");
            printf("\t\t\t *******                                   *****\n");
            printf("\t\t\t  *****      ***********************************\n");
            printf("\t\t\t   ***       *********************************\n");
            printf("\t\t\t    *        *******************************\033[0m\n\n\n");
            sleep(1);

}

void animacio_guanyar_ronda(int idioma,char noms[2][40], int guanyador, int partides,int colors[2]){

        /// TEXTOS EN LOS IDIOMAS ///
        if (idioma==1) printf("\t\t\t\033[1;32mJUGADOR %s HAS GANADO LA RONDA %d\033[0m\n",noms[guanyador-1],partides);
        else if (idioma==2) printf("\t\t\t\033[1;32mJUGADOR %s HAS GUANYAR LA RONDA %d\033[0m\n",noms[guanyador-1], partides);
        else if (idioma==3) printf("\t\t\t\033[1;32mPLAYER %s YOU HAVE WON THE ROUND %d\033[0m\n",noms[guanyador-1], partides);
        /// /// /// /// /// /// /// /// /// /// /// ///
        printf("\x1b[33m");
        printf("\t\t\t           *   *    *   *    *   *      \n");
        printf("\t\t\t           ** ***  *** ***  *** **        \n");
        printf("\t\t\t           ***********************          \n");

        printf("\t\t\t\t         \033[0;31m   %s\n\x1b[33m", noms[guanyador-1]);
        printf("\t\t\t           ***********************          \n");
        printf("\t\t\t           ***********************          \n");
        printf("\t\t\t           ***********************          \n");
        printf("\t\t\t            *********************          \n");
        printf("\t\t\t             *******************          \n");
        printf("\t\t\t              *****************          \n");
        printf("\t\t\t               ***************          \n");
        printf("\t\t\t                *************          \n");
        printf("\t\t\t                   *******          \n");
        printf("\t\t\t                     ***          \n");
        printf("\t\t\t                     ***          \n");
        printf("\t\t\t                    *****          \n");
        printf("\t\t\t                   *******          \n");
        printf("\t\t\t                  *********          \n");
        printf("\t\t\t             *******************          \n");
        printf("\t\t\t             *\033[0;31m*\x1b[33m*****\033[0;31m*\x1b[33m*\033[0;31m*\x1b[33m**\033[0;31m*\x1b[33m**\033[0;31m*\x1b[33m***          \n");
        printf("\t\t\t             **\033[0;31m*\x1b[33m*\033[0;31m*\x1b[33m*\033[0;31m*\x1b[33m**\033[0;31m*\x1b[33m**\033[0;31m**\x1b[33m*\033[0;31m*\x1b[33m**          \n");
        printf("\t\t\t             ***\033[0;31m*\x1b[33m*\033[0;31m*\x1b[33m***\033[0;31m*\x1b[33m**\033[0;31m*\x1b[33m**\033[0;31m*\x1b[33m***          \n");
        printf("\t\t\t             ******************* \033[0m         \n");
}

void animacio_guanyar_partida(int idioma,char noms[2][40], int guanyador, int partides,int colors[2]){


        printf("\033[2J\033[H");
        if(partides>2){//DOncs al acabar, partides s'acctualitza
            printf("\033[0;32m\n\n");
            printf("\t\t\t           *   *    *   *    *   *      \n");
            printf("\x1b[33m");
            printf("\t\t\t           ** ***  *** ***  *** **        \n");
            printf("\t\t\t           ***********************          \n");

            printf("\t\t\t\t         \033[0;31m   %s\n\x1b[33m", noms[guanyador-1]);
            printf("\t\t\t           ***********************          \n");
            printf("\t\t\t           ***********************          \n");
            printf("\t\t\t           ***********************          \n");
            printf("\t\t\t            *********************          \n");
            printf("\t\t\t             *******************          \n");
            printf("\t\t\t              *****************          \n");
            printf("\t\t\t               ***************          \n");
            printf("\t\t\t                *************          \n");
            printf("\t\t\t                   *******          \n");
            printf("\t\t\t                     ***          \n");
            printf("\t\t\t                     ***          \n");
            printf("\t\t\t                    *****          \n");
            printf("\t\t\t                   *******          \n");
            printf("\t\t\t                  *********          \n");
            printf("\t\t\t             *******************          \n");
            printf("\t\t\t             *\033[0;31m*\x1b[33m*****\033[0;31m*\x1b[33m*\033[0;31m*\x1b[33m**\033[0;31m*\x1b[33m**\033[0;31m*\x1b[33m***          \n");
            printf("\t\t\t             **\033[0;31m*\x1b[33m*\033[0;31m*\x1b[33m*\033[0;31m*\x1b[33m**\033[0;31m*\x1b[33m**\033[0;31m**\x1b[33m*\033[0;31m*\x1b[33m**          \n");
            printf("\t\t\t             ***\033[0;31m*\x1b[33m*\033[0;31m*\x1b[33m***\033[0;31m*\x1b[33m**\033[0;31m*\x1b[33m**\033[0;31m*\x1b[33m***          \n");
            printf("\t\t\t             ******************* \033[0m         \n");
                /// TEXTOS EN LOS IDIOMAS ///
                if (idioma==1) printf("\t\t\t\033[0;32m%s HA GANADO EL JUEGO\033[0m", noms[guanyador-1]);
                else if (idioma==2) printf("\t\t\t\033[0;32m%s HA GUANYAT EL JOC\033[0m", noms[guanyador-1]);
                else if (idioma==3) printf("\t\t\t\033[0;32m%s HAS WON THE GAME\033[0m", noms[guanyador-1]);
                /// /// /// /// /// /// /// /// /// /// /// //
            sleep(1);
             printf("\033[2J\033[H");
            }
        /// TEXTOS EN LOS IDIOMAS ///
        if (idioma==1) printf("\t\t\t\033[0;32m%s HA GANADO EL JUEGO\033[0m", noms[guanyador-1]);
        else if (idioma==2) printf("\t\t\t\033[0;32m%s HA GUANYAT EL JOC\033[0m", noms[guanyador-1]);
        else if (idioma==3) printf("\t\t\t\033[0;32m%s HAS WON THE GAME\033[0m", noms[guanyador-1]);
        /// /// /// /// /// /// /// /// /// /// /// //
}
int animacio_tornar_a_jugar(int idioma, int tornar_a_jugar){
    printf("\033[0;34m\n\n\n\n");
    printf("\t\t/----    |            /\\      \\     /           /\\     /----       /\\      -------  |\\    |     /----\\     \n");
    printf("\t\t|    |   |           /  \\      \\   /           /  \\    |    |     /  \\        |     | \\   |     |    |   \n");
    printf("\t\t|----    |          /____\\      \\ /           /____\\   |         /____\\       |     |  \\  |        __|    \n");
    printf("\t\t|        |         /      \\      |           /      \\  |   -\\   /      \\      |     |   \\ |       |    \n");
    printf("\t\t|        |_____   /        \\     |          /        \\ \\____/  /        \\  ___|___  |    \\|       *     \n\n\n");

    printf("\t\t\t      *******************************        *\n");
    printf("\t\t\t    *********************************       ***\n");
    printf("\t\t\t  ***********************************      *****\n");
    printf("\t\t\t  *****                                   *******\n");
    printf("\t\t\t  *****                                  *********\n");
    printf("\t\t\t  *****                                    *****\n");
    printf("\t\t\t*********                                  *****\n");
    printf("\t\t\t *******                                   *****\n");
    printf("\t\t\t  *****      ***********************************\n");
    printf("\t\t\t   ***       *********************************\n");
    printf("\t\t\t    *        *******************************\n");
    ///TEXTOS IDIOMAS
    if(idioma==1) printf("\t\tPULSA 1 PARA JUGAR DE NUEVO (Cualquier otra tecla para finalizar)\033[0m\n\n\n");
    else if(idioma==2) printf("\t\tPULSA 1 PER JUGAR DE NOU (Qualsevol altra tecla per finalitzar)\033[0m\n\n\n");
    else if(idioma==3) printf("\t\tPRESS 1 TO PLAY AGAIN (Any other key to end)\033[0m\n\n\n");

    char tornar_aux[10];
    int aux_tornar;
    scanf(" %s",tornar_aux);
    int longitud = strlen(tornar_aux);


    aux_tornar=tornar_aux[0] - '0';
    if (longitud>1){
        printf("\033[2J\033[H");
        if (idioma==1) printf("\033[0;31mELIGE UN VALOR ADECUADO (Una sola tecla)! \033[0m\n");
        else if (idioma==2) printf("\033[0;31mTRIA UN VALOR ADEQUAT (Una sola tecla)! \033[0m\n");
        else if (idioma==3) printf("\033[0;31mCHOOSE A SUITABLE VALUE (One key)! \033[0m\n");
        return animacio_tornar_a_jugar(idioma, tornar_a_jugar);
    }
    else{
        if(aux_tornar==1){
        printf("\033[2J\033[H");
        animacion_4enralla();}
        return aux_tornar;
    }
}

void animacio_despedida(){
    printf("\033[2J\033[H");
    printf("\033[1;31m");
    printf("\t\t\t GGGG     AAAAA    MMM   MMM    EEEE       OOO   V       V   EEEE   RRRR   \n");
    printf("\t\t\tG    G    A   A    M  M M  M    E         O   O   V     V    E      R   R  \n");
    printf("\t\t\tG         AAAAA    M   M   M    EEE       O   O    V   V     EEE    RRRR   \n");
    printf("\t\t\tG    G    A   A    M       M    E         O   O     V V      E      R  R   \n");
    printf("\t\t\t GGGG     A   A    M       M    EEEE       OOO       V       EEEE   R   RR \033[0m\n");
}

void animacio_empate(int idioma){
    printf("\033[1;34m \n");
    if(idioma==1){
        printf("\t\t\tEEEE  M       M  PPPPPP     A    TTTTTTT  EEEE \n");
        printf("\t\t\tE     M M   M M  P    P    A A      T     E    \n");
        printf("\t\t\tEEE   M   M   M  PPPPPP   AAAAA     T     EEE  \n");
        printf("\t\t\tE     M       M  P       A     A    T     E     \n");
        printf("\t\t\tEEEE  M       M  P      A       A   T     EEEE  \033[0m\n");}

    else if(idioma==2){
        printf("\t\t\tEEEE  M       M  PPPPPP     A    TTTTTTT\n");
        printf("\t\t\tE     M M   M M  P    P    A A      T    \n");
        printf("\t\t\tEEE   M   M   M  PPPPPP   AAAAA     T    \n");
        printf("\t\t\tE     M       M  P       A     A    T    \n");
        printf("\t\t\tEEEE  M       M  P      A       A   T   \033[0m\n");}


    else if(idioma==3){
        printf("\t\t\tDDDD   RRRR   AAAAA  W   W \n");
        printf("\t\t\tD   D  R   R  A   A  W   W \n");
        printf("\t\t\tD   D  RRRR   AAAAA  W W W \n");
        printf("\t\t\tD   D  R   R  A   A  WW WW \n");
        printf("\t\t\tDDDD   R   R  A   A  W   W \033[0m\n");}
}
void animacio_punts(){
    printf("\t\t\t");
    for(int i=0; i<30; i++){
        usleep(50000);
        printf("?");
    }
    printf("\n");
}

void animacio_fletxes(){
    printf("\t\t\t");
    for(int i=0; i<30; i++){
        usleep(50000);
        printf("->");
    }
    printf("\n");
}
