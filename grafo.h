#ifndef GRAFO_H
#define GRAFO_H

typedef struct GrafoPonderado;

GrafoPonderado* alocarGrafo(GrafoPonderado *);
void desalocarGrafo(GrafoPonderado *);
GrafoPonderado* leGrafo(GrafoPonderado*);
void encontraCaminho(GrafoPonderado, int*, int*, float*, int);
void imprimeCaminho(int*, int numCidades);

// Funções auxiliares

float calcula_distancia(GrafoPonderado, int*);
int caminho_contem_cidade(int*, int, int);

#endif