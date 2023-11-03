#include "grafo.h"


int main(){

    GrafoPonderado *gp;
    
    gp = alocarGrafo();
    gp = leGrafo(gp);

    int* caminho = malloc((gp->numCidades + 1) * sizeof(GrafoPonderado));
    int* melhor_caminho = malloc((gp->numCidades + 1) * sizeof(GrafoPonderado));

    float melhor_distancia = 0.0;

    caminho[0] = melhor_caminho[0] = 0;

    encontraCaminho(gp, caminho, melhor_caminho, &melhor_distancia, 1);

    imprimeCaminho(caminho, gp->numCidades);
    printf("\n%.0f\n", melhor_distancia);

    free(melhor_caminho);
    free(caminho);
    desalocarGrafo(gp);
    return 0;
}