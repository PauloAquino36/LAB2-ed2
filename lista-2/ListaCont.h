#ifndef LISTACONT_H_INCLUDED
#define LISTACONT_H_INCLUDED
#include "Ponto.h"

class ListaCont
{
private:
    int max;
    int n;
    int *vet;

public:
    ListaCont(int tam);
    ~ListaCont();

    int get(int k);
    void set(int k, int val);
    void insereFinal(int val);
    void insereK(int k, int val);
    void insereInicio(int val);
    void removeFinal();
    void removeK(int k);
    void removeInicio();
    void imprime();
    void insereValores(int tam, int vet[]);

    int numNos();
    int buscaMaior(int val);
    void limpar();

    bool troca(int posicao1, int posicao2);
    bool aumentaCapacidade(int novoMax );
};

#endif // LISTACONT_H_INCLUDED
