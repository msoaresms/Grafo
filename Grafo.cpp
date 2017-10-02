#include "Grafo.h"

void Grafo::inicializar(int n) {
    this->n = n;
    adj = new Lista<Item>[n+1];
}

void Grafo::inserirAresta(Vertex u, Vertex v) {
    Item x1(u);
    adj[u].insere(x1);
    Item x2(v);
    adj[v].insere(x2);
    m++;
}

void Grafo::mostrar() {
    for (int i = 1; i <= n; i++){
        cout << "v[" << i << "] = ";
        adj[i].mostrar();
    }
}

void Grafo::destroi() {
    delete(adj);
    n = m = 0;
}