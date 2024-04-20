<<<<<<< HEAD

#include "main.h"
#include "crea arbre.h"
#include "minimax.h"
#include "grafics.h"

//COLOR LIST: Vermell (red): "\033[1;31m" Verd (green): "\033[1;32m" Blau (blue): "\033[1;34m"
//Groc (yellow): "\033[1;33m"  Cian: "\033[0;36m" Lila (purple): "\033[1;35m"


void imprimeix(char m[N][N], int colors[2]){
    for (int i=0; i<N; i++){
        printf("\t\t\t  ");
        if(i==0){
             for(int j=0; j<N; j++){
                printf("| %d |", j+1);
             }
             printf("\n\t\t\t  ");
        }
        for(int j=0; j<N; j++){
            if (m[i][j]==0) printf("|   |");

            else if(m[i][j]==1){
            printf("| ");
            switch (colors[0]) {
                case 1:
                    printf("\033[0;31mO");
                    break;
                case 2:
                    printf("\033[0;32mO");
                    break;
                case 3:
                    printf("\033[0;34mO");
                    break;
                case 4:
                    printf("\033[0;33mO");
                    break;
                case 5:
                    printf("\033[0;35mO");
                    break;
                case 6:
                    printf("\033[0;36m0");
            }
            ;printf("\033[0m |");
            }

            else if (m[i][j]==2) {
                printf("| ");
                switch (colors[1]) {
                case 1:
                    printf("\033[0;31mX");
                    break;
                case 2:
                    printf("\033[0;32mX");
                    break;
                case 3:
                    printf("\033[0;34mX");
                    break;
                case 4:
                    printf("\033[0;33mX");
                    break;
                case 5:
                    printf("\033[0;35mX");
                    break;
                case 6:
                    printf("\033[0;36m0");
            }
                printf("\033[0m |");
            }

        }
        printf("\n");
    }
}


void triar_idioma(int *idioma){
    printf("\033[0;31mELIGE EN\033[0;33m QUE IDIOMA\033[0;31m QUIERES JUGAR.\033[0m / \033[0;31mTR\033[0;33mIA \033[0;31mEN \033[0;33mQU\033[0;31mIN I\033[0;33mDI\033[0;31mOMA \033[0;33mVO\033[0;31mLS \033[0;33mJU\033[0;31mGAR.\033[0m / \033[0;34mCHOOSE \033[0;31mWHICH \033[0mLANGUAGE YOU \033[0;31mWANT TO \033[0;34mPLAY IN.\n");
    ///  ANIMACIÓN IDIOMAS ///
    animacion_idiomas();

    //char auxiliar per veure que l'idioma està ben seleccionat, considerem que ningú s'equivocarà escrivint més de 10 caràcters.
    char idioma_c[10];
    int aux_idioma;
    //Afegim un espai abans del format "%s" perquè scanf consumeixi qualsevol caràcter de nova línia o espai en blanc que pugui haver quedat al memòria intermèdia d'entrada.
    scanf(" %s",idioma_c);
    int longitud = strlen(idioma_c);

    //per convertir-lo a sencer que volem, ja que el xar 48 equival a sencer 0.
    aux_idioma=idioma_c[0]-'0';

    if (longitud> 1 || aux_idioma<1 || aux_idioma > 3){
        printf("\033[2J\033[H");
        printf("\033[1;31mIdioma no disponible / Language not available \033[0m\n\n");
        triar_idioma(idioma);
    }
    else{
        *idioma = aux_idioma;
    }
    printf("\033[2J\033[H");
}


void mode_joc(int idioma,int *modejoc){
    ///ANIMACIÓN MODE JOC ///
    animacion_mode_joc(idioma);

    char mode_c[10];
    int aux_mode;
    scanf(" %s",mode_c);
    int longitud = strlen(mode_c);

    aux_mode=mode_c[0] - '0';
    if (longitud>1 || (aux_mode!= 1 && aux_mode!=2)){
        printf("\033[2J\033[H");
        if (idioma==1) printf("\033[0;31mELIGE UN MODO DE JUEGO DISPONIBLE! \033[0m\n");
        else if (idioma==2) printf("\033[0;31mTRIA UN MODE DE JOC DISPONIBLE! \033[0m\n");
        else if (idioma==3) printf("\033[0;31mCHOOSE AN AVAILABLE GAME MODE! \033[0m\n");
        mode_joc(idioma, modejoc);
    }
    else{
        *modejoc = aux_mode;
    }
    printf("\033[2J\033[H");
}


void estil_joc(int idioma, int *esticjoc){
    ///ANIMACIÓN ESTIL DE JOC ///
    animacion_estil_joc(idioma);

    char estil_c[10];
    int aux_estil;

    scanf(" %s",estil_c);
    int longitud = strlen(estil_c);

    aux_estil=estil_c[0] - '0';

    if (longitud>1 || (aux_estil!= 1 && aux_estil!=2)){
        printf("\033[2J\033[H");
        if (idioma==1) printf("\033[0;31mELIGE UNA VERSION DE JUEGO DISPONIBLE! \033[0m\n");
        else if (idioma==2) printf("\033[0;31mTRIA UNA VERSIO DE JOC DISPONIBLE! \033[0m\n");
        else if (idioma==3) printf("\033[0;31mCHOOSE AN AVAILABLE GAME VERSION! \033[0m\n");
        estil_joc(idioma, esticjoc);
    }
    else{
        *esticjoc = aux_estil;
    }

    printf("\033[2J\033[H");
}


void noms_jug(int idioma,  char noms[2][40], int modejoc){
    strcpy(noms[0], "CPU");
    strcpy(noms[1], "CPU");
     /// INTRODUCIMOS LOS NOMBRES
     while (strcmp(noms[0], noms[1])==0){
        ///NOMBRE JUGADOR 1 ///
        animacion_jugador(idioma,1);

        scanf("%s", noms[0]);

        if (modejoc==1){
            printf("\033[2J\033[H");
            ///NOMBRE JUGADOR 2 ///
            animacion_jugador(idioma,2);

            scanf("%s", noms[1]);
        }

        printf("\033[2J\033[H");
        if (strcmp(noms[0], noms[1])==0){
            if(idioma==1) printf("\033[0;31mLOS NOMBRES TIENEN QUE SER DIFERENTES!\n\033[0m");
            else if(idioma==3) printf("\033[0;31mTHE NAMES HAVE TO BE DIFFERENT!\n\033[0m");
            else if(idioma==2) printf("\033[0;31mELS NOMS HAN DE SER DIFERENTS!\n\033[0m");
        }
     }
}


void num_de_partides(int idioma,int *punts){
    ///NOMBRE JUGADOR 2 ///
    animacion_partidas(idioma);

    char punts_c[10];
    int aux_punts;
    scanf(" %s",punts_c);

    int longitud = strlen(punts_c);
    aux_punts= punts_c[0] - '0';

    if (longitud>1){
        printf("\033[2J\033[H");
        /// TEXTOS EN LOS IDIOMAS ///
        if (idioma==1) printf("\033[0;31mINTRODUCE UN NÚMERO ADECUADO \033[0m\n");
        else if (idioma==2) printf("\033[0;31mINTRODUEIX UN NOMBRE ADEQUAT \033[0m\n");
        else if (idioma==3) printf("\033[0;31mENTER A SUITABLE NUMBER \033[0m\n");

        num_de_partides(idioma, punts);
    }

    else if(aux_punts>9){
        printf("\033[2J\033[H");
        /// TEXTOS EN LOS IDIOMAS ///
        if (idioma==1) printf("\033[0;31mEL NUMERO TIENE QUE SER MENOR QUE 9 \033[0m\n");
        else if (idioma==2) printf("\033[0;31mEL NUMERO HA DE SER MENOR QUE 9 \033[0m\n");
        else if (idioma==3) printf("\033[0;31mTHE NUMBER MUST BE LESS THAN 9 \033[0m\n");

        num_de_partides(idioma, punts);
    }
    else if(aux_punts %2 ==0){
        printf("\033[2J\033[H");
        /// TEXTOS EN LOS IDIOMAS ///
        if (idioma==1) printf("\033[0;31mEL NUMERO TIENE QUE SER IMPAR \033[0m\n");
        else if (idioma==2) printf("\033[0;31mEL NUMERO HA DE SER IMPARELL \033[0m\n");
        else if (idioma==3) printf("\033[0;31mTHE NUMBER MUST BE ODD \033[0m\n");

        num_de_partides(idioma, punts);
    }
    else{
        *punts=aux_punts;
    }
    printf("\033[2J\033[H");
}


int dificultat_joc(int idioma){
    /// ELECCIÓN DE LA DIFICULTAD///
    animacion_dificultat(idioma);

    char nivell[10];
    int aux_nivell;
    ///PONER ESTO
    scanf(" %s",nivell);
    int longitud = strlen(nivell);

    aux_nivell=(nivell[0]-'0');

    if (longitud>1 || aux_nivell<0 || aux_nivell>4){
         printf("\033[2J\033[H");
        if (idioma==1) printf("\033[0;31mELIGE UNA DIFICULTAD PERMITIDA.\033[0m\n");
        else if (idioma==2) printf("\033[0;31mTRIA UNA DIFICULTAT PERMESA.\033[0m\n");
        else if (idioma==3) printf("\033[0;31mCHOOSE AN ALLOWED DIFFICULTY.\033[0m\n");
        dificultat_joc(idioma);
    }
    printf("\033[2J\033[H");
    return aux_nivell;
}


int escollir_color(char noms[40], int idioma){
    char aux[10];
    int col;

    if (idioma==1) printf("\t\tElige el color para %s: ", noms);
    else if (idioma==2) printf("\t\tEscull el color per %s: ", noms);
    else if (idioma==3) printf("\t\tChoose the color for %s: ", noms);

    scanf("%s",aux);
    int longitud = strlen(aux);
    col=(aux[0]-'0');

    if (longitud>1 || col<1 || col>6){
        if (idioma==1 || idioma==2) printf("\t\t\033[0;31mCOLOR NO DISPONIBLE!\033[0m\n");
        else if (idioma==3) printf("\t\t\033[0;31mCOLOR NOT AVAILABLE!\033[0m\n");
        col=escollir_color(noms, idioma);
    }

    return col;
}


void triar_colors(int idioma, char noms[2][40], int colors[2]){
    while (colors[0]==colors[1]){
        ///ELECCIÓ COLORS DE CADA JUGADOR
        animacio_colors(idioma);

        if (idioma==1) printf("\t\tEscoger un color diferente para cada uno\n");
        if (idioma==2) printf("\t\tEscolliu un color diferent per cada un\n");
        if (idioma==3) printf("\t\tChoose a different color for each one\n");

        colors[0]=escollir_color(noms[0], idioma);
        colors[1]=escollir_color(noms[1], idioma);

        if(colors[0]==colors[1]){
            printf("\033[2J\033[H");
            if (idioma==1) printf("\t\t\033[0;31mESCOGER UN COLOR DIFERENTE PARA CADA UNO!\033[0m\n");
            if (idioma==2) printf("\t\t\033[0;31mTRIAR UN COLOR DIFERENT PER A CADASCUN!\033[0m\n");
            if (idioma==3) printf("\t\t\033[0;31mCHOOSE A DIFFERENT COLOR FOR EACH ONE!\033[0m\n");
        }
    }

    printf("\033[2J\033[H");
}


void tirar_dau(int *jugador_inici, int idioma){
     /// TEXTOS EN LOS IDIOMAS ///
    if (idioma==1) printf("\t\tComenzamos el sorteo para ver quien empieza:\n");
    else if (idioma==2) printf("\t\tComencem el sorteig per veure qui comença\n");
    else if (idioma==3) printf("\t\tWe start the draw to see who starts\n");

    int dau[2][TIRADES];
    for (int jugador=1; jugador<=2; jugador++){
            /// TEXTOS EN LOS IDIOMAS ///
            if (idioma==1) printf("\t\tTiramos el dado del jugador %d:\n", jugador);
            else if (idioma==2) printf("\t\tTirem el dau del jugador %d:\n", jugador);
            else if (idioma==3) printf("\t\tTire the player's dice %d:\n", jugador);

            for (int i = 0; i<TIRADES; i++){
              usleep(50000);
              dau[jugador-1][i]  = (rand()%6)+1 ;
              printf("\t\t%d ", dau[jugador-1][i]);
            printf("\r");
            }
            sleep(1); //donem més pausa pel moment final

            /// TEXTOS EN LOS IDIOMAS ///
            if (idioma==1) printf("\n\t\tDado jugador %d = %d\n",jugador, dau[jugador-1][TIRADES-1]);
            else if (idioma==2) printf("\n\t\tDau jugador %d = %d\n",jugador, dau[jugador-1][TIRADES-1]);
            else if (idioma==3) printf("\n\t\tPlayer %d dice = %d\n",jugador, dau[jugador-1][TIRADES-1]);
    }

    if (dau[0][TIRADES-1]==dau[1][TIRADES-1]) tirar_dau(jugador_inici, idioma);   // si les sale el mismo número, volvemos a tirar
    else if (dau[0][TIRADES-1]>dau[1][TIRADES-1]) *jugador_inici = 1;
    else *jugador_inici = 2;
}


void triar_jugador(int *jugador_inici,int idioma, char noms[2][40]){

    texto_triar_jugador(idioma, noms);

    scanf("%d", jugador_inici);


    if (*jugador_inici==0) tirar_dau(jugador_inici, idioma);
    else if ((*jugador_inici<0)||(*jugador_inici>2)){
            printf("\033[2J\033[H");
             /// TEXTOS EN LOS IDIOMAS ///
            if (idioma==1) printf("\033[0;31mPor favor, seleccione una opción correcta opción correcta.\n\033[0m");
            else if (idioma==2) printf("\033[0;31mSi us plau, seleccioneu una opció correcta opció correcta.\n\033[0m");
            else if (idioma==3) printf("\033[0;31mPlease select a correct option correct option.\n\033[0m");

            triar_jugador(jugador_inici, idioma, noms);
    }
    /// TEXTOS EN LOS IDIOMAS ///
    if (idioma==1) printf("\t\tEmpieza el jugador %s. \n", noms[(*jugador_inici)-1]);
    else if (idioma==2) printf("\t\tComença el jugador %s. \n", noms[(*jugador_inici)-1]);
    else if (idioma==3) printf("\t\tStarts the player %s. \n", noms[(*jugador_inici)-1]);

    printf("\033[2J\033[H");
}


void inicia_tauler(char tauler[N][N], int top_cols[N]){
    for(int i =0;i<N;i++) {
        for(int j=0;j<N;j++){
            tauler[i][j]=0;
            top_cols[i]=N;
        }
    }
}


void recompte(int ratlla[2], int torn,char tauler[N][N], int top_cols, int j){
    int aux = guanyar(tauler, top_cols, j, torn);
    if (aux>ratlla[torn-1]){
        ratlla[torn-1]=aux;
    }
}


int executar_tirada(int torn, int idioma, char noms[2][40], int dificultat){
    //on guardarem la casella
    char c[10];
    //la tranformem a l'int que volem (iniciem amb -1 per si no te temps de tirar, sigui aleatori)
    int x=-1;

    if (dificultat==0){
        /// TEXTOS EN LOS IDIOMAS ///
        if (idioma==1) printf("\n\t\t\t%s, elige la columna donde tirar la ficha: ", noms[torn-1]);
        else if (idioma==2) printf("\n\t\t\t%s, tria la columna on llencar la fitxa: ", noms[torn-1]);
        else if (idioma==3) printf("\n\t\t\t%s, choose the column where to throw the token: ", noms[torn-1]);

            scanf(" %s",c);
            int longitud = strlen(c);
            if (longitud>1){
                x=-10;
            }
            else{
            x=(c[0]-'0')-1;
            }
    }
    else{
        char c2;
        //inicialitzem el temporitzador:
        struct timeval inici, actual;


        int temps_limit = 60000/pow(2,dificultat-1); //Temps límit en mil·lisegons
        gettimeofday(&inici, NULL);                  //inicialitzem el cronómetre
        long temps_transcorregut = 0;                //inicialitzem el temps transcorregut
        long temps_restant = temps_limit;            //inicialitzem el temps restant
        ///Comenca el temporitzador

        while(temps_restant>0){
            if (!kbhit()){
            gettimeofday(&actual, NULL);
            temps_transcorregut = (actual.tv_sec - inici.tv_sec) * 1000 + (actual.tv_usec - inici.tv_usec) / 1000;
            temps_restant = temps_limit - temps_transcorregut;
            // Esborra la línia anterior amb caràcters espais en blanc
            printf("\r");
            // Divideix temps_restant per 100 per obtenir les décimes de segon
            /// TEXTOS EN LOS IDIOMAS ///
            if (idioma==1) printf("\t\t\t%s,te quedan %ld.%01ld segundos, elige la columna donde tirar la ficha", noms[torn-1],temps_restant / 1000, (temps_restant % 1000) / 100);
            else if (idioma==2) printf("\t\t\t%s, et quedan %ld.%01ld segons, escull la columna on llencar la fitxa", noms[torn-1],temps_restant / 1000, (temps_restant % 1000) / 100);
            else if (idioma==3) printf("\t\t\t%s, you have %ld.%01ld seconds, choose the column where to throw the token", noms[torn-1],temps_restant / 1000, (temps_restant % 1000) / 100);
            /// /// /// /// /// /// /// /// /// /// /// ///
            fflush(stdout); // Limpia el búfer de sortida per assegurar-nos que mostra inmediatament
            usleep(10000);  // Pausa durant 10 milisegons para mostrar décimas de segon
            }
            else{
                c2 = getch();
                x=(c2-'0')-1;
                temps_restant=0;
                return x;
            }
        }
    }
        if (x==-1){                //significa que o bé a pulsat 0 o bé s'ha acabat el temps
                x = rand() % 8;   //tenim el seed definit al principi
        }
    return x;
}


void tirada(int torn, char tauler[N][N], int top_cols[N], int idioma, int ratlla[2], char noms[2][40],
            int dificultat, int colors[2], int comodins[2][COMODINS], int comodins_restants[2], int estiljoc,
            int modejoc){

    int x=0;
    x=executar_tirada(torn, idioma, noms, dificultat);

    if (x>=0 && x<N){            /// Si està dins del tauler...
        if (top_cols[x]>0){      ///Si la columna NO está plena...
            top_cols[x]--;
            tauler[top_cols[x]][x]= torn;
            printf("\033[2J\033[H");
            ///TEXT IDIOMES
            if (idioma==1)printf("\t\t\t%s ha tirado en la columna %d\n", noms[torn-1], x+1);
            if (idioma==2)printf("\t\t\t%s ha tirat a la columna %d\n", noms[torn-1], x+1);
            if (idioma==3)printf("\t\t\t%s pulled into column %d\n", noms[torn-1], x+1);
            imprimeix(tauler, colors);
            recompte(ratlla, torn, tauler, top_cols[x], x);        //No passem torn i top_cols per referència ja que no volem canviar-ne el valor
        }
        else{
            /// TEXTOS EN LOS IDIOMAS ///
            if (idioma==1) printf("\033[0;31mESTA COLUMNA ESTÁ LLENA, ELIGE OTRA.\033[0m\n");
            else if (idioma==2) printf("\033[0;31mAQUESTA COLUMNA ESTA PLENA, TRIA UN ALTRE.\033[0m\n");
            else if (idioma==3) printf("\033[0;31mTHIS COLUMN IS FULL, CHOOSE ANOTHER.\033[0m\n");
            /// /// /// /// /// /// /// /// /// /// /// ///
            tirada(torn, tauler, top_cols, idioma, ratlla,noms, dificultat, colors,comodins,comodins_restants, estiljoc, modejoc);
            ///Si la columna és plena, demanem que fiqui la fitxa en una altra columna.
        }
    }
    else if(x==N){
        int comodi=0;
            ///Comptem si teniu fitxes, si no no teniu sentit demanar si voleu usar comodins
            int recompte_tauler=0;
            for (int i=0; i<N; i++){
                if (top_cols[i]<8){
                    recompte_tauler++;
                }
            }
            printf("\n");
            if (estiljoc==2 && recompte_tauler>0 && comodins_restants[torn-1]>0){
                    /// TEXTOS EN LOS IDIOMAS ///
                    if (idioma==1) printf("\t\t\t\033[1;32m%s TE QUEDAN %d COMODINES. \033[0m\n",noms[torn-1], comodins_restants[torn-1]);
                    else if (idioma==2) printf("\t\t\t\033[1;32m%s ET QUEDAN %d COMODINS. \033[0m\n",noms[torn-1], comodins_restants[torn-1]);
                    else if (idioma==3) printf("\t\t\t\033[1;32m%s YOU HAVE %d WILD CARDS LEFT. \033[0m\n",noms[torn-1], comodins_restants[torn-1]);
                    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
                    triar_comodi(&comodi,idioma, tauler, top_cols, torn, dificultat, comodins, comodins_restants);
                    if (comodi != 0){
                        comodins_restants[torn-1]--;
                        comodins[torn-1][comodi-1]--;
                        aplicar_comodi(comodi, idioma, tauler, top_cols, torn, ratlla, noms, dificultat, colors, comodins, comodins_restants, modejoc);
                    }
            }
            else if (comodins_restants[torn-1]==0){
                /// TEXTOS EN LOS IDIOMAS ///
                if (idioma==1) printf("\033[1;31m%s NO TE QUEDAN COMODINES. \033[0m\n",noms[torn-1]);
                else if (idioma==2) printf("\033[1;31m%s NO ET QUEDAN COMODINS. \033[0m\n",noms[torn-1]);
                else if (idioma==3) printf("\033[1;31m%s YOU HAVE NOT WILD CARDS LEFT. \033[0m\n",noms[torn-1]);
            }
            else if(recompte_tauler==0){
                /// TEXTOS EN LOS IDIOMAS ///
                if (idioma==1) printf("\033[1;31m%s NO TIENES FICHAS PARA APLICAR COMODINES. \033[0m\n",noms[torn-1]);
                else if (idioma==2) printf("\033[1;31m%s NO TENIU FITXES PER APLICAR COMODINS. \033[0m\n",noms[torn-1]);
                else if (idioma==3) printf("\033[1;31m%s YOU DON'T HAVE TOKENS TO APPLY WILDCARDS. \033[0m\n",noms[torn-1]);
            }
            else if (estiljoc==1){
                /// TEXTOS EN LOS IDIOMAS ///
                if (idioma==1) printf("\033[1;31mESCOGE UNA COLUMNA ADECUADA. \033[0m\n");
                else if (idioma==2) printf("\033[1;31mTRIEU UNA COLUMNA ADECUA. \033[0m\n");
                else if (idioma==3) printf("\033[1;31mCHOOSE A SUITABLE COLUMN. \033[0m\n");
            }
            if(comodi==0){
                tirada(torn, tauler,top_cols, idioma,ratlla,noms,dificultat,colors,comodins, comodins_restants,1, modejoc); //enviem tot 0 per tal que no pugui aplicar un comodí
            }
    }
    else{
            /// TEXTOS EN LOS IDIOMAS ///
            if (idioma==1) printf("\033[1;31mESCOGE UNA COLUMNA ADECUADA. \033[0m\n");
            else if (idioma==2) printf("\033[1;31mTRIEU UNA COLUMNA ADECUA. \033[0m\n");
            else if (idioma==3) printf("\033[1;31mCHOOSE A SUITABLE COLUMN. \033[0m\n");

            tirada(torn, tauler, top_cols, idioma, ratlla, noms, dificultat, colors, comodins, comodins_restants, estiljoc, modejoc);    ///Si la columna no hi és al tauler, demanem un altre columna
    }
}


void triar_comodi(int *comodi, int idioma, char tauler[N][N], int top_cols[N], int torn, int dificultat,
                    int comodins[2][COMODINS], int comodins_restants[2]){

   ///TEXTOS IDIOMES// (quants comodins queden)
    textos(idioma,torn, comodins);

    ///PASEM A LA DECISIO
    char decision_c[10];
    int decision=0; //Lo inicializamos
    scanf(" %s",decision_c);
    int longitud = strlen(decision_c);
    if (longitud>1){
        if (idioma==1) printf("\033[1;31mELIGE UN COMODIN ADECUADO. \033[0m\n");
        else if (idioma==2)printf("\033[1;31mTRIA UN COMODI ADECUAT. \033[0m\n");
        else if (idioma==3)printf("\033[1;31mCHOOSE AN ALLOWED WILDCARD. \033[0m\n");
        triar_comodi(comodi, idioma,tauler, top_cols, torn, dificultat, comodins, comodins_restants);
    }
    else{
        decision= decision_c[0] - '0';
        if (decision>0 && decision<=COMODINS){
            if (comodins[torn-1][decision-1]>0){
                int recompte_tauler; //per 1 i 2
                 switch (decision) {
                        case 1:
                            recompte_tauler=0;
                            for (int i=0; i<N; i++){
                                if (tauler[top_cols[i]][i]<N){
                                    recompte_tauler++;
                                }
                            }
                            if (recompte_tauler>0){
                                *comodi=decision;
                            }
                            else{
                                if (idioma==1) printf("\033[1;31mELIGE UN COMODIN ADECUADO, NO TIENES FICHAS A QUITAR. \033[0m\n");
                                else if (idioma==2)printf("\033[1;31mTRIA UN COMODI ADECUAT, NO TENS FITXES PER TREURE. \033[0m\n");
                                else if (idioma==3)printf("\033[1;31mCHOOSE AN ALLOWED WILDCARD, YOU DON'T HAVE TOKENS TO TAKE AWAY. \033[0m\n");
                                triar_comodi(comodi,idioma, tauler, top_cols, torn, dificultat, comodins, comodins_restants);
                            }
                            break;
                        case 2:
                            recompte_tauler=0;
                            for (int i=0; i<N; i++){
                                if (tauler[top_cols[i]][i]<N){
                                    recompte_tauler++;
                                }
                            }
                            if (recompte_tauler>0){
                                *comodi= decision;
                            }
                            else{
                                if (idioma==1) printf("\033[1;31mELIGE UN COMODIN ADECUADO, NO TIENES FICHAS PARA QUITARLE. \033[0m\n");
                                else if (idioma==2)printf("\033[1;31mTRIA UN COMODI ADECUAT, NO TENS FITXES PER TREURELI. \033[0m\n");
                                else if (idioma==3)printf("\033[1;31mCHOOSE AN ALLOWED WILDCARD, YOU DON'T HAVE TOKENS TO TAKE THEM AWAY. \033[0m\n");
                                triar_comodi(comodi,idioma, tauler, top_cols, torn, dificultat, comodins, comodins_restants);
                            }
                            break;
                        case 3:
                            *comodi= decision;
                            break;
                        case 4:
                            *comodi=decision;
                        case 5:
                            *comodi=decision;
                }
            }
            else{
                /// TEXTOS EN LOS IDIOMAS ///
                if (idioma==1) printf("\033[1;31mNO TE QUEDAN ESOS COMODINES. \033[0m\n");
                else if (idioma==2) printf("\033[1;31mNO ET QUEDAN AQUEST COMODINS. \033[0m\n");
                else if (idioma==3) printf("\033[1;31mYOU HAVE NO THIS WILD CARDS LEFT. \033[0m\n");

                triar_comodi(comodi,idioma, tauler, top_cols, torn, dificultat, comodins, comodins_restants);
            }
        }
        else if (decision>4){
            if (idioma==1) printf("\033[1;31mELIGE UN COMODIN ADECUADO. \033[0m\n");
            else if (idioma==2)printf("\033[1;31mTRIA UN COMODI ADECUAT. \033[0m\n");
            else if (idioma==3)printf("\033[1;31mCHOOSE AN ALLOWED WILDCARD. \033[0m\n");
            triar_comodi(comodi,idioma, tauler, top_cols, torn, dificultat, comodins, comodins_restants);
        }
    }
}


void dau(int dado, int idioma, char tauler[N][N], int top_cols[N], int torn, int ratlla[2], char noms[2][40],
         int dificultat, int colors[2],int comodins[2][COMODINS],int comodins_restants[2], int modejoc){
    int recompte_tauler=0;
    int columna;
    char columna_c[10];
    int longitud;
    switch(dado){
        case 1:
            /// ANIMACIÓN BOMBA ///
            animacion_bomba();

            imprimeix(tauler, colors);
            if(idioma==1)printf("\t\t\tElige la columna de la cual quieres tirar la bomba: ");
            else if (idioma==2)printf("\t\t\tTria la columna de la qual voleu llencar la bomba: ");
            else if(idioma==3)printf("\t\t\tChoose the column from which you want to drop the bomb: ");

            scanf(" %s", columna_c);
            longitud = strlen(columna_c);

            if (longitud>1){
                /// TEXTOS EN LOS IDIOMAS ///
                if (idioma==1) printf("\033[1;31mESCOGE UNA COLUMNA ADECUADA. \033[0m\n");
                else if (idioma==2) printf("\033[1;31mTRIEU UNA COLUMNA ADECUA. \033[0m\n");
                else if (idioma==3) printf("\033[1;31mCHOOSE A SUITABLE COLUMN. \033[0m\n");

                dau(dado, idioma, tauler, top_cols, torn, ratlla, noms, dificultat, colors, comodins, comodins_restants, modejoc);
            }
            else{
                columna=columna_c[0]-1-'0';
                if (columna>=0 && columna<N){
                    for(int i=7; i>=top_cols[columna]; i--){
                        if (top_cols[columna]<8){
                            tauler[i][columna]=0;
                        }
                    }
                    top_cols[columna]=8;
                }
                else{
                    /// TEXTOS EN LOS IDIOMAS ///
                    if (idioma==1) printf("\033[1;31mESCOGE UNA COLUMNA ADECUADA. \033[0m\n");
                    else if (idioma==2) printf("\033[1;31mTRIEU UNA COLUMNA ADECUA. \033[0m\n");
                    else if (idioma==3) printf("\033[1;31mCHOOSE A SUITABLE COLUMN. \033[0m\n");

                    dau(dado, idioma, tauler, top_cols, torn, ratlla, noms, dificultat, colors, comodins, comodins_restants, modejoc);
                }
            }
            imprimeix(tauler, colors);
            break;

        case 2:
            for (int i=0; i<N; i++){
                if (top_cols[i]<N){
                    recompte_tauler++;
                }
            }
            if (recompte_tauler>0){
                /// ANIMACIÓN TSUNAMI ///
                animacion_tsunami();

                ///TEXT IDIOMES ///
                if (idioma==1)printf("\t\t\t\033[1;34mELIMINAMOS TODAS LAS FICHAS DEL TOP\033[0m\n");
                else if (idioma==2)printf("\t\t\t\033[1;34mELIMINEM TOTES LES FITXES DEL TOP\033[0m\n");
                else if(idioma==3) printf("\t\t\t\033[1;34mWE REMOVE ALL THE TOKENS FROM THE TOP\033[0m\n");

                for (int i=0; i<N; i++){
                    if (top_cols[i]<8){
                        tauler[top_cols[i]][i]=0;
                        top_cols[i]++;
                    }
                }
                imprimeix(tauler, colors);
            }
            else{
                ///TEXT IDIOMES ///
                if (idioma==1)printf("\033[1;31m ¡No hay fichas para eliminar!\n\033[0m\n");
                else if (idioma==2)printf("\033[1;31m ¡No hi ha fitxes per eliminar!\n\033[0m\n");
                else if(idioma==3) printf("\033[1;31m There are no chips to remove!\n\033[0m\n");
            }
            break;

        case 3:
             /// ANIMACIÓN HELADA ///
                animacion_hielo();
            /// ANIMACIÓN HELADA ///
            /// TEXT IDIOMES///
            if (idioma==1) printf("\t\t                       \033[1;36m CONGELASTE A %s\n\t\t\t\033[1;32mTIRAS DOS VECES\033[0m\n", noms[3-torn-1]);
            if (idioma==2) printf("\t\t                       \033[1;36m HAS CONGELAT A %s\n\t\t\t\033[1;32mTIRES DOS COPS\033[0m\n", noms[3-torn-1]);
            if (idioma==3) printf("\t\t                       \033[1;36m YOU FROZEN TO %s \n\t\t\t\033[1;32mYOU HAVE AN EXTRA ROLL\033[0m\n", noms[3-torn-1]);
            /////////////////////
            imprimeix(tauler, colors);

             tirada(torn, tauler, top_cols, idioma, ratlla, noms, dificultat, colors, comodins, comodins_restants, 1, modejoc);
             tirada(torn, tauler, top_cols, idioma, ratlla, noms, dificultat, colors,comodins, comodins_restants, 1, modejoc);
             break;

        case 4:
            /// TEXT IDIOMES///
            if (idioma==1) printf("\t\t\t\033[1;32m%s MUEVE UNA FICHA TUYA QUE QUIERAS DEL TOP:\033[0m\n", noms[torn-1]);
            if (idioma==2) printf("\t\t\t\033[1;32m%s MOU UNA FITXA TEVA QUE VULGUIS DEL TOP:\033[0m\n", noms[torn-1]);
            if (idioma==3) printf("\t\t\t\033[1;32m%s MOVE ONE TOCKEN OF YOURS THAT YOU WANT OF THE TOP:\033[0m\n", noms[torn-1]);

            recompte_tauler=0;
            for (int i=0; i<N; i++){
                if (tauler[top_cols[i]][i]==torn){
                    recompte_tauler++;
                }
            }
            if (recompte_tauler>0){
                ///TEXTOS IDIOMAS ///
                if(idioma==1)printf("\t\t\tElige la columna de la cual quieres quitar la ficha: ");
                else if (idioma==2)printf("\t\t\tTrieu la columna de la qual voleu suprimir la fitxa: ");
                else if(idioma==3)printf("\t\t\tChoose the column from which you want to remove the token: ");
                ////////////////////
                scanf(" %s", columna_c);
                longitud = strlen(columna_c);
                //////////////////////////////
                if (longitud>1){
                   /// TEXTOS EN LOS IDIOMAS ///
                    if (idioma==1) printf("\033[1;31mNO ESCOGISTE UNA COLUMNA ADECUADA. \033[0m\n");
                    else if (idioma==2) printf("\033[1;31mNO HAS TRIAT UNA COLUMNA ADECUA. \033[0m\n");
                    else if (idioma==3) printf("\033[1;31mYOU HAVE NOT CHOSEN A SUITABLE COLUMN. \033[0m\n");
                    /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
                    dau(dado, idioma, tauler, top_cols, torn, ratlla, noms, dificultat, colors, comodins, comodins_restants, modejoc);
                }
                else{
                    columna=columna_c[0]-1-'0';
                    if (columna>0 && columna<N){
                        if (tauler[top_cols[columna]][columna]==torn){
                            tauler[top_cols[columna]][columna]=0;
                            top_cols[columna]++;
                            imprimeix(tauler,colors);
                        }
                        else{
                            /// TEXTOS EN LOS IDIOMAS ///
                            if (idioma==1) printf("\033[1;31mNO ESCOGISTE UNA COLUMNA ADECUADA. \033[0m\n");
                            else if (idioma==2) printf("\033[1;31mNO HAS TRIAT UNA COLUMNA ADECUA. \033[0m\n");
                            else if (idioma==3) printf("\033[1;31mYOU HAVE NOT CHOSEN A SUITABLE COLUMN. \033[0m\n");
                            /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
                            dau(dado, idioma, tauler, top_cols, torn, ratlla, noms, dificultat, colors, comodins, comodins_restants, modejoc);
                        }
                    }
                    else{
                       /// TEXTOS EN LOS IDIOMAS ///
                        if (idioma==1) printf("\033[1;31mNO ESCOGISTE UNA COLUMNA ADECUADA. \033[0m\n");
                        else if (idioma==2) printf("\033[1;31mNO HAS TRIAT UNA COLUMNA ADECUA. \033[0m\n");
                        else if (idioma==3) printf("\033[1;31mYOU HAVE NOT CHOSEN A SUITABLE COLUMN. \033[0m\n");
                        /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
                        dau(dado, idioma, tauler, top_cols, torn, ratlla, noms, dificultat, colors, comodins, comodins_restants, modejoc);
                    }
                }
            }
            else{
                if (idioma==1) printf("\t\t\t\033[1;32m NO TIENES FICHAS A QUITAR, PERO PUEDES PONER UNA \033[0m\n");
                else if (idioma==2)printf("\t\t\t\033[1;32m NO TENS FITXES PER TREURE, PERO POTS POSAR UNA \033[0m\n");
                else if (idioma==3)printf("\t\t\t\033[1;32m YOU DON'T HAVE TOKENS TO TAKE AWAY,BUT YOU CAN PUT ONE. \033[0m\n");
            }
            /// TEXTOS EN LOS IDIOMAS ///
            if (idioma==1) printf("\t\t\t\033[1;32mAHORA RECOLOCA LA FICHA.\033[0m\n");
            else if (idioma==2) printf("\t\t\t\033[1;32mARA COLOCA LA NOVA FITXA.\033[0m\n");
            else if (idioma==3) printf("\t\t\t\033[1;32mNOW, PLACE THE NEW TOKEN\033[0m\n,");

            tirada(torn, tauler,top_cols, idioma,ratlla, noms, dificultat, colors,comodins, comodins_restants, 1, modejoc);
            tirada(torn, tauler,top_cols, idioma,ratlla, noms, dificultat, colors,comodins, comodins_restants, 1, modejoc);
            break;

        case 5:
            if (idioma==1) printf("\t\t\t\033[1;31mHAS PERDIDO EL TURNO.\033[0m\n");
            else if (idioma==2)printf("\t\t\t\033[1;31mHAS PERDUT EL TORN.\033[0m\n");
            else if (idioma==3)printf("\t\t\t\033[1;31mYOU HAVE MISSED YOUR TURN.\033[0m\n");
            break;

        case 6:
            /// /// ANIMACIÓN GIRO /// ///
            animacion_giro(idioma);

            ratlla[0]=0; ratlla[1]=0;
            char aux[N][N];
            int aux_top_cols[N];
            inicia_tauler(aux, aux_top_cols);
            for(int j=0; j<N; j++){
                for(int i=top_cols[j]; i<N; i++){
                    if(tauler[i][j]!=0){
                        aux_top_cols[i]--;
                        aux[aux_top_cols[i]][i]=tauler[i][j];
                    }
                }
            }
            replica_tauler(tauler, aux);
            replica_top_cols(top_cols, aux_top_cols);
            imprimeix(tauler,colors);
            for(int j=0; j<N; j++){
                for( int i=top_cols[j]; i<N; i++){
                    if(tauler[i][j]!=0){
                        int aux_torn=tauler[i][j];
                        recompte(ratlla, aux_torn, tauler,i,j);
                    }
                }
            }
            break;

        case 7:
            /// TEXT IDIOMES///
            if (idioma==1) printf("\t\t\t\033[1;31m¡¡¡MALA SUERTE!!!\n\t\t\t\033[1;35m%s MUEVE A %s UNA FICHA QUE QUIERAS DEL TOP\033[0m\n", noms[3-torn-1], noms[torn-1]);
            if (idioma==2) printf("\t\t\t\033[1;31m¡¡¡MALA SORT!!!\n\t\t\t\033[1;35m%s MOU A %s UNA FITXA QUE VULGUIS DEL TOP\033[0m\n", noms[3-torn-1], noms[torn-1]);
            if (idioma==3) printf("\t\t\t\033[1;31m¡¡¡BAD LUCK!!!\n\t\t\t\033[1;35m%s MOVE TO %s A TOCKEN YOU WANT FROM THE TOP\033[0m\n", noms[3-torn-1], noms[torn-1]);
            recompte_tauler=0;
            for (int i=0; i<N; i++){
                if (tauler[top_cols[i]][i]==torn){
                    recompte_tauler++;
                }
            }
            if (recompte_tauler>0){
                ///TEXTOS IDIOMAS ///
                if(idioma==1)printf("\t\t\t%s elige la columna de la cual quieres quitar la ficha a %s: ", noms[3-torn-1], noms[torn-1]);
                else if (idioma==2)printf("\t\t\t%s tria la columna de la qual voleu suprimir la fitxa a %s: ",noms[3-torn-1], noms[torn-1]);
                else if(idioma==3)printf("\t\t\t%s choose the column from which you want to remove the token to %s: ",noms[3-torn-1], noms[torn-1]);
                scanf(" %s", columna_c);
                longitud = strlen(columna_c);
                if (longitud>1){
                   /// TEXTOS EN LOS IDIOMAS ///
                    if (idioma==1) printf("\033[1;31mNO ESCOGISTE UNA COLUMNA ADECUADA. \033[0m\n");
                    else if (idioma==2) printf("\033[1;31mNO HAS TRIAT UNA COLUMNA ADECUA. \033[0m\n");
                    else if (idioma==3) printf("\033[1;31mYOU HAVE NOT CHOSEN A SUITABLE COLUMN. \033[0m\n");
                    dau(dado, idioma, tauler, top_cols,torn, ratlla,noms,dificultat,colors, comodins, comodins_restants, modejoc);
                }
                else{
                    columna=columna_c[0]-1-'0';
                    if (columna>=0 && columna<N){
                        if (tauler[top_cols[columna]][columna]==torn){
                            tauler[top_cols[columna]][columna]=0;
                            top_cols[columna]++;
                            imprimeix(tauler,colors);
                        }
                        else{
                            /// TEXTOS EN LOS IDIOMAS ///
                            if (idioma==1) printf("\033[1;31mNO ESCOGISTE UNA COLUMNA ADECUADA. \033[0m\n");
                            else if (idioma==2) printf("\033[1;31mNO HAS TRIAT UNA COLUMNA ADECUA. \033[0m\n");
                            else if (idioma==3) printf("\033[1;31mYOU HAVE NOT CHOSEN A SUITABLE COLUMN. \033[0m\n");
                            dau(dado, idioma, tauler, top_cols,torn, ratlla,noms,dificultat,colors, comodins, comodins_restants, modejoc);
                        }
                    }
                    else{
                       /// TEXTOS EN LOS IDIOMAS ///
                        if (idioma==1) printf("\033[1;31mNO ESCOGISTE UNA COLUMNA ADECUADA. \033[0m\n");
                        else if (idioma==2) printf("\033[1;31mNO HAS TRIAT UNA COLUMNA ADECUA. \033[0m\n");
                        else if (idioma==3) printf("\033[1;31mYOU HAVE NOT CHOSEN A SUITABLE COLUMN. \033[0m\n");
                        dau(dado, idioma, tauler, top_cols,torn, ratlla,noms,dificultat,colors, comodins, comodins_restants, modejoc);
                    }
                }
            }
            else{
                if (idioma==1) printf("\t\t\t\033[1;32m%s ESTA DE SUERTE, NO TIENE FICHAS A QUITAR \033[0m\n", noms[torn-1]);
                else if (idioma==2)printf("\t\t\t\033[1;32m%s ESTÀ DE SORT, NO TENS FITXES PER TREURE\033[0m\n", noms[torn-1]);
                else if (idioma==3)printf("\t\t\t\033[1;32m%s IS IN LUCK, DON'T HAVE TOKENS TO TAKE AWAY\033[0m\n", noms[torn-1]);
            }
            break;
    }
}


void aplicar_comodi(int comodi, int idioma, char tauler[N][N], int top_cols[N], int torn, int ratlla[2], char noms[2][40],
                    int dificultat, int colors[2], int comodins[2][COMODINS], int comodins_restants[2], int modejoc){
    int columna;
    char columna_c[10];
    int longitud;
    int dado[TIRADES];
    switch (comodi) {
                case 1:
                    /// ANIMACIÓN BOMBA ///
                    animacion_bomba();

                    imprimeix(tauler, colors);
                    ///TEXTOS IDIOMAS ///
                    if(idioma==1)printf("\t\t\tElige la columna que quieres eliminar: ");
                    else if (idioma==2)printf("\t\t\tTria la columna que vols eliminar: ");
                    else if(idioma==3)printf("\t\t\tChoose the column you want to delete: ");

                    scanf(" %s", columna_c);
                    longitud = strlen(columna_c);

                    if (longitud>1){
                       /// TEXTOS EN LOS IDIOMAS ///
                        if (idioma==1) printf("\033[1;31mESCOGE UNA COLUMNA ADECUADA. \033[0m\n");
                        else if (idioma==2) printf("\033[1;31mTRIEU UNA COLUMNA ADECUA. \033[0m\n");
                        else if (idioma==3) printf("\033[1;31mCHOOSE A SUITABLE COLUMN. \033[0m\n");
                        /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
                        aplicar_comodi(comodi, idioma, tauler, top_cols, torn, ratlla, noms, dificultat, colors, comodins, comodins_restants, modejoc);
                    }
                    else{
                        columna=columna_c[0]-1-'0';
                        if (columna>=0 && columna<N){
                            for(int i=top_cols[columna]; i<N; i++){
                                tauler[i][columna]=0;
                                top_cols[columna]++;
                            }
                        }
                        else{
                            /// TEXTOS EN LOS IDIOMAS ///
                            if (idioma==1) printf("\033[1;31mESCOGE UNA COLUMNA ADECUADA. \033[0m\n");
                            else if (idioma==2) printf("\033[1;31mTRIEU UNA COLUMNA ADECUA. \033[0m\n");
                            else if (idioma==3) printf("\033[1;31mCHOOSE A SUITABLE COLUMN. \033[0m\n");
                            /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///
                            aplicar_comodi(comodi, idioma, tauler, top_cols, torn, ratlla, noms, dificultat, colors, comodins, comodins_restants, modejoc);
                        }
                    }
                    printf("\033[2J\033[H");
                    imprimeix(tauler, colors);
                    break;

                case 2:
                    /// ANIMACIÓN TSUNAMI ///
                        animacion_tsunami();

                    ///TEXT IDIOMES ///
                    if (idioma==1)printf("\n\t\t\t\033[1;34mELIMINAMOS TODAS LAS FICHAS DEL TOP \033[0m\n");
                    else if (idioma==2)printf("\n\t\t\t\033[1;34mELIMINEM TOTES LES FITXES DEL TOP \033[0m\n");
                    else if(idioma==3) printf("\n\t\t\t\033[1;34mWE REMOVE ALL THE TOKENS FROM THE TOP\033[0m\n");

                    for (int i=0; i<N; i++){
                        if (top_cols[i]<8){
                            tauler[top_cols[i]][i]=0;
                            top_cols[i]++;
                        }
                    }
                    imprimeix(tauler, colors);
                    break;

                case 3:
                    /// ANIMACIÓN HELADA ///
                    animacion_hielo();

                    /// TEXT IDIOMES///
                    if (idioma==1) printf("\t\t\033[1;36m                       CONGELASTE A %s\n\t\t\t\033[1;32mTIRAS DOS VECES\033[0m\n", noms[3-torn-1]);
                    if (idioma==2) printf("\t\t\033[1;36m                       HAS CONGELAT A %s\n\t\t\t\033[1;32mTIRES DOS COPS\033[0m\n", noms[3-torn-1]);
                    if (idioma==3) printf("\t\t\033[1;36m                       YOU FROZEN TO %s \n\t\t\t\033[1;32mYOU HAVE AN EXTRA ROLL\033[0m\n", noms[3-torn-1]);

                     imprimeix(tauler, colors);

                     tirada(torn, tauler, top_cols, idioma, ratlla, noms, dificultat, colors, comodins, comodins_restants, 1, modejoc);
                     tirada(torn, tauler, top_cols, idioma, ratlla, noms, dificultat, colors,comodins, comodins_restants, 1, modejoc);
                     break;

                case 4:
                    /// /// ANIMACIÓN GIRO /// ///
                    animacion_giro(idioma);

                    ratlla[0]=0;
                    ratlla[1]=0; //se reinicia todo
                    char aux[N][N];
                    int aux_top_cols[N];
                    inicia_tauler(aux, aux_top_cols);
                    for(int j=0; j<N; j++){
                        for(int i=top_cols[j]; i<N; i++){
                            if(tauler[i][j]!=0){
                                aux_top_cols[i]--;
                                aux[aux_top_cols[i]][i]=tauler[i][j];
                            }
                        }
                    }
                    replica_tauler(tauler, aux); //copiem l'auxiliar al tauler original
                    replica_top_cols(top_cols, aux_top_cols);
                    imprimeix(tauler,colors);

                    for(int j=0; j<N; j++){
                        for( int i=top_cols[j]; i<N; i++){
                            if(tauler[i][j]!=0){
                                int aux_torn=tauler[i][j];
                                recompte(ratlla, aux_torn, tauler,i,j);
                            }
                        }
                    }
                    break;

                case 5:
                    ///TEXTOS IDIOMAS ///
                    for (int i = 0; i<TIRADES; i++){
                        usleep(50000);
                        if(idioma==1) printf("\t\t\tTiramos el dado: ");
                        else if(idioma==2)printf("\t\t\tTirem el dau: ");
                        else if(idioma==3)printf("\t\t\tWe roll the dice: ");

                        //Pausa l'execució del codi durant 1 segon per donar dramatisme al dau
                       if(modejoc==1)  dado[i]=(rand()%7)+1 ; //generem un nombre aleatori entre l'1 i el 6 com si fos un dau.
                       else if(modejoc==2)  dado[i]  = (rand()%6)+1 ; //generem un nombre aleatori entre l'1 i el 5 com si fos un dau.
                        //ja que si surt 6, l'altre jugador elimina una fitxa i no volem això per la màquina
                        printf("%d  ", dado[i]);   //imprimim els nombres aleatoris
                        printf("\r");
                        }
                    sleep(1);

                    /// TEXTOS EN LOS IDIOMAS ///
                    if (idioma==1 || idioma==2) printf("\n \t\t\tPotenciador: %d\n", dado[TIRADES-1]);
                    else if (idioma==3) printf("\n \t\t\tBooster= %d\n",dado[TIRADES-1]);

                    dau(dado[TIRADES-1], idioma, tauler, top_cols, torn, ratlla, noms, dificultat, colors,comodins, comodins_restants, modejoc);
                    break;
                }
}


int partida(int jugador_inici,int *partides, int partides_guanyades[2], int idioma, char noms[2][40], int modejoc,
            int dificultat, int colors[2],int estiljoc, int *empate){

   /// TEXTOS EN LOS IDIOMAS ///
   printf("\033[2J\033[H");
    if (idioma==1 || idioma==2) printf("\t\t\t\t\t  PARTIDA %d \n", *partides);
    else if (idioma==3) printf("\t\t\t\t\tROUND%d \n", *partides);
    /// /// /// /// ///  /// /// /// /// /// ///

    char tauler[N][N];
    int top_cols[N];                                    //Inicialitzem a 0 on hi ha la darrera fitxa de cada columna
    int ratlla[2]={0,0};                                //La idea és que aquesta variable comptarà la cadena més llarga que tingui cadascú, fins que arribi a 4


    inicia_tauler(tauler, top_cols);

    if(idioma==1) printf("\t\t\t\t       TABLERO INICIAL\n");
    else if (idioma==2) printf("\t\t\t\t       TAULER INICIAL\n");
    else if (idioma==3) printf("\t\t\t\t       TAULER INICIAL\n");

    imprimeix(tauler, 0);                               //tenim el tauler inicial, 0 será el blanc
    int torn = jugador_inici;
    int tirades =0;                                     //Recompte per saber quan s'omple el tauler.

    int comodins[2][COMODINS]={{1,1,1,1,COMODINS},{1,1,1,1,COMODINS}};               //comodines[0]=Bomba (eliminas una columna), comodines[1]=Eliminar top-cols, comodin[2]=congelar turno rival, comoodin[3]=dado
    int comodins_restants[2]={COMODINS,COMODINS};
    //solo si estiljoc=2

    while (ratlla[0]<4 && ratlla[1]<4 && tirades<=(N*N)){
        if (torn==1){
            tirada(torn, tauler, top_cols, idioma, ratlla, noms, dificultat, colors, comodins, comodins_restants, estiljoc, modejoc);
        }
        else if(torn==2){
            if (modejoc==2){
                if(idioma==1)printf("\t\t\t\t\tTurno de la CPU\n");
                else if(idioma==2)printf("\t\t\t\t\tTorn de la CPU\n");
                else if(idioma==2)printf("\t\t\t\t\tCPU shift\n");
                usleep(300000);
                tirada_cpu(tauler, top_cols, ratlla, colors, idioma);
            }
            else{
                tirada(torn, tauler, top_cols, idioma, ratlla, noms, dificultat, colors, comodins, comodins_restants, estiljoc, modejoc);
            }
        }
        torn=3-torn;                                  //quan torn=1 val 2 y quan torn=2 val 1.
        tirades++;
    }

    if (ratlla[0]==4 || ratlla[1]==4){
        if (ratlla[0]==ratlla[1]){ //EMPATE
            animacio_punts();
            (*empate)++;
            animacio_empate(idioma);
            return jugador_inici;
        }
        else{
            int guanyador = 1;
            if (ratlla[1]==4){
                guanyador=2;
            }
            // ANINCIEM GUANYADOR
            animacio_guanyar_ronda(idioma, noms, guanyador, *partides,colors);


            (partides_guanyades[(guanyador-1)])++;
            return guanyador;
        }
    }
    else{
        (*empate)++;
        animacio_punts();
        animacio_empate(idioma);
        return jugador_inici;
    }
}


int main(){
    srand(time(NULL)); //Definim una seed per tenir-la tot el programa

    animacion_4enralla();

    int punts;
    int jugador_inici;
    int partides, partides_guanyades[2]={0,0}, guanyador=0, empate;
    int idioma;
    int modejoc;
    int estiljoc;

    triar_idioma(&idioma);
    instruccions(idioma);

    char noms [2][40];
    int colors[2]={0,0}; //los inicializamos para el bucle de que los colores sean diferentes

    int tornar_a_jugar=1;
    while(tornar_a_jugar==1){
            //inicialitzem a 0 els valors per no tenir problemes quan fem un altre partida
            partides=1; partides_guanyades[0]=0; partides_guanyades[1]=0; guanyador=0; empate=0;

            mode_joc(idioma,&modejoc);
            estil_joc(idioma, &estiljoc);
            noms_jug(idioma,noms,modejoc);
            num_de_partides(idioma,&punts);


            int dificultat=dificultat_joc(idioma);

            triar_colors(idioma,noms,colors);

            triar_jugador(&jugador_inici, idioma, noms);



            while((partides_guanyades[0])<= punts/2 && (partides_guanyades[1])<=punts/2 && partides <=punts){
                if(partides>1){  //transició entre partides, nomes si no es la primera
                    animacio_fletxes();
                }
                jugador_inici=partida(jugador_inici, &partides,partides_guanyades, idioma, noms, modejoc, dificultat, colors, estiljoc, &empate);
                partides++;
                //Es juga la partida ia més es guarda el jugador inicial de la següent
                /// TEXTOS EN LOS IDIOMAS ///
                if (idioma==1) printf("\t\t\tPARTIDAS: %d; Victorias %s: %d, Victorias %s: %d\n",empate+partides_guanyades[0]+partides_guanyades[1],noms[0],partides_guanyades[0], noms[1], partides_guanyades[1]);
                else if (idioma==2) printf("\t\t\tPARTIDES: %d; Victories %s: %d, Victories %s: %d\n",empate+partides_guanyades[0]+partides_guanyades[1],noms[0], partides_guanyades[0],noms[1],partides_guanyades[1]);
                else if (idioma==3) printf("\t\t\tGAMES: %d; Wins %s: %d, Wins %s: %d\n",empate+partides_guanyades[0]+partides_guanyades[1],noms[0], partides_guanyades[0],noms[1],partides_guanyades[1]);
                /// /// /// /// /// /// /// /// /// /// /// ///
                sleep(3);
        }
        if(partides_guanyades[0]>partides_guanyades[1]){
                guanyador=1;
        }
        else if (partides_guanyades[1]>partides_guanyades[0]){
            guanyador=2;
        }
        else{
            guanyador=0;
        }
        if (guanyador!=0){
        animacio_guanyar_partida(idioma, noms, guanyador, partides,colors);
        }

        else{
        printf("\033[2J\033[H");
            animacio_empate(idioma);
        }
        tornar_a_jugar=animacio_tornar_a_jugar(idioma, tornar_a_jugar);
    }
    animacio_despedida();
=======
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

#include "Functions.h"

int main()
{
    system("chcp 65001 > nul");  //Per no tenir problemes amb el llenguatge amb UTF-8


    printf("INICI\n");
    printf("Si encara no saps com funciona la Notació Polonesa Inversa (RPN), vols aprendre?\nEn cas afirmatiu escriu 'si', si no, escriu qualsevol altre cosa:\n");

        char manual[4];

        fgets(manual, 4, stdin);  //intordueix per pantalla si vol llegir el manual o no.

        manual[strlen(manual)-1]='\0'; //natejem el vector per poder llegir que ha escrit.

        if (strcmp(manual, "si")==0){

            funciomanual();
        }
        printf("\n----------------------------------------------------------------------------------------------------------------\n\n");

        //fem el mateix amb les instruccions.
        printf("Vols llegir les instruccions? Escriu 'si' si les vols llegir i qualsevol altre cosa en cas contrari\n");

        //Preguntem a l'usuari si vol llegir les instruccions.

        char instruccions[4]; //Declarem el vector.

        fgets(instruccions, 4, stdin);

        instruccions[strlen(instruccions)-1]='\0';

        if (strcmp(instruccions, "si")==0){ //En cas que hagi introduit si, llegim les instruccions.

       /// INTRUCCIONS BÀSIQUES ///
       funcioinstruccions(); //cridem la funció que llegeix les instruccions.
        }
      printf("\n\nPassem ara a escollir el mode d'entrada de l'expressió que vols calcular\n");

     /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// /// ///

     //Introduim el vector amb el qual introduirem l'expressió RPN i la matriu RPN que contindrà l'expressió amb vectors {c,x}.

    char ENTRADA[MAX];
    double RPN[MAX][2]; //Declarem el vector RPN que farem servir per passar els arguments
    char continuar[3]="si"; //Preguntarem si vol continuar fent operacions o no
    continuar[2]='\0';

    while (strcmp(continuar, "si")==0){


    //Escollim com entrarem la expressio, per teclat o fitxer
    printf("\n\n------------------------------------------ESCULL EL MODE D'ENTRADA----------------------------------------------\n\n");
    printf("Si vols entrar l'expressió RPN per teclat escriu: t\n");
    printf("Si vols entrar l'expressió RPN per d'un fitxer escriu: f\n");

    char format[MAX];   //Declaració del vector on guardarem en quin mode o volem.

    fgets(format, MAX, stdin);   //Llegim quin mètode vol llegir la expressio.

    format[strlen(format)-1]='\0';   //Afegim un salt al final per que no doni problemes més endavant.

    printf("----------------------------------------------------------------------------------------------------------------");

    /// INTRODUIM LA EXPRESSIÓ QUE VOLEM CALCULAR ///

    //En cas de haver introduit teclat, fem un fgets per pantalla
    if (strcmp(format, "t")==0){
    puts("\n\n---------Has escollit introduir la expressió per teclat---------\n");
    printf("Introduiex l'expressió que vols calcular en llenguatge RPN: \n");

    fgets(ENTRADA, MAX, stdin);   //introduim l'expressió que volem calcular per pantalla.

    printf("Estem llegin l'expressió....\n");
    }

    //En cas de haver introduit fitxer, fem un fgets per pantalla per saber quin fitxer volem i posteriorment llegim aquest.

    else if(strcmp(format, "f")==0){

        printf("\n\nIntrodueix el nom del fitxer de text (No cal posar el .txt (exemple: FITXERRPN)): \n");

        char fitxer[MAX]; //Si el fitxer te més de 250 paraules al seu nom no ho llegirà però no hauria de pasar

        fgets(fitxer, MAX, stdin);      //Llegim el nom del fitxer
        fitxer[strlen(fitxer)-1]='\0'; //Eliminem tot allò que no sigui el nom intorduit per no tenir problemes (com amb el 0 del final).

        FILE*fin;                      //Declarem una nança
        strcat(fitxer, ".txt");        //Afegim el .txt al nom introduit per llegir-ho

        fitxer[strlen(fitxer)]='\0'; //Eliminem tot allò que no sigui el nom intorduit per no tenir problemes (com amb el 0 del final).

        printf("Estem llegint el fitxer %s....\n", fitxer);

        if((fin = fopen(fitxer, "r"))==NULL){
        fprintf(stderr, "\n \tERROR: El fitxer %s no es pot llegir....\n", fitxer);
        exit(-1);
         }
         else{
            fgets(ENTRADA, MAX, fin);       //Llegim el fitxer amb fgets.
            ENTRADA[strlen(ENTRADA)]='\n'; //fem un salt per detectar el final
            ENTRADA[strcspn(ENTRADA, "\n")+1]='\0';
        }
    }
    //Si no seleccionem fitxer ni teclat, declarem un error ja que no hi ha més modes d'entrada.
    else{
        fprintf(stderr, "\n \tERROR: La entrada a de ser per teclat o per fitxer.");
        exit(-1);
    }

    int L = strlen(ENTRADA); //ens guardem la longitud de la cadena ENTRADA.

    /// CALCULEM EL NOMBRE D'ESPAIS EN BLANC DE LA CADENA
    int p=0, espais=0;
    for (p=0; p<(L-1); p++){
        if (isspace(ENTRADA[p])){
            espais=espais+1;                            //Ens serà útil per passar la expressió al vector RPN.
        }
    }

    //Si sabem el nombre d'espais que hi ha, sabem quants grups de cadenes tenim i així creem una cadena auxiliar lo suficientment gran
    //per que no falti espai; anirem posant i treient els strings entre espais per convertir-los en la forma {c,x}

     p=0;    //ponemos la p a 0 para ir iterando la entrada.
     int h=0; //declarem una h per iterar el vector auxiliar
    char aux[L];
    for (int k=0 ; k <= espais ; k++ ){
            memset (aux, '\0' , strlen(aux)); //buidem el vector auxiliar per afegir els nous caràcters cada cop que iterem el procès.
            h=0;//Iteració del vector auxiliar

    while (((isalnum(ENTRADA[p]))||(isgraph(ENTRADA[p])))&&(p<(L-1))){   //Afegim al vector auxiliar amb el qual treballarem fins arribar a un espai.
        aux[h]=ENTRADA[p];
        p++;
        h++;
    }
    aux[h]='\0'; //Em iterat un cop més la h per tant la posició h serà la seguent.
    //Afegim un 0 per asegurar-nos que el vector auxiliar es buit a partir d'aqui.


    /// CODIFIQUEM L'EXPRESSIÓ A UN VECTOR (ANOMENAT RPN) ///
    codificacio (RPN, aux, k);
    ///                                                   ///

    p+=1;  //Pasem al següent
    }
    ///PASEM A AVALUAR EL VECTOR RPN i FER ELS CÀLCULS NECESSARIS

    for (int i=0; i<=espais; i++){ /// ¡ IMPORTANT ! AQUÍ POSEM i<=espais es a dir fem "espais"+1 operacions perquè tinc N espais el blanc per tant,
        ///després de l'últim en cara tinc una expressió.

       int j=RPN[i][0];    //Ens guardem el valor de la primera component per saber quin tipus de dada tenim i avaluar-la

       avaluaRPN(j, RPN[i][1]);   //Avaluem cada component del vector RPN

            j=0;
        }
    printf("----------------------------------------------------------------------------------------------------------------");
    printf("\n\n R: ");
    sortida();
    desempilar(); //Treiem el valor de la pila per si volem continuar.

    printf("\n\n----------------------------------------------------------------------------------------------------------------");
    printf("\nSi vols continuar fent càlculs introdueix 'si' en cas contrari, introdueix qualsevol altre digit:\n");
    fgets(continuar, 3, stdin);
    continuar[2]='\0';
    printf("\n");

    clean_stdin(); //Natejem el stdin per no tenir problemes.

    }
>>>>>>> 18670f5 (First commit)
    return 0;
}
