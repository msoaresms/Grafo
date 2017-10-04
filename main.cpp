#include <iostream>
#include "Grafo.h"
using namespace std;


//#ifdef COMPILA
int main() {
    Grafo g(2);

    g.inserirAresta(1,2);
//    g.inserirAresta(2,3);
//    g.inserirAresta(3,4);
//    g.inserirAresta(4,5);
//    g.inserirAresta(5,1);
//    g.inserirAresta(5,2);
//    g.inserirAresta(2,4);

    g.mostrar();

    return 0;
}
//#endif

#ifdef COMPILA
int main(){
    Item a(1);
    Item b(2);
    Item c(3);

    Lista<Item> teste;

    teste.insere(a);
    teste.insere(b);
    teste.insere(c);

    teste.mostrar();

}   
#endif