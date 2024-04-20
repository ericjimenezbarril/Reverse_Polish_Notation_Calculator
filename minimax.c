#include "main.h"
#include "crea arbre.h"
#include "minimax.h"


int posible_guanyar_directe(char tauler[N][N], int top_cols[N]){
    int result=0;
    int direccions[4][2]={{1,-1},{1,1},{1,0},{0,1}};
    int direccions2[4][2]={{-1,1},{-1,-1},{-1,0},{0,-1}};
    ///fila de 3
    //El que farem serà posar un 3 per les caselles que ja haguem passat, d'aquesta manera no repetirem en comptar
    //for (int j=0; j<N; j++){ --> Esto es mala idea, porque solo contará 1 de las jugadas si tienes x ejemplo un 7
    for(int j=0; j<N; j++){ for (int i=top_cols[j]; i<N; i++){ for(int k=0; k<4; k++){
                if (tauler[i][j]==1 || tauler[i][j]==2){
                     if ((i+direccions[k][0]*2)>0 &&
                         (i+direccions[k][0]*2)<N &&
                         (j+direccions[k][1]*2)>0 &&
                         (j+direccions[k][1]*2)<N){
                        if (tauler[i+direccions[k][0]][j+direccions[k][1]]==tauler[i][j] &&
                            tauler[i+2*direccions[k][0]][j+2*direccions[k][1]]==tauler[i][j]){
                            if ((i+3*direccions[k][0])<N &&
                                (j+3*direccions[k][1])<N &&
                                (j+3*direccions[k][1])>0 &&
                                tauler[i+3*direccions[k][0]][j+3*direccions[k][1]]==0){
                                result=result+(2*tauler[i][j]-3); //Retorna -1 si tauler[i][j]=1 o 1 si tauler[i][j]=2
                            }
                            if ((i+direccions2[k][0])>0 &&
                                (j+direccions2[k][1])>0 &&
                                (j+direccions2[k][1])<N &&
                                tauler[i+direccions2[k][0]][j+direccions2[k][1]]==0){
                                result=result+(2*tauler[i][j]-3); //Retorna -1 si tauler[i][j]=1 o 1 si tauler[i][j]=2
                            }
                        }
                    }
                }
    }}}

/// 2 + hueco + 2
        for (int j=0; j<N; j++){ for (int i=top_cols[j]; i<N; i++){ for(int k=0; k<4; k++){        //Per cada casella i direcció
            if (tauler[i][j]==1 || tauler[i][j]==2){
                if ((i+4*direccions[k][0])>0 &&
                    (i+4*direccions[k][0])<N &&
                    (j+4*direccions[k][1])>0 &&
                    (j+4*direccions[k][1])<N ){
                    if (tauler[i+direccions[k][0]][j+direccions[k][1]]==tauler[i][j] &&
                        tauler[i+3*direccions[k][0]][j+3*direccions[k][1]]==tauler[i][j] &&
                        tauler[i+4*direccions[k][0]][j+4*direccions[k][1]]==tauler[i][j]){
                        if ((i+2*direccions[k][0])<N &&
                            (j+2*direccions[k][1])>0 &&
                            tauler[i+2*direccions[k][0]][j+2*direccions[k][1]]==0){
                            result=result+10*(2*tauler[i][j]-3); //Retorna -10 si tauler[i][j]=1 o 10 si tauler[i][j]=2
                        }
                    }
                }
            }
    }}}
        return result;
}


int set_guanyador(char tauler[N][N], int top_cols[N]){
    int set=0;                                //Els que estan "boca amunt" compten +3, els que estan "boca avall" compten +2
    for (int j=1; j<(N-3); j++){ //estudiaremos el inicio de la serie por lo tanto máximo llegaremos a la columna 4, pues tiene que haber 3 de tu número + 1 cero delante (por eso empezamos por 1 + 1 cero detrás
        for (int i=top_cols[j]; i<(N-2); i++){ //Pues tendrá que haber 2 abajo
            if (i>0){         //para que podamos tener la de arriba
                if (tauler[i][j]==1 || tauler[i][j]==2){
                    if (tauler[i][j+1]==tauler[i][j] &&
                        tauler[i][j+2]==tauler[i][j] &&
                        tauler[i][j+3]==0 &&
                        tauler[i][j-1]==0 &&
                        tauler[i+1][j+1]==tauler[i][j]){
                        ///Mirando alante
                        if(tauler[i+2][j]==tauler[i][j]&& tauler[i-1][j+3]==0){
                                set=set+3*(2*tauler[i][j]-3);}  //+3 si es 2, -3 si es 1
                        ///Mirando atrás
                        if(tauler[i+2][j+2]==tauler[i][j] && tauler[i-1][j-1]==0){
                            set=set+3*(2*tauler[i][j]-3);}
                    }

                }
                if (tauler[i+2][j+2]==1 || tauler[i+2][j+2]==2){
                    if (tauler[i+2][j+1]==tauler[i+2][j+2] &&
                        tauler[i+2][j]==tauler[i+2][j+2] &&
                        tauler[i+1][j+1]==tauler[i+2][j+2] &&
                        tauler[i+2][j-1]==0 &&
                        tauler[i+2][j+3]==0){
                        ///Mirando alante
                        if(tauler[i][j+2]==tauler[i+2][j+2] &&
                           tauler[i-1][j+3]==0){
                                set=set+3*(2*tauler[i+2][j+2]-3);}    //+3 si es 2, -3 si es 1
                        ///Mirando atrás
                        if(tauler[i][j]==tauler[i+2][j+2] &&
                           tauler[i-1][j-1]==0){
                               set=set+3*(2*tauler[i+2][j+2]-3);}
                    }
                }
            }
        }
    }
    return set;
}


int tirs_centrats(char tauler[N][N], int top_cols[N]){  //apertura "centre_complet"

    int result=0;
    int puntuacions[4]={0, 1, 10, 100};
    for(int j=0; j<N/2; j++){
        for (int i=top_cols[j]; i<N; i++){
                result=result+puntuacions[j]*(2*tauler[i][j]-3);
        }
    }///Top cols <N porque si no es que no hay fichas
    for (int j=N/2; j<N; j++){
        for (int i=top_cols[j]; i<N; i++){
            result=result+puntuacions[N-1-j]*(2*tauler[i][j]-3);
        } ///Bonifiquem les caselles centrals, +1 si es torn 2, -1 si es torn1
    }

    return result;
}
///No podem aplicar la estratègia de "defensa escalonada" doncs tenim 8 columnes (no podem bloquejar la central)
///De totes maneres la màquina per si sola ja fa blocs en columnes.


int Heuristica(Node * p){
    int recompte=0;
    for (int i=0; i<N; i++){
        if ((p->top)[i]<N){         //Si no lo mira cuando aún no hay fichas en esa columna
            if (guanyar(p->tauler,(p->top)[i], i, (p->tauler)[(p->top)[i]][i])==4){
                recompte=10000000*(10-(p->nivell));
            }
        }
    }
    if (p->nivell%2==0){
        recompte= -recompte; //Pues habrá sido en el turno de la persona
    }
    if ((p->nivell)==NIVELL){              //Esto solo ocurriría en el nivel 6, porque si para antes es poruque ya ha ganado y si lo miramos en otros niveles que implica que
            //ha ganado, estamos sumando por sumar (pues la jugada de ganar es mejor)
        recompte+=10000* set_guanyador(p->tauler, p->top);
        recompte+= 1000* posible_guanyar_directe(p->tauler, p->top);    //por lo que para hacer menos cálculos, pedimos nivel 6, excluiremos las victorias.
    }

    recompte+=tirs_centrats(p->tauler, p->top);  //Esto simplemente servirá para desempatar situaciones.


    return recompte;
}


int EscollirFill(Node *p){
    srand((unsigned int)time(NULL));
    int escollits[p->n_fills];
    int repes=0;
    for (int i=0; i<p->n_fills; i++){                 //Me guardo solo los escogidos
        if (p->valor == (p->fills[i]->valor)){
            escollits[repes]=i;
            repes++;
        }
    }
    int escollit=rand()%repes;
    return(escollits[escollit]);
}


int minim(int i, int v[i]){
    for (int j=1; j<i; j++){
        if (v[j]>v[j-1]){
            v[j]=v[j-1];
        }
    }
    return v[i-1];
}


int maxim (int i, int v[i]){
    for (int j=1; j<i; j++){
        if (v[j]<v[j-1]){
            v[j]=v[j-1];
        }
    }
    return v[i-1];
}


int MiniMax(Node *p){
    if(p->n_fills==0){
        //printf("Estic a nivell %d i retorno valor %d\n", p->nivell, p->valor);
        //imprimeix(p->tauler);
        return p->valor;
    }
    else{
        if ((p->nivell)%2==0){         //nivell parell, asignem el màxim dels fills
            int valors[p->n_fills];
            for(int i=0;i<p->n_fills;i++)
            {
                valors[i] = MiniMax(p->fills[i]);
            }
            p->valor=maxim(p->n_fills, valors);
            //printf("Estic a nivell %d i retorno valor %d\n", p->nivell, p->valor);
            //imprimeix(p->tauler);
            return p->valor;
        }
        else{     //nivell senar, asignem el mínim dels fills
            int valors[p->n_fills];
            for(int i=0;i<p->n_fills;i++){
                valors[i] = MiniMax(p->fills[i]);
            }
            p->valor=minim(p->n_fills, valors);
            //printf("Estic a nivell %d i retorno valor %d\n", p->nivell, p->valor);
            //imprimeix(p->tauler);
            return p->valor;
        }
    }
}

