#ifndef GRAFO_GRAFO_H
#define GRAFO_GRAFO_H

#include <iostream>
#include <vector>
using namespace std;

typedef int Vertex;

class Grafo {
private:
    vector<Vertex> *adj;
    int n, m;
    void destroi();

public:
    Grafo(int);

    void inicializar(int);
    void inserirAresta(Vertex, Vertex);
    void mostrar();

    vector<Vertex> *getAdj() const {
        return adj;
    }

    void setAdj(vector<Vertex> *adj) {
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
