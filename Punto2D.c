#include "Punto2D.h"
#include <math.h>
#include <stdio.h>

double pitagora( Punto2D *p1, Punto2D *p2){
    return sqrt(pow(p1->x- p2->x,2)+pow(p1->y -p2->y,2));
}

void setCoordinates( Punto2D *p, int a, int b){
    p->x = a;
    p->y = b;
}

void printPoint(Punto2D *p){
    printf("(%g, %g)", p->x, p->y);
}

void readPoint(Punto2D *p){
    scanf("%lf, %lf",&p->x,&p->y);
}

void printpointset(Punto2D ap[], int np){
    int i = 0;
    for(; i<np; i++){
        printPoint(&ap[i]);
        printf("i = %d \n",i);
    }
}

void init_arraypoint(Punto2D ap[], int np){
    int i = 0;
    for(; i<np; i++){
        readPoint(&ap[i]);
    }
}

void getPointsNumber(int *p){
    scanf("%d", p);
}

double distanzatotale(Punto2D ap[], int np, int index_point){
    double dist;
    int j = 2;
    dist = pitagora(&ap[index_point], &ap[(1+index_point)%np]);
    for(; j<np-1; j++){
        dist+=pitagora(&ap[index_point], &ap[(j+index_point)%np]);
    }
    return dist;
}

int trovaIsolato(Punto2D ap[], int np){

    int punto;
    int i;
    double distMagg;
    double temp;
    
    distMagg = distanzatotale(ap,np,0);
    punto = 0;
    i = 1;

    for(;i<np;i++){
        temp = distanzatotale(ap,np,i);
        if(temp>distMagg){
            distMagg = temp;
            punto = i;
        }
    }

    return punto;
}