#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED


/// BIBLIOTEQUES ///
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
///             ///

/// DEFINICIONS ///

/// NOMBRES ///
#define NOMBRE 1
///       ///

///CONSTANTS///
#define CONSTANT 2
extern const double pi;
extern const double e;
extern const double Na;
extern const double c;
extern const double phi;
/// /// /// /// /// /// /// /// /// /// /// /// ///

///FUNCIONS///
#define FUNCIO 3

///Per pantalla s'ha d'introduir amb el llenguatge de la forma que esta en gris despr�s dels dos punts.

//0-->sinus: sin

//1-->cosinus: cos

//2--> tangent: tan

double tangent(double);

//3-->arcsinus: asin

double arcsin(double);

//4-->arccoscinus: acos

double arccos(double);

//5-->arctangent: atan

//6-->sinus hiperb�lic: sinh

//7-->cosinus hiperb�lic: cosh

//8-->tangent hiperb�lica: tanh

//9-->log_10: log10

double log_10(double);

//10-->logaritme neperi�: log

double lognep(double);

//11-->arrel quadrada: sqrt

double arrelqua(double);

//12-->valor absolut: fabs

//13-->factorial: factorial

double factorial(double);

/// FUNCIONS ALGEBR�IQUES ///
//14--> determinant: det

double determinant(double);

//15-->traza: traza

double traza(double);

//16--> producte escalar: prodesc

double prodesc(double );

/// /// /// /// /// /// /// ///
/// FUNCI� SUMATORI ///
// 17--> sumatori: sum

double sumatori (double);
///                 ///
/// FUNCI� PRODUCTORI ///
// 18--> productori: prod
double productori (double);
///                 ///
//19 --> sumartori2: sum2
double sumatori2 (double);
///                 ///

/// FUNCI� PRODUCTORI ///
// 20--> productori2: prod2

double productori2 (double);
///                 ///

/// FUNCI� VALOR ENTER ///
// 21--> valor enter: int

double enter (double);
///                 ///

/// AVALUACI� POLINOMIS ///
// 22-->polinomi : polinomi
double polinomi (double );

///                     ///
/// DERIVADA DEL POLINOMI ///

// 23-->derivada: derivada

double derivada (double n);
///                       ///
/// INTEGRAL DEL POLINOMI ///
//24-->integral: integral
double integral(double n);
///                       ///


#define OPERADOR 4
/// OPERADORS ///
//0--> '+'=suma=
double suma(double, double);

//1--> '-'= resta =
double resta (double, double);

//2--> '*'=producte=
double producte (double, double);

//3-->'/'=quocient=
double quocient(double, double);

//4--> '^'=exponencial =
double exponencial(double, double);

//5--> '>'=comparaci� major a..
double mesgran(double, double);

//6--> '<' = comparaci� menor a...
double mespetit(double, double);


//7-->'m'= m�nim com� m�ltiple
double mcm(double, double);

//8-->'M' =m�xim com� divisor
double mcd(double, double);

//9-->'comb'= nombre combinatori
double comb (double, double);


/// /// /// /// /// /// /// ///


///PAR�METRES UTILITZATS///
#define MAX 200 //m�xims elements a introduir
/// /// /// /// /// /// /// /// ///

/// DECLARACI� DE LA PILA ///
struct pila{          //Estructura definida sense typedef
double nombre;    //Nombre es un camp de tipus double
struct pila*seguent;  //Aquesta camp apuntar� al seg�ent valor de la pila (es a dir, al que s'hagi afegit anteriorment)
};

//Inici de la pila--A pesar que estigui buida, ha de ser-hi

extern struct pila*superior;

/// FUNCIONS PER MANIPULAR LA PILA ///

///   EMPILAR  ///
void empilar (double);
//afegeix el terme que demanem a la primera posici� de la pila
///            ///
/// DESEMPILAR ///
double desempilar(void);
//Treu �l primer terme de la pila (l'�ltim afegit)
///            ///
///  SORTIDA   ///
void sortida (void);
//Mostra el primer terme (l'�ltim afegit) i ens indica si encara queden m�s termes o no.
///            ///

/// FUNCIO PER NATEJAR EL STDIN ///
void clean_stdin (void);
///                            ///
/// FUNCIO PER CRIDAR LES INSTRUCCIONS///
void funcioinstruccions (void);
///                                   ///
/// FUNCIO PER CRIDAR AL MANUAL       ///
void funciomanual (void);
///                                   ///

/// FUNCI� CODIFICA EL VECTOR RPN     ///
void codificacio (double [][2], char [], int);
///                                   ///

/// FUNCI� QUE AVALUA CONSTANTS       ///
void avaluaconstant (int);
///                                   ///

/// FUNCIO QUE AVALUA EL VECTOR RPN  /// -funci� principal
void avaluaRPN (int, double );
///                                  ///

#endif // FUNCTIONS_H_INCLUDED
