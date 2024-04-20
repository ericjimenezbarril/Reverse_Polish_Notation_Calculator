#include <stdio.h>
#include <stdlib.h>

#include "main.h"
#include "crea arbre.h"
#include "minimax.h"


void replica_tauler(char tauler1[N][N], char tauler2[N][N]){
    for (int i= 0; i<N; i++){
        for (int j=0; j<N; j++){
            tauler1[i][j]=tauler2[i][j];
        }
    }
}


void replica_top_cols(int top_cols1[N], int top_cols2[N]){
    for (int i =0; i<N; i++){
        top_cols1[i]=top_cols2[i];
    }
}


int CalculaColumna(Node *p, int index){
    int cols_fills[p->n_fills];
    int fill_actual=0;
    for (int i=0; i<N;i++){
        if(p->tauler[0][i]==0){
            cols_fills[fill_actual]=i;
            fill_actual=fill_actual+1;
        }
    }
    return(cols_fills[index]);           //Lo que hago es que miro en cada columna si está libre o no, si está libre es que era un hijo y por tanto
                                         // le asigno a mi vector que ese está vacio. Lo hago porque así llego hasta mi "fill".
}
//Podriem haver creat un altre constant per assenyalar cuantes NO són buides i poder parar el "for" abans quan arribés a fill
// però he considerat que era més difícil d'interpretar i tampoc consumeix gaire memòria aquest for.


void RealitzarTirada(char tauler[N][N],int fila, int col, int nivell) {
	if (nivell%2==0){                //las tiradas de nivel par son de la persona (pues el nivel 0 es el tablero actual, nivel 1 tirada CPU)
        tauler[fila][col]=1;
	}
	else{
        tauler[fila][col]=2;
	}
}


int NumDeFills(char t[N][N]) {
     int nfills=0;
     for (int j=0; j<N;j++){
        if(t[0][j]==0){      //Si tengo espacio en la columna, puedo tirar en ella.
            nfills++;
        }
     }
     return nfills;
}


int guanyar (char tauler[N][N], int fila, int col, int torn){
    int aux[4]={1,1,1,1};                                                                   //definim un auxiliar i veurem si és més gran que el que ja teníem.
    int k[4]={1,1,1,1}, l[3]={1,1,1};                                                       //comencem en 1 ja que la fitxa inicial ja està explicada
    int dir_k[4][2]={{0, -1}, {1,-1}, {-1, -1}, {1,0}}, dir_l[3][2]={{0,1},{-1,1},{1,1}};   //Adreces en què es pot moure
    for (int i=0; i<4; i++){
        while (k[i]<4  &&
               tauler[fila+dir_k[i][0]*k[i]][col+dir_k[i][1]*k[i]]==torn  &&
               (fila+dir_k[i][0]*k[i]>=0) &&
               (fila+dir_k[i][0]*k[i]<N) &&
               (col+dir_k[i][1]*k[i]>=0)){
            aux[i]++;
            k[i]++;
        }
        if (i<3){                                                                           //per a la vertical NO mirem a dalt
             while (l[i]<=(4-k[i])  &&
                    (tauler[fila+dir_l[i][0]*l[i]][col+dir_l[i][1]*l[i]]==torn)  &&
                    (fila+dir_l[i][0]*l[i]>=0)
                    && (fila+dir_l[i][0]*l[i]<N)  &&
                    (col+dir_l[i][1]*l[i]<N)){
                aux[i]++;
                l[i]++;
            }
        }
    }
    for (int i=1; i<4; i++){
        if (aux[i]<aux[i-1]){
            aux[i]=aux[i-1];
        }
    }
    return aux[3];
}


Node *creaNode(Node *pare, int numDeFill,int nivell) {
	Node *p=malloc(sizeof(Node));
	p->nivell=nivell;
	replica_tauler(p->tauler, pare->tauler);
	replica_top_cols(p->top, pare->top);
    int col=CalculaColumna(pare, numDeFill);          //Podria calcular la fila i la columna dins de "Realitzar Tirada" però ho faig per simplificar la funció guanyar
	(p->top)[col] = (pare->top)[col] -1;              //actualitzem el top d'aquesta columna
	int fila=(p->top)[col];
	RealitzarTirada(p->tauler, fila, col, nivell);            //Aplicarem tirades tant de la CPU com simulant al jugador 1
	if (nivell<NIVELL && guanyar(p->tauler, fila, col,(nivell%2)+1)!=4) {     //pues el turno es 1 de la persona y 2 de la máquina y guanyar vale 4 cuando se gana
		p->n_fills = NumDeFills(p->tauler);
		p->fills = malloc( p->n_fills * sizeof(Node *));
	}
	else {    //Serà una fulla ja que no hi ha més pasos
		p->n_fills = 0;
		p->fills = NULL;
		p->valor= Heuristica(p);
	}
	return p;
}


void crea1Nivell(Node *pare,int nivell) {    //el nove pare serà l'arrel en aquell moment i la profunditat el nostre nivell
	for(int i=0;i<pare->n_fills;i++) {
		pare->fills[i]=creaNode(pare,i,nivell);
	}
}


void creaArbre(Node *arrel) {
	crea1Nivell(arrel,arrel->nivell+1);            //A classe vam posar 1, doncs estavem fent de 2 nivells, ara hem creat una
	for(int i=0;i<arrel->n_fills;i++) {          // nova varaible "nivell" que indica en quin nivell estem per crear un nou nivell
		if (arrel->nivell<NIVELL){                 //S'ha de posar un límit de nivell per parar la funció
            creaArbre(arrel->fills[i]);            //Cada fill para a ser una "arrel" nova; A classe vam posar crea1Nivell(arrel,2) ja que només voliem fer 2 nivells
		}
	}
}


void EsborrarArbre(Node *arrel){
    if(arrel->n_fills == 0)
    {
        free(arrel);
    }
    else
    {
        for (int i=0; i<arrel->n_fills; i++)
        {
            EsborrarArbre(arrel->fills[i]);
        }
        free(arrel->fills);
        free(arrel);
    }
}


void tirada_cpu(char tauler[N][N], int top_cols[N], int ratlla[2], int colors[2], int idioma){
    Node *arrel = malloc(sizeof(Node));
    replica_tauler(arrel->tauler, tauler);
    replica_top_cols(arrel->top, top_cols);
    arrel -> n_fills = NumDeFills(arrel->tauler);               //número de fills de l'arrel
    arrel ->nivell   = 0;                                       //inicialitzem el nivel a 0.
    arrel -> fills = malloc((arrel->n_fills) * sizeof(Node*));  // Guardem espais pels fills de l'arrel
    creaArbre(arrel);
    MiniMax(arrel);
    int fill= EscollirFill(arrel);
    int col=CalculaColumna(arrel, fill);
	int fila=((arrel->top)[col])-1;

    printf("\033[2J\033[H");
	///IDIOMES
	if (idioma==1)printf("\t\t\tLa CPU ha tirado en la columna %d\n",col+1);
	else if (idioma==2)printf("\t\t\tLa CPU ha tirat a la columna %d\n",col+1);
	else if (idioma==3)printf("\t\t\tLa CPU has shot in column %d\n",col+1);
    /////////

    RealitzarTirada(arrel->tauler, fila, col, (arrel->nivell)+1);
    replica_tauler(tauler, arrel->tauler);
    top_cols[col]--;
    EsborrarArbre(arrel);
    recompte(ratlla, 2, tauler, fila, col);  //Fem el recompte habitual
    imprimeix(tauler, colors);
}

