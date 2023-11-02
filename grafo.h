#ifndef GRAFO_H
#define GRAFO_H

typedef struct GrafoPonderado;

GrafoPonderado* alocarGrafo();
void desalocarGrafo(GrafoPonderado *);
GrafoPonderado* leGrafo(int, GrafoPonderado*);
int encontraCaminho();
void imprimeCaminho();









#endif