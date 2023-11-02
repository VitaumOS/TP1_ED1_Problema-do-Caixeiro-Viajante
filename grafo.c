#include "grafo.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct{ //Criação da struct

    int numCidades;
    int **matrizG;
}GrafoPonderado;

GrafoPonderado * alocarGrafo(int n){ //Aloca dinamicamente a struct

    GrafoPonderado *gp=malloc(sizeof(GrafoPonderado));
    return gp;
}

void desalocarGrafo(GrafoPonderado *gp){ //Desaloca dinamicamente a struct

    for(int i=0; i<n*n; i++)
        free(gp->matrizG[i]);
    free(gp->matrizG);

    free(gp);
}

GrafoPonderado *leGrafo(int n, GrafoPonderado *gp){ //Baseado no valor n de cidade, cria-se uma matriz com a cidade de origem, destino e a distância entre elas
    gp->matrizG=malloc(n*n*sizeof(int*)); //Aloca a matriz de adjacências n² x 3
    for(int j=0; j<n*n; j++)
        gp->matrizG[j]=malloc(3*sizeof(int));

    for(int i=0; i<n*n; i++)
        scanf("%d %d %d", &gp->matrizG[i][0], &gp->matrizG[i][1], &gp->matrizG[i][2]);
    
    return gp;
}