#include <iostream>
#include "Grafo.h"
using namespace std;

int main() {
    Grafo g(5);

    g.inserirAresta(1,2);
    g.inserirAresta(2,3);
    g.inserirAresta(3,4);
    g.inserirAresta(4,5);
    g.inserirAresta(5,1);
    g.inserirAresta(5,2);
    g.inserirAresta(2,4);

    g.mostrar();

    return 0;
}