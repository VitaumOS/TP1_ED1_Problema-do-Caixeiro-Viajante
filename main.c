#include <stdio.h>
#include <stdlib.h>
#include "grafo.h"


int main(){

    GrafoPonderado *gp;

    gp=alocarGrafo();
    gp=leGrafo(&gp);

    return 0;
}