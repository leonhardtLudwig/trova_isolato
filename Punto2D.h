typedef struct{
    double x;
    double y;
} Punto2D;

double pitagora(Punto2D *p1, Punto2D *p2); /*calcola la distanza tra due punti nel piano*/

void setCoordinates( Punto2D *p, int a, int b); 

void printPoint(  Punto2D *p);

void readPoint( Punto2D *p);

void printpointset( Punto2D ap[], int np);

void getPointsNumber(int *p);

void init_arraypoint( Punto2D ap[], int np);

double distanzatotale( Punto2D ap[], int np, int index_point);

int trovaIsolato( Punto2D ap[], int np);