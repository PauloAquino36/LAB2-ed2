#include <iostream>
#include <cstdlib>
#include "ListaEncad.h"

using namespace std;

ListaEncad::ListaEncad()
{
    cout << "Criando objeto ListaEncad" << endl;
    primeiro = NULL;
    ultimo = NULL;
    n = 0;
}

ListaEncad::~ListaEncad()
{
    cout << "Destruindo objeto ListaEncad" << endl;
    No *p = primeiro;
    while(p != NULL)
    {
        No *t = p->getProx();
        delete p;
        p = t;
    }
}

bool ListaEncad::busca(int val)
{
    No *p;
    for(p = primeiro; p != NULL; p = p->getProx())
        if(p->getInfo() == val)
            return true;
    return false;
}

int ListaEncad::get(int k)
{
    No *p = primeiro;
    int i = 0;
    while(i < k && p != NULL)
    {
        i++;
        p = p->getProx();
    }
    if(p == NULL)
    {
        cout << "ERRO: Indice invalido!" << endl;
        exit(1);
    }
    else
        return p->getInfo();
}

void ListaEncad::set(int k, int val)
{
    No *p = primeiro;
    int i = 0;
    while(i < k && p != NULL)
    {
        i++;
        p = p->getProx();
    }
    if(p == NULL)
        cout << "ERRO: Indice invalido!" << endl;
    else
        p->setInfo(val);
}


void ListaEncad::insereInicio(int val)
{
    No* p = new No();
    p->setInfo(val);
    p->setProx(primeiro);

    primeiro = p;

    n++;
    if(n == 1) ultimo = p;
}

void ListaEncad::insereFinal(int val)
{
    No* p = new No();
    p->setInfo(val);
    p->setProx(NULL);

    if(ultimo != NULL) ultimo->setProx(p);
    ultimo = p;

    n++;
    if(n == 1) primeiro = p;
}

void ListaEncad::removeInicio()
{
    No* p;
    if(primeiro != NULL)
    {
        p = primeiro;
        primeiro = p->getProx();
        delete p;

        n--;
        if(n == 0) ultimo = NULL;
    }
    else
        cout << "ERRO: lista vazia!" << endl;
}

void ListaEncad::removeFinal()
{
    No* p;
    if(ultimo != NULL)
    {
        if(primeiro == ultimo)
        {
            primeiro = NULL;
            p = NULL;
        }
        else
        {
            p = primeiro;
            while(p->getProx() != ultimo)
                p = p->getProx();
            p->setProx(NULL);
        }
        delete ultimo;
        ultimo = p;
        n--;
    }
    else
        cout << "ERRO: lista vazia!" << endl;
}

void ListaEncad::imprime()
{
    No *p = primeiro;

    cout << "lista: ";
    while(p != NULL)
    {
            cout << p->getInfo() << " ";
            p = p->getProx();
    }

    //cout << "lista: ";
    //for(No *i = primeiro; i != NULL; i->getProx())
    //    cout << i->getInfo() << " ";
    //cout << endl;

    cout << endl;
}

int ListaEncad::numNos()
{
    return n;
}

int ListaEncad::buscaMaior(int val)
{
    int c = 0;
    for(No *i = primeiro; i != NULL; i = i->getProx())
    {
        if(i->getInfo() > val)
            return c;
        else
            c++;
    }
    return -1;
}

void ListaEncad::limpar()
{
    No *i = primeiro;

    while(i != NULL)
    {
        No *c = i;
        i = i->getProx();
        delete c;
    }
    primeiro = NULL;
    ultimo = NULL;
    n = 0;
}

float ListaEncad::calculaMedia()
{
    if(n==0)
    {
        cout << "error, lista vazia!" << endl;
        return 0;
    }
    else
    {
       float media = 0;
        for(No *i = primeiro; i != NULL; i = i->getProx())
        {
            media += i->getInfo();
        }
        return media/n;
    }

}

void ListaEncad::concatena(ListaEncad *l2)
{
    for(No *i = l2->primeiro; i != NULL; i = i->getProx())
    {
      insereFinal(i->getInfo());
    }
}

ListaEncad* ListaEncad::partir(int x)
{
    int c = 0;
    ListaEncad *l3;

    for(No *i = primeiro; i != NULL; i = i->getProx())
    {
        c++;
        if(c >= x)
        {
            l3->insereFinal(i->getInfo());
        }
    }
    return l3;
}
