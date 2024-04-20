#include "Functions.h"

///CONSTANTS///
#define CONSTANT 2

// 0-->pi
const double pi = 3.1415926535897932;
// 1--> e
const double e= 2.718281828459045235;
// 2 --> Na
const double Na= 6.022140857e23;  //Número Avogadro
// 3 --> c
const double c= 2.99792458e8;   //Velocitat de la llum
// 4--> phi
const double phi= 1.618033988;   //Nombre auri

struct pila* superior = NULL;

/// OPERADORS ///
/// SUMA ///
double suma (double a, double b)
{
    return (a+b);
}
///       ///
/// RESTA ///
double resta (double a, double b)
{
    return ((a)-(b));
}
///          ///
/// PRODUCTE ///
double producte (double a, double b)
{
    return (a*b);
}
///           ///
/// QUOCIENT ///
double quocient(double a, double b)
{
    if (b==0){
        fprintf(stderr, "\n(VALUE ERROR) ERROR: Has intentat calcular el quocient entre 0 que no es al domini de la funcio 1/x.\n");
        exit(-1);
        exit(-1);
    }
    else{
    return (a/b);
    }
}
///             ///
/// EXPONENCIAL ///
double exponencial(double a, double b)
{
    return (pow(a, b));
}

///              ///
/// COMPARADOR MÉS GRAN ///
double mesgran(double a, double b)
{
    if (a>b){
        return 1;
    }
    else{
        return 0;
    }
}
///                  ///
/// COMPARADOR MÉS PETIT ///
double mespetit(double a, double b)
{
    if (a<b){
        return 1;
    }
    else{
        return 0;
    }
}
///                  ///
///  OPERADORS PER NOMBRES ENTERS ///
/// MÀXIM COMÚ DIVISOR ///
double mcd(double n, double m)
{
   int enter1, enter2;

    enter1 = n;  //aqui s'agafa només el valor enter
    enter2= m;

    if (((n-enter1)!=0)||((m-enter2)!=0)){   //Si el valor era un enter, aquest valor serà 0
        fprintf(stderr, "\n(VALUE ERROR) ERROR: Has intentat calcular el màxim comú divisor de %lf i %lf; un dels dos no és un valor enter.", n, m);
        exit(-1);
    }
    else
    {
        //Apliquem l'algorisme d'Euclides
        int c; //per anar fent els càlculs
      while(enter2!=0){
        c=enter2; //guardem la b
        enter2=enter1%enter2; //la posició de la b pasa a ser el residu entre a i b
        enter1=c;
      }
    }
    //ens interessa treballar amb doubles
    double mcd= enter1;
    return mcd;
}
///                     ///
/// MÍNIM COMÚ MÚLTIPLE ///
double mcm( double n, double m)
{
     int enter1, enter2;

    enter1 = n;  //aqui s'agafa només el valor enter
    enter2= m;

    if (((n-enter1)!=0)||((m-enter2)!=0)){   //Si el valor era un enter, aquest valor serà 0
        fprintf(stderr, "\n(VALUE ERROR) ERROR: Has intentat calcular el mínim comú múltiple de %lf i %lf; un dels dos no és un valor enter.", n, m);
        exit(-1);
    }
    else
    {
     return fabs(m*n)/mcd(n, m); //Sabem que mcd*mcm=|N*M|
    }
}

///              ///
/// NOMBRE COMBINATORI ///
double comb(double a, double b)
{
    int enterA, enterB;

    enterA = a, enterB= b;  //aqui s'agafa només el valor enter

    if (((a-enterA)!=0)||((b-enterB)!=0)){
        fprintf(stderr, "(ValueError) ERROR: Has intentat calcular el combinatori de %lf i %lf on hi ja algun valor decimal.", a, b);
        exit(-1);
    }
    else{
    if (a<b) {
        fprintf(stderr, "(ValueError) ERROR: Has intentat calcular el factorial de %lf sobre %lf. \nNo es posible ja que %lf es major a %lf.\n", a, b, a, b);
        exit(-1);
    }
    if (b==0){
        return 1;
    }
    else{
        return ( factorial(a) / (factorial(b) * factorial(a-b)) );
    }
    }
}
///                    ///

/// FUNCIONS /// Declarem funcions que tenen problemes amb el domini per donar un avis en cas de sortir-se

///   TANGENT  ///
double tangent(double a)
{
    //Sabem que la tangent no està definida en els punts on el coseno es zero
    if (a==(pi/2)){
        fprintf(stderr, "\n(VALUE ERROR) ERROR: Has intentat calcular la tangent de pi/2 que no es al domini de la funcio.\n");
        exit(-1);
    }
    else{
        return tan(a);
    }
}
///              ///
///  ARCSINUS ///
double arcsin(double a)
{
    //Sabem que la funcio arcsinus només està definida entre [-1, 1]
    if ((a<-1)||(a>1)){
        fprintf(stderr, "\n(VALUE ERROR) ERROR: Has intentat calcular l'arc sinus de %lf que no es al domini de la funcio.\n", a);
        exit(-1);
    }
    else{
        return asin(a);
    }
}
///              ///

/// ARC COSINUS  ///
double arccos(double a)
{
    //Sabem que la funcio arccosinus només està definida entre [-1, 1]
    if ((a<-1)||(a>1)){
        fprintf(stderr, "\n(VALUE ERROR) ERROR: Has intentat calcular l'arc cosinus de %lf que no es al domini de la funcio.\n", a);
        exit(-1);
    }
    else{
        return acos(a);
    }
}
///              ///

/// LOGARITME EN BASE 10  ///
double log_10(double a)
{
    //Sabem que el domini de la funcio logaritme en base 10 son els reals positius
    if (a<=0){
        fprintf(stderr, "\n(VALUE ERROR) ERROR: Has intentat calcular el logaritme base 10 de %lf que no es al domini de la funcio.\n", a);
        exit(-1);
    }
    else{
        return log10(a);
    }
}
///                    ///

/// LOGARITME NEPERIÀ  ///
double lognep(double a)
{
    //Sabem que el domini de  la funcio logaritme neperià son els reals positius
    if (a<=0){
        fprintf(stderr, "\n(VALUE ERROR) ERROR: Has intentat calcular el logaritme neperia de %lf que no es al domini de la funcio.\n", a);
        exit(-1);
    }
    else{
        return log(a);
    }
}
///                    ///

/// ARREL QUADRADA ///

double arrelqua(double a)
{
    //Sabem que el domini de l'arrel quadrada son els reals positius i el zero
        if (a<0){
            fprintf(stderr, "\n(VALUE ERROR) ERROR: Has intentat calcular l'arrel quadrada %lf que no es al domini de la funcio.\n", a);
            exit(-1);
        }
        else{
            return sqrt(a);
        }
}
///                    ///

/// FACTORIAL ///
double factorial(double n)
{
    int enter;

    enter = n;  //aqui s'agafa només el valor enter

    if ((n-enter)!=0){   //Si el valor era un enter, aquest valor serà 0
        fprintf(stderr, "\n(VALUE ERROR) ERROR: Has intentat calcular el factorial de %lf que es un valor decimal.\n", n);
        exit(-1);
    }
    else
    {
        if (n==0){
            return 1;
        }
        else{
            int m=n;
            double prod=1;
            for (int j=1; j<=m; j++)
            {
            prod=prod*j;
            }
            return prod;
    }
    }
}


///             ///

/// FUNCIONS ALGEBRÀIQUES ///

///DETERMINANT  ///
double determinant(double n)
{
    int enter;

    enter = n;  //aqui s'agafa només el valor enter

    if ((n-enter)!=0){
        fprintf(stderr, "\n(VALUE ERROR) ERROR: Has indicat que la dimensio es %lf que no es un nombre natural.\n", n);
        exit(-1);
    }
    else
    {
        if (n<=0){
            fprintf(stderr, "\n(VALUE ERROR) ERROR: Has indicat que la dimensio es %lf, la dimensio ha de ser major o  igual a 1.\n", n);
        exit(-1);
    }
        else if (n==1){
            double valor1= desempilar();
            return valor1;
        }
        else if(n==2){
            double m11, m12, m21 ,m22;
             m22=desempilar();
             m21=desempilar();
             m12=desempilar();
             m11=desempilar();
             double det= m11*m22-m12*m21;
            return det;
        }
        else if(n==3){
            double m11, m12, m13, m21 ,m22, m23, m31, m32, m33;
            m33=desempilar();
            m32=desempilar();
            m31=desempilar();
            m23=desempilar();
            m22=desempilar();
            m21=desempilar();
            m13=desempilar();
            m12=desempilar();
            m11=desempilar();

            double det= m11*m22*m33 + m21*m32*m13 + m12*m23*m31 - m13*m22*m31 - m32*m23*m11 - m21*m12*m33;
            return det;
        }
        else{
            fprintf(stderr, "\n(VALUE ERROR) ERROR: Has indicat que la dimensio es %lf, la dimensio maxima es 3.\n", n);
        exit(-1);
        }
    }
}
///                    ///

/// TRAÇA  ///
double traza(double n)
{
    int enter;

    enter = n;  //aqui s'agafa només el valor enter

    if ((n-enter)!=0){
        fprintf(stderr, "\n(VALUE ERROR) ERROR: Has indicat que la dimensio es %lf que no es un nombre natural.\n", n);
        exit(-1);
    }
    else
    {
        if (n<=0){
            fprintf(stderr, "\n(VALUE ERROR) ERROR: Has indicat que la dimensio es %lf, la dimensio ha de ser major o  igual a 1.\n", n);
        exit(-1);
    }
        else if (n==1){
            double m11= desempilar();
            return m11;
        }
        else{
            double suma=0;
            double termes[MAX];
            for (int i=n*n-1; i>=0; i--){
                termes[i]=desempilar();
            }
            for (int j=0; j<n*n; j+=n+1){
                suma+=termes[j];
            }
            return suma;
        }

    }
}

///                  ///

/// PRODUCTE ESCALAR ///
double prodesc(double n)
{
    int enter;

    enter = n;  //aqui s'agafa només el valor enter  //ens indica la dimensió de l'espai

    if ((n-enter)!=0){
        fprintf(stderr, "\n(VALUE ERROR) ERROR: Has indicat que la dimensio es %lf que no es un nombre natural.\n", n);
        exit(-1);
    }
    else
    {
        if (n<=0){
            fprintf(stderr, "\n(VALUE ERROR) ERROR: Has indicat que la dimensio es %lf, la dimensio ha de ser major o  igual a 1.\n", n);
        exit(-1);
    }
        else if (n==1){
            double m1= desempilar();
            double n1=desempilar();
            return m1 * n1;
        }
        else{
            double producteescalar=0;
            double vector1[enter];
            double vector2[enter];
            for (int i=enter-1; i>=0; i--){
                vector1[i]=desempilar();
                printf("1-> %lf\n", vector1[i]);
            }
            for (int i=enter-1; i>=0; i--){
                vector2[i]=desempilar();
                printf("2-> %lf\n", vector2[i]);
            }
            for (int j=0; j<enter; j++){
                producteescalar+=vector1[j]*vector2[j];

            }
            return producteescalar;
        }

    }
}
///                 ///
/// FUNCIÓ SUMATORI ///
double sumatori (double n)
{
       int enter;

    enter = n;  //aqui s'agafa només el valor enter

    if ((n-enter)!=0){   //Si el valor era un enter, aquest valor serà 0
        fprintf(stderr, "\n(VALUE ERROR) ERROR: Has intentat calcular el sumatori de %lf termes, que es un valor decimal.\n", n);
        exit(-1);
    }
    else
    {
        if (n<=0){
            fprintf(stderr, "\n(VALUE ERROR) ERROR: Has intentat calcular el sumatori de %lf termes, introdueix com a mínim un.\n", n);
        exit(-1);
        }
        else{
            double sumatori=0;
            for (int i=0; i<n; i++){
                double a= desempilar();
                sumatori+=a;
            }
            return sumatori;
    }
    }
}

///                 ///
/// FUNCIÓ PRODUCTORI ///
double productori (double n)
{
       int enter;

    enter = n;  //aqui s'agafa només el valor enter

    if ((n-enter)!=0){   //Si el valor era un enter, aquest valor serà 0
        fprintf(stderr, "\n(VALUE ERROR) ERROR: Has intentat calcular el sumatori de %lf termes,\n que es un valor decimal.\n", n);
        exit(-1);
    }
    else
    {
        if (n<=0){
            fprintf(stderr, "\n(VALUE ERROR) ERROR: Has intentat calcular el productori de %lf termes, \nintrodueix com a mínim un.\n", n);
        exit(-1);
        }
        else{
            double productori=1;
            for (int i=0; i<n; i++){
                double a= desempilar();
                productori*=a;
            }
            return productori;
    }
    }
}
///                 ///


/// FUNCIÓ SUMATORI2 ///
double sumatori2 (double k)
{
    double m= desempilar(); //per saber l'inici del sumatori.
    double n=desempilar();  //per saber el final.
    if (((k>0) && (n>=m))||((k<0) && (n<=m))||(k==0)){
        fprintf(stderr, "\n(VALUE ERROR) ERROR: Has intentat calcular el sumatori de %lf a %lf, amb un increment %lf,\n però això no es possible.\n", n, m, k);
        exit(-1);
    }

  double sumatori=0;
  for (int i=n; i<=m; i=i+k){
    sumatori+=i;
  }
  return sumatori;
}

///                 ///
/// FUNCIÓ PRODUCTORI2 ///
double productori2 (double k)
{
     double m= desempilar(); //per saber l'inici del sumatori.
    double n=desempilar();  //per saber el final.

    if (((k>0) && (n>=m))||((k<0) && (n<=m))||(k==0)){
        fprintf(stderr, "\n(VALUE ERROR) ERROR: Has intentat calcular el productori de %lf a %lf, amb un increment %lf,\n però això no es possible.\n", n, m, k);
        exit(-1);
    }
        double productori=1;
        for (int i=n; i<=m; i=i+k){
            productori*=i;
        }
        return productori;
}
///                 ///
/// FUNCIÓ VALOR ENTER ///
double enter (double n)
{
    int enter;
    double valor;
    enter=n; //el transformem a valor enter
    valor=enter; //ho retornem com a double
    return valor;
}
///                 ///

/// FUNCIONS DE POLINOMIS ///

/// AVALUA POLINOMI ///
double polinomi (double n)
{

           int enter;

    enter = n;  //aqui s'agafa només el valor enter

    if ((n-enter)!=0){   //Si el valor era un enter, aquest valor serà 0
        fprintf(stderr, "\n(VALUE ERROR) ERROR: Has indicat que el polinomi té grau %lf que no és un valor enter.\n", n);
        exit(-1);
    }
    else
    {
        double result=0;
        double valor= desempilar();
        double grau[enter+1];

        for (int i=enter; i>=0; i--){
                grau[i]=desempilar();  //mirem el coeficient de cada grau
        }
        for (int i=0; i<=enter; i++){
            result+= grau[i]*pow(valor, i);
        }
        return result;
    }

}
///                 ///
/// DERIVADA DEL POLINOMI ///
double derivada (double n)
{

           int enter;

    enter = n;  //aqui s'agafa només el valor enter

    if ((n-enter)!=0){   //Si el valor era un enter, aquest valor serà 0
        fprintf(stderr, "\n(VALUE ERROR) ERROR: Has indicat que el polinomi té grau %lf que no és un valor enter.\n", n);
        exit(-1);
    }
    else
    {
        double result=0;
        double valor= desempilar();
        double grau[enter+1];

        for (int i=enter; i>=0; i--){
                grau[i]=desempilar();  //mirem el coeficient de cada grau
        }
        grau[0]=0; //En la derivada s'anula
        for (int i=1; i<=enter; i++){
            result+= (i)*grau[i]*pow(valor, (i-1));
        }
        return result;
    }

}

///                     ///
/// INTEGRAL DEL POLINOMI ///
double integral(double n)
{
    int enter;

    enter = n;  //aqui s'agafa només el valor enter

    if ((n-enter)!=0){   //Si el valor era un enter, aquest valor serà 0
        fprintf(stderr, "\n(VALUE ERROR) ERROR: Has indicat que el polinomi té grau %lf que no és un valor enter.\n", n);
        exit(-1);
    }
    else
    {
        double result=0;
        double valor2= desempilar();
        double valor1= desempilar();   //Definició dels extrems de la integral
        double grau[enter+1];

        for (int i=enter; i>=0; i--){
                grau[i]=desempilar();  //mirem el coeficient de cada grau
        }
        for (int i=0; i<=enter; i++){
            result+= ((grau[i]*pow(valor2, (i+1)))/(i+1));
        }
        for (int i=0; i<=enter; i++){
            result-= ((grau[i]*pow(valor1, (i+1)))/(i+1));
        }
        return result;
    }

}

/// FUNCIÓ QUE CODIFICA L'EXPRESSIÓ AL VECTOR RPN ///

void codificacio (double RPN[][2], char aux[], int k)
{
    /// DECLARACIÓ DE FUNCIONS, CONSTANTS I OPERADORS


  // FUNCIONS //

  char funcions[26][11]={"sin", "cos", "tan", "asin", "acos", "atan", "sinh", "cosh", "tanh", "log10", "log", "sqrt", "fabs",
  "factorial", "det", "traza", "prodesc", "sum", "prod", "sum2", "prod2", "int", "polinomi", "derivada", "integral"};

  /// /// /// /// /// /// /// /// /// /// /// /// /// ///

  // CONSTANTS //

  char constants[6][4]= {"pi","e","Na","c","phi"};
  char constantsnegatives[6][5]={"-pi","-e","-Na","-c","-phi"};


    // OPERADORS //
    char operadors[11][5]={"+", "-", "*", "/", "^",">", "<", "mcm", "mcd", "comb"};


    /// /// /// /// /// /// /// /// /// /// /// /// /// ///


    ///ENTREM ELS NOMBRES
    if (isdigit(aux[0])){ //Si la instrucció està ben introduida, si el primer terme es un nombre, tot serà un nombre
        RPN[k][0]=1;          //Recorem que agafem la k que estem iterant
        RPN[k][1]=atof(aux);
    }

    ///PENSEM EN ELS NEGATIUS
    else if ((aux[0]=='-')&&(isdigit(aux[1]))){ //Si la instrucció està ben introduida, si el primer terme es un nombre, tot serà un nombre
       RPN[k][0]=1;
       RPN[k][1]=atof(aux);
    }
    else if (isalpha(aux[0])||((aux[0]=='-')&&(isalpha(aux[1])))){ //De nou, si la primera es un caràcter o seran tots
            //I podem prendre una constant negativa
        ///Estudiem que serà
        ///Afegim primer les constants

           RPN[k][0]=50;    ///ELS INICIALITZEM A UN NÚMERO QUE NO APAREIX PER PODER FER UN BUCLE I EN CAS DE NO ASSIGNAR-SE UN ALTRE DONAR ERROR.
           RPN[k][1]=50;
            for (int l=0; (l<5)&&(RPN[k][0]==50)&&(RPN[k][1]==50); l++){ //Per les constants
                if (strcmp(aux, constants[l])==0){
                    RPN[k][0]=2;
                    RPN[k][1]=l;
                    }
                }
            for (int m=0; (m<5)&&(RPN[k][0]==50)&&(RPN[k][1]==50); m++){ //Per les constants negatives
                if (strcmp(aux, constantsnegatives[m])==0){
                    RPN[k][0]=2;
                    RPN[k][1]=5+m;
                }
            }
            ///ARA AFEGIM LES FUNCIONS

            for (int n=0; (n<26)&&(RPN[k][0]==50)&&(RPN[k][1]==50); n++){ //Per les funcions
                if (strcmp(aux, funcions[n])==0){
                    RPN[k][0]=3;
                    RPN[k][1]=n;
                }
            }
            for (int r=7; r<=9; r++){
                if (strcmp(aux, operadors[r])==0){   //afegim els operadors que s'els crida amb text
                    RPN[k][0]=4;
                    RPN[k][1]=r;
                }
            }
            if ((RPN[k][0]==50)||(RPN[k][1]==50)){ //En cas de que cap s'hagi assignat donem error (seria suficient comprovar un però no perdem res comprovant els dos
                printf("\n(SINTAX ERROR) ERROR: Has introduit una expressió incorrecta o has demanat una funció no declarada a la calculadora\n");
            }
         }
     /// EN CAS QUE SIGUI UN OPERADOR

    else if ((strlen(aux)==1)&&(isdigit(aux[0])==0)){

        //Si es un gràfic, nomès té longitud 1 i no serà un digit per tant isdigit==0
        //Pot estar demanant el combinatori de dos nombres que ho pasem com operador
        RPN[k][0]=50;    ///ELS INICIALITZEM A UN NÚMERO QUE NO APAREIX PER PODER FER UN BUCLE I EN CAS DE NO ASSIGNAR-SE UN ALTRE DONAR ERROR.
        RPN[k][1]=50;
            for (int m=0; (m<7)&&(RPN[k][0]==50)&&(RPN[k][1]==50); m++){ //Pels operadors
                if (strcmp(aux, operadors[m])==0){
                    RPN[k][0]=4;
                    RPN[k][1]=m;
                }
            }
            if ((RPN[k][0]==50)||(RPN[k][1]==50)){ //En cas de que cap s'hagi assignat donem error (seria suficient comprovar un però no perdem res comprovant els dos
                printf("\n(SINTAX ERROR) ERROR: Has introduit una expressió incorrecta o has demanat una funció no declarada a la calculadora.\n");
            }
         }

    else{
        printf("\n(SINTAX ERROR) ERROR: Afegeix una expressió RPN correcta per la qual es pugui per un càlcul.\n");
        exit(-1);
    }
}


/// FUNCIÓ QUE AVALUA CONSTANTS       ///
void avaluaconstant (int x)
{
    switch(x)
                {
                    case 0:
                        //Empilem la constant 0->pi
                        empilar(pi);
                    break;

                    case 1:
                        //Empilem la constant 1->e
                        empilar(e);

                    break;

                    case 2:
                        //Empilem la constant 2->Na
                        empilar(Na);

                    break;

                    case 3:
                        //Empilem la constant 3->c
                        empilar(c);
                    break;

                    case 4:
                        //Empilem la constant 4->phi
                        empilar(phi);
                    break;

                    case 5:
                        //Empilem la constant 5+0->-pi
                        empilar(-pi);
                    break;

                    case 6:
                        //Empilem la constant 5+1->-e
                        empilar(-e);
                    break;

                    case 7:
                        //Empilem la constant 5+2->-Na
                        empilar(-Na);

                    break;

                    case 8:
                        //Empilem la constant 5+3->c
                        empilar(-c);
                    break;

                    case 9:
                        //Empilem la constant 5+4->phi
                        empilar(-phi);
                    break;

                    default:
                    {
                        printf("\n(SINTAX ERROR) ERROR : No has escollit cap constant d'aquesta calculadora.\n");
                        exit(-1);
                    }
                    }
                    return;
}

///                                   ///


///  FUNCIÓ QUE AVALUA EL VECTOR RPN   ///

void avaluaRPN (int j, double k )   // j= RPN[i][0], k=RPN[i][1]
{

    /// DECLAREM UN APUNTADOR A LES FUNCIONS ///

       //Declarem un apuntador a les funcions per posteriorment calcular i empilar els valors que necessitem.
  double (*funcio[25])(double);
  funcio[0]=sin;
  funcio[1]=cos;
  funcio[2]=tangent;
  funcio[3]=arcsin;
  funcio[4]=arccos;
  funcio[5]=atan;
  funcio[6]=sinh;
  funcio[7]=cosh;
  funcio[8]=tanh;
  funcio[9]=log_10;
  funcio[10]=lognep;
  funcio[11]=arrelqua;
  funcio[12]=fabs;
  funcio[13]=factorial;
  funcio[14]=determinant;
  funcio[15]=traza;
  funcio[16]=prodesc;
  funcio[17]=sumatori;
  funcio[18]=productori;
  funcio[19]=sumatori2;
  funcio[20]=productori2;
  funcio[21]=enter;
  funcio[22]=polinomi;
  funcio[23]=derivada;
  funcio[24]=integral;

  /// DECLAREM UN APUNTADOR A LES OPERACIONS///
  double (*operador[11])(double, double); //apuntador als operadors
  operador[0]= suma;
  operador[1]=resta;
  operador[2]=producte;
  operador[3]=quocient;
  operador[4]=exponencial;
  operador[5]=mesgran;
  operador[6]=mespetit;
  operador[7]=mcm;
  operador[8]=mcd;
  operador[9]=comb;


    int x=0; //Pel switch de les funcions i operadors, declarem una variable.

    double valor1, valor2; //És una variable que anirem utilitzan per guardar el resultat del valor desempilat per calcular les operacions.

    switch (j)
        {
            case 1:   ///És un nombre
                //Empilem el valor a la nostra pila.
                empilar(k);

            break;

            case 2:   ///És una constant
                //Empilem el valor de cada constant
                //Igual que abans, convertim el valor en un enter.
                x=k;
                /// evaluem quina constant s'ha entrat
                avaluaconstant (x);

            break;

            case 3:   ///És una funció
                x=k;   //Ens guardem la referència de la funció com a valor enter.

                //No em de comprovar si el valor anterior es numèric o no per poder fer la equació ja que per la construcció de la pila
                //Només ingressem valors del tipus "double" i en cas de que no hi hagi cap "double" la construcció de la funció "desempilar"
                //ens dona un avís.

                    valor1= desempilar();    //desempilem el valor numèric i el guardem per calcular el resultat de la funció.

                    double resultatFun= funcio[x](valor1);  //Calcular el resultat de la función per a aquest valor

                    empilar (resultatFun);   //empilem el resultat obtingut
            break;

            case 4:   ///És una operació
                x=k; //Convertim en un valor enter la referència a la operació que volem calcular.

                //Igual que en l'anterior cas, no em de comprovar si el valor anterior es numèric
                //ja que la construcció de la funció "desempilar" ens envia un avís si falta un valor.

                         valor1= desempilar();  //desempilem els dos valors anteriors (primer el -1 i després el -2 ja que només podem desempilar el valor superior i guardem el valor
                         valor2=desempilar();

                        double resultatOp= operador[x](valor2, valor1); //Calculem ara la operació

                        empilar(resultatOp);   //empilem el resultat obtingut
                break;

            default:
                {
                    printf("\nERROR: No has escollit cap opció d'aquesta calculadora.");
                    exit(-1);
                }

            }
}

///                                   ///




/// FUNCIONS DE LA PILA ///
/// EMPILAR ///

void empilar (double nombre){
//Afegim a la pila un valor de la entrada
//Reservem la memòria per l'element que afegim
struct pila*empilat=malloc(sizeof(struct pila)); //Afegim un camp (empilat) on guardarem aquest valor que entrem

empilat-> nombre = nombre; //Guardem la dada que volem entrar en aquest camp
empilat->seguent=superior; //La dada que es trobava al camp "superior" es a dir, en primera posició de la pila, la pasem a la següent
//alliberant aquesta primera posició
superior=empilat;   //Guardem en el camp "supeior" el valor introduit que estava en pila 2
//
return;
}
///      ///
/// DESEMPILAR ///
double desempilar(void){
    double x;
    if (superior != NULL){

        x= superior->nombre;
        //Per alliberar memòria més tard em de tenir la referència al que anem a eliminar
        struct pila*temporal= superior;  //Guardem en un camp anomenate temporal de la pila el valor de la posició superior



        superior=superior->seguent;        //Asignem que el superior ara sigui el següent (ja que el que estava a dalt ara es troba en la posició temporal)

        free(temporal); //alliberem la memòria de la posició temporal ja que es de fet la informació que volem desempilar
        return x;        // Que ens retorni el valor que hi era. Això no és necessari per desempilar-la ja que en el moment en que em alliberat
        //la memòria ja està desempilat però si que es necessari per fer les operacions que duirem a continuació.
    }
    else{
        printf("\n¡¡ERROR!!: Estàs desempilant la pila buida, per fer aquesta operació has d'ingresar més valors numèrics\n");
        exit(-1);
    }

}
///          ///


///  SORTIDA ///
 void sortida (void){
 struct pila*temporal =superior;    //Asignem al camp temporal el valor que es troba en la posició superior

    printf("%lf\n", temporal->nombre); //Imprimim el nombre guardat en aquesta posició (el de la posició temporal).

    temporal=temporal->seguent;   //Pasem al seguent valor
    if (temporal!=NULL){
        printf("¡¡¡ATENCIÓ!!!: Encara et queden valors per desempilar, s'han fet les adients operacions pels últims valors empilats.\n");
    }
    return;
 }
///          ///



///          ///
/// FUNCIÓ PER NATEJAR EL STDIN ///
void clean_stdin (void)
{
    int c;
    do{
        c= fgetc(stdin);
    } while(c!='\n' && c!=EOF);
    return;
}
///                            ///
/// FUNCIÓ PER CRIDAS LES INSTRUCCIONS ///
void funcioinstruccions (void)
{
    printf("\n------------------------------------------(INSTRUCCIONS BÀSIQUES)------------------------------------------\n\n");
      printf("¡IMPORTANT!: Vigilla al afegir la expressió si ho fas a teclat o com la tinguis escrita al fitxer.\n");
      printf("Suposarem que la instrucció estarà ben escrita, en cas contrari donarà error.\n");
      printf("Les úniques consideracions es que estigui en Notació Polonesa Inversa (RPN) \ni que no hi hagi cap espai darrera de l'ultim terme.\n(Si no estàs segur de com utilitzar la notació, torna a compilar i mira el petit manual).\n");

      printf("------------------------------------------------CONSTANTS DISPONIBLES-------------------------------------------------\n\n");
      printf(" PI: pi \t Nombre d'Euler: e \t Numero d'Avogadro: Na \t Velocitat de la llum: c \t Secció Àuria: phi\n");
      printf("L'ús d'aquestes constants és anàleg a l'us d'un nombre real, per exemple puc posar: (e 2 +) per calcular la suma e+2.\n\n");
      printf("\n------------------------------------------FUNCIONS ALGEBRÀIQUES-------------------------------------------\n\n");
      printf("Introdueix els termes de la matriu, seguits de la dimensió (màxim 3). \nPer últim crida la funció amb el nom indicat a continuació:\n");
      printf("Càlcul de determinants: 'det' o càlcul de la traça: 'traza' \n");
      printf("Introdueix els termes de la matriu quadrada en ordre seguint les files.\n");
      printf("\nEXEMPLE: 1 2 3 4 2 det seria el determinant de la matriu de dimensió 2:  a11=1, a12=2, a21=3, a22=4.\n");
      printf("\nATENCIÓ: Per si no ha quedat clar, per calcular el determinant màxim matrius de grau 3 (en cas contrari, dona un avís).\n\n");
      printf("\nPer calcular el producte escalar: introdueix els coeficients dels dos vectors (de mateixa mida) seguit de la dimensió dels dos i la funció");
      printf("\nExemple: 1 2 3 1 2 3 3 prodesc calcula el producte escalar entre el vector (1, 2, 3) i (1, 2, 3)");
      printf("Per veure un exemple més complex, torna a compilar el progrma i llegeix el manual RPN\n\n");
      printf("\n--------------------------------------FUNCIONS TRIGONOMÈTRIQUES (i altres)------------------------------------\n\n");
      printf("sinus: sin\tcosinus: cos \t tangent: tan \t arc sinus: asin \t arc cosinus: acos \t arc tangent: atan\n");
      printf("sinus hiperbòlic: sinh\t cosinus hiperbòlic: cosh \t tangent hiperbòlica: tanh\t logaritme base 10: log10\n");
      printf("logaritme neperià: log \t arrel quadrada: sqrt \t valor absolut: fabs \t factorial: factorial\n");
      printf("També disposeu dues funcins sumatori i dues de productori. Per utilitzar aquestes, el que heu de fer es el següent:\n");
      printf("Introdueix n nombres que vols sumar o multiplicar seguits del nombre 'n' i l'expressió 'sum' o 'prod' respectivament.\n");
      printf("Per les altres, introdueix des de quin nombre vols sumar fins a quin (inici i final) i posteriorment l'interval \n d'augment");
      printf("o disminució i anàlogament amb el producte.\n");
      printf("És crida de la forma: '1 10 1 sum2' el qual et retorna 1+2+3...+10 (anàlogament amb el producte).\n");
      printf("\n-------------------------------------------------OPERADORS----------------------------------------------------\n\n");
      printf("\nDisposa de la suma : '+', resta: '-', producte: '*', quocient: '/' i exponencial: '^'\n ");
      printf("\nDisposa ademès del càlcul del mínim comú múltiple: 'mcm' i màxim comú divisor 'mcd' \ni del combinatori de dos nombres: 'comb'\n");
      printf("\nATENCIÓ!! Aquests dos operadors només funcionen amb nombres enters.\n\n");
      printf("\n-------------------------------------------------COMPARADORS----------------------------------------------------\n\n");
      printf("\n Disposa de 2 comparadors: més gran: '>' i més petit: '<'.\n Amb ells pot comparar operacions, retornarà 1 si es cert, 0 en cas contrari.");
      printf("\nATENCIÓ!! Podrà utilitzar el resultat d'aquest com un nombre per continuar operant\n però no és recomanable ja que pot portar confusió a l'usuari");

         printf("\n-------------------------------------------------AVALUACIÓ POLINOMIS----------------------------------------------------\n\n");
      printf("\n Avaluació de polinomis: Introdueix el coeficients dels polinomis, seguit del terme en el qual el vols avaluar i per últim el grau d'aquest.\n");
      printf("Ex: 1 2 3 2 2 polinomi: Avalua p(x)=1+2x+3x^2 en x=2.\n");
      printf("De manera anàloga amb les derivades i les integrals. COMPTE!! En les integrals has d'ingressar 2 valors (extrems de integració).\n");
      printf("Exemple: 1 2 3 2 4 2 integral --> Integral entre 2 i 4 de 1+2x+3x^2 \n");
      printf("----------------------------------------------------------------------------------------------------------------\n");

      return;
}
///                            ///
/// FUNCIO PER CRIDAR AL MANUAL       ///
void funciomanual (void)
{
        printf("\n------------------------------------------(MANUAL BÀSIC RPN)------------------------------------------\n\n");
        printf("La Notació Polonesa Inversa (RPN) és un mètode d'introducció de dades alternatiu a la notació algebràica usual (infix).\n");
        printf("No es gaire complexe d'entendre, segur que amb els següents exemples es suficient:\n");
        printf("Per fer la suma a+b=c; En RPN ho has d'expressar com 'a b +' i la calculadora et retorna 'c'.");
        printf("\nPer calcular una funció, com el seno, o arrel quadrada d'un terme, introdueix 'a sqrt' o 'b sin' \ni la calculadora et retorna el resultat adient.\n\n");
        printf("\nPer il·lustrar un exemple més complexe, introduint: \n 12 5 comb 5 factorial 3 sqrt 3 4 * 3 + 2 det\n");
        printf("\nEl que calcula és el determinant 2x2 que té per termes: a11= combinatori 12 sobre 5; a12= 5!; a21=sqrt(3), a22=(3*4)+3;");
        printf("\nÉs a dir, retornarà R= 11822.7455");
        return;
}

///                                   ///



