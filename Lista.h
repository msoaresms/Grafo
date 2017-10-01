#ifndef GRAFO_LISTA_H
#define GRAFO_LISTA_H

#include <iostream>
#include "No.h"
using namespace std;

template <class T>
class Lista {
private:
    No<T> *prim, *ult;
    bool vazia(){
        return (this->prim == this->ult);
    }
    No<T> *predecessor(No<T> *no){
        No<T> *aux = this->prim;
        while (aux->getProx() != no){
            aux = aux->getProx();
        }
        return aux;
    }
public:
    Lista(){
        this->prim = new No<T>();
        this->prim->setProx(NULL);
        this->ult = this->prim;
    }

    No<T> *getFrente() const {
        return prim;
    }
    void setFrente(No<T> *frente) {
        Lista::prim = frente;
    }
    No<T> *getTras() const {
        return ult;
    }
    void setTras(No<T> *tras) {
        Lista::ult = tras;
    }

    void insere(T);
    void remove(int, T *);
    No<T> *busca(int);
};

template <typename T>
void Lista<T>::insere(T pItem) {
    this->ult->setProx(new No<T>());
    this->ult = this->ult->getProx();
    this->ult->setItem(pItem);
    this->ult->setProx(NULL);
}

template <typename T>
void Lista<T>::remove(int pChave, T *x) {
    if (!this->vazia()) {
        No<T> *aux = this->busca(pChave);
        if (aux != NULL){
            *x = aux->getItem();
            No<T> *p = this->predecessor(aux);
            p->setProx(aux->getProx());
            delete aux;
            if (p->getProx() == NULL){
                this->ult = p;
            }
        }
    }
}

template <typename T>
No<T> *Lista<T>::busca(int pChave) {
    No<T> *aux = this->prim->getProx();
    while (aux != NULL && aux->getItem().getChave() != pChave){
        aux = aux->getProx();
    }
    return aux;
}

#endif //GRAFO_LISTA_H
