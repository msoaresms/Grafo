#ifndef GRAFO_GRAFO_H
#define GRAFO_GRAFO_H

#include <iostream>
#include "Lista.h"
#include "Item.h"
using namespace std;

typedef int Vertex;

class Grafo {
private:
    Lista<Item> *adj;
    int n, m;
    void destroi();

public:
    Grafo(int n){
        inicializar(n);
    }

    void inicializar(int);
    void inserirAresta(Vertex, Vertex);
    void mostrar();

    Lista<Item> *getAdj() const {
        return adj;
    }
    void setAdj(Lista<Item> *adj) {
        Grafo::adj = adj;
    }
    int getN() const {
        return n;
    }
    void setN(int n) {
        Grafo::n = n;
    }
    int getM() const {
        return m;
    }
    void setM(int m) {
        Grafo::m = m;
    }
};


#endif //GRAFO_GRAFO_H
