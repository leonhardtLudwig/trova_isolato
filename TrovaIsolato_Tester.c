#include <stdio.h>
#include "Punto2D.h"
#include"Costanti.h"

int main(){

    int np;
    int indiceIsolato;
    Punto2D ap[MAX_NUMBER_OF_POINTS];
    
    printf("Inserire il numero di punti: ");
    getPointsNumber(&np);

    printf("Inserire le coordinate dei punti separandole da una virgola:\n");
    init_arraypoint(ap,np);

    printf("Insieme di punti inserito: \n");
    printpointset(ap,np);

    
    indiceIsolato = trovaIsolato(ap,np);
    printf("Il punto maggiormente isolato si trova all'indice %d, ", indiceIsolato);
    printPoint(&ap[indiceIsolato]);

    return 0;
}