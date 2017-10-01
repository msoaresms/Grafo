#include "Grafo.h"

void Grafo::inicializar(int n) {
    this->n = n;
    adj = new Lista<Vertex>[n+1];
}

void Grafo::inserirAresta(Vertex u, Vertex v) {
    adj[u].insere(v);
    adj[v].insere(u);
    m++;
}

void Grafo::mostrar() {
    for (int i = 1; i <= n; i++){
        cout << "v[" << i << "] = " << endl;
        //adj[i].print();
    }
}

void Grafo::destroi() {
    delete(adj);
    n = m = 0;
}