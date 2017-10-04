#ifndef GRAFO_GRAFO_H
#define GRAFO_GRAFO_H

#include <iostream>
#include <vector>
using namespace std;

typedef int Vertex;

class Grafo {
private:
    vector<int> *adj;
    int n, m;
    void destroi();

public:
    Grafo(int n){
        inicializar(n);
    }

    void inicializar(int);
    void inserirAresta(Vertex, Vertex);
    void mostrar();
};


#endif //GRAFO_GRAFO_H
