#include <iostream>
#include "ArvBinBusca.h"

using namespace std;

ArvBinBusca::ArvBinBusca()
{
    raiz = NULL;
}

bool ArvBinBusca::vazia()
{
    return raiz == NULL;
}

void ArvBinBusca::insere(int val)
{
    raiz = auxInsere(raiz, val);
}

NoArv* ArvBinBusca::auxInsere(NoArv *p, int val)
{
    if(p == NULL)
    {
        p = new NoArv();
        p->setInfo(val);
        p->setEsq(NULL);
        p->setDir(NULL);
    }
    else if(val < p->getInfo())
        p->setEsq(auxInsere(p->getEsq(), val));
    else
        p->setDir(auxInsere(p->getDir(), val));
    return p;
}

bool ArvBinBusca::busca(int val)
{
    return auxBusca(raiz, val);
}

bool ArvBinBusca::auxBusca(NoArv *p, int val)
{
    if(p == NULL)
        return false;
    else if(p->getInfo() == val)
        return true;
    else if(val < p->getInfo())
        return auxBusca(p->getEsq(), val);
    else
        return auxBusca(p->getDir(), val);
}

void ArvBinBusca::remove(int val)
{
    raiz = auxRemove(raiz, val);
}

NoArv* ArvBinBusca::auxRemove(NoArv *p, int val)
{
    if(p == NULL)
        return NULL;
    else if(val < p->getInfo())
        p->setEsq(auxRemove(p->getEsq(), val));
    else if(val > p->getInfo())
        p->setDir(auxRemove(p->getDir(), val));
    else
    {
        if(p->getEsq() == NULL && p->getDir() == NULL)
            p = removeFolha(p);
        else if((p->getEsq() == NULL) || (p->getDir() == NULL))
            p = remove1Filho(p);
        else
        {
            NoArv *aux = menorSubArvDireita(p);
            int tmp = aux->getInfo();
            p->setInfo(tmp);
            aux->setInfo(val);
            p->setDir(auxRemove(p->getDir(), val));
        }
    }
    return p;
}

NoArv* ArvBinBusca::removeFolha(NoArv *p)
{
    delete p;
    return NULL;
}

NoArv* ArvBinBusca::remove1Filho(NoArv *p)
{
    NoArv *aux;
    if(p->getEsq() == NULL)
        aux = p->getDir();
    else
        aux = p->getEsq();
    delete p;
    return aux;
}

NoArv* ArvBinBusca::menorSubArvDireita(NoArv *p)
{
    NoArv *aux = p->getDir();
    while(aux->getEsq() != NULL)
        aux = aux->getEsq();
    return aux;
}

void ArvBinBusca::imprime()
{
    imprimePorNivel(raiz, 0);
}

void ArvBinBusca::imprimePorNivel(NoArv *p, int nivel)
{
    if(p != NULL)
    {
        cout << "(" << nivel << ")";
        for(int i = 1; i <= nivel; i++)
            cout << "--";
        cout << p->getInfo() << endl;
        imprimePorNivel(p->getEsq(), nivel+1);
        imprimePorNivel(p->getDir(), nivel+1);
    }
}

ArvBinBusca::~ArvBinBusca()
{
    raiz = libera(raiz);
}

NoArv* ArvBinBusca::libera(NoArv *p)
{
    if(p != NULL)
    {
        p->setEsq(libera(p->getEsq()));
        p->setDir(libera(p->getDir()));
        delete p;
        p = NULL;
    }
    return p;
}

float ArvBinBusca::mediaCaminho(int ch)
{
    int soma = 0, cont = 0;
    NoArv *p = raiz;
    while(p != NULL)
    {
        cont++;
        soma += p->getInfo();
        if(ch == p->getInfo())
            break;
        else if(ch > p->getInfo())
            p = p->getDir();
        else
            p = p->getEsq();
    }
    return (float)soma/cont;
}

int ArvBinBusca::maior()
{
    return AuxMaior(raiz);
}

int ArvBinBusca::AuxMaior(NoArv *p)
{
    if(p->getDir() == NULL)
        return p->getInfo();
    else
        return AuxMaior(p->getDir());
}

int ArvBinBusca::menor()
{
    return AuxMenor(raiz);
}

int ArvBinBusca::AuxMenor(NoArv *p)
{
    if(p->getEsq() == NULL)
        return p->getInfo();
    else
        return AuxMenor(p->getEsq());
}

void ArvBinBusca::removeMaior()
{
    AuxRemoveMaior(raiz);
}

void ArvBinBusca::AuxRemoveMaior(NoArv *p)
{
    if(p->getDir() == NULL)
    {
        int del = p->getInfo();
        remove(del);
    }
    else
        AuxRemoveMaior(p->getDir());
}

void ArvBinBusca::removeMenor()
{
    AuxRemoveMenor(raiz);
}

void ArvBinBusca::AuxRemoveMenor(NoArv *p)
{
    if(p->getEsq() == NULL)
    {
        int del = p->getInfo();
        remove(del);
    }
    else
        AuxRemoveMenor(p->getEsq());
}

int ArvBinBusca::contaParesCaminho(int x)
{
    int c = 0;
    AuxContaParesCaminho(x, raiz, &c);
    return c;
}

void ArvBinBusca::AuxContaParesCaminho(int x, NoArv *p, int *c)
{
    if(p == NULL)
    {
        cout << "Valor nao encontrado ou arvore vazia" << endl;
        exit (1);
    }

    if(p->getInfo() != x)
    {
        if(x < p->getInfo())
        {
            if(p->getInfo() % 2 == 0)
                *c = *c+1;
            AuxContaParesCaminho(x, p->getEsq(), c);
        }
        else
        {
            if(p->getInfo() % 2 == 0)
                *c = *c+1;
            AuxContaParesCaminho(x, p->getDir(), c);
        }
    }
    else
        if(p->getInfo() % 2 == 0)
                *c = *c+1;

}
