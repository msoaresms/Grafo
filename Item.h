#ifndef GRAFO_ITEM_H
#define GRAFO_ITEM_H

#include <iostream>
using namespace std;

class Item {
private:
    int chave;
    //string descricao;
public:
    Item(){}
    Item(int pChave){
        this->chave = pChave;
        //this->descricao = pDescricao;
    }
    int getChave() const {
        return chave;
    }
    void setChave(int chave) {
        Item::chave = chave;
    }
//    string getDescricao() const {
//        return descricao;
//    }
//    void setDescricao(string descricao) {
//        Item::descricao = descricao;
//    }
    void mostrar();
};

#endif //GRAFO_ITEM_H
