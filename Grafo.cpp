#include "Grafo.h"

void Grafo::inicializar(int n) {
    this->n = n;
    this->m = 0;
    adj = new vector<int>[n+1];
}

void Grafo::inserirAresta(Vertex u, Vertex v) {
    adj[u].push_back(u);
    adj[v].push_back(v);
    m++;
}

void Grafo::mostrar() {
    for (int i = 1; i <= n; i++){
        cout << "v[" << i << "] = ";
        vector<int> aux = adj[i];
        for (int i = 1; i < aux.size() - 1; i++) {
            cout << aux[i] << ", ";
        }
        cout << endl;
        //adj[i].mostrar();
    }
}

void Grafo::destroi() {
    delete(adj);
    n = m = 0;
}