#ifndef GRAFO_H
#define GRAFO_H

typedef struct GrafoPonderado;

GrafoPonderado* alocarGrafo(GrafoPonderado *);
void desalocarGrafo(GrafoPonderado *);
GrafoPonderado* leGrafo(GrafoPonderado*);
int encontraCaminho();
void imprimeCaminho();


#endif