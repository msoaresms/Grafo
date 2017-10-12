#include "Grafo.h"

Grafo::Grafo(int n){
    inicializar(n);
}

void Grafo::inicializar(int n) {
    if (this->n != 0) destroi();
    this->n = n;
    this->m = 0;
    adj = new vector<int>[n+1];
}

void Grafo::inserirAresta(Vertex u, Vertex v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
    m++;
}

void Grafo::mostrar() {
    for (int i = 1; i <= n; i++){
        cout << "v[" << i << "] = ";
        vector<int> aux = adj[i];
        for (int j = 0; j < aux.size(); j++) {
            cout << aux[j] << ", ";
        }
        cout << endl;
    }
}

void Grafo::destroi() {
    delete(adj);
    n = m = 0;
}