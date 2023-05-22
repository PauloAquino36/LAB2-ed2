#include <iostream>
#include <cstdlib>
#include "ListaDupla.h"

using namespace std;

ListaDupla::ListaDupla()
{
    cout << "Criando uma ListaDupla" << endl;
    primeiro = NULL;
    ultimo = NULL;
    n = 0;
}

ListaDupla::~ListaDupla()
{
    cout << "Destruindo ListaDupla" << endl;
    NoDuplo *p = primeiro;
    while(p != NULL)
    {
        NoDuplo *t = p->getProx();
        delete p;
        p = t;
    }
}

bool ListaDupla::busca(int val)
{
    NoDuplo *p;
    for(p = primeiro; p != NULL; p = p->getProx())
        if(p->getInfo() == val)
            return true;
    return false;
}

int ListaDupla::get(int k)
{
    NoDuplo *p = primeiro;
    for(int i = 0; i < k; i++)
    {
        if(p == NULL)
            break;
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

void ListaDupla::set(int k, int val)
{
    NoDuplo *p = primeiro;
    for(int i = 0; i < k; i++)
    {
        if(p == NULL)
            break;
        p = p->getProx();
    }
    if(p == NULL)
        cout << "ERRO: Indice invalido!" << endl;
    else
        p->setInfo(val);
}

void ListaDupla::insereInicio(int val)
{
	NoDuplo *p = new NoDuplo();
	p->setInfo(val);
	p->setProx(primeiro);
	p->setAnt(NULL);

	if(n == 0) ultimo = p;
	else primeiro->setAnt(p);

	primeiro = p;
	n = n + 1;
}

void ListaDupla::removeInicio()
{
	NoDuplo *p;
	if(primeiro != NULL)
	{
		p = primeiro;
		primeiro = p->getProx();
		delete p;
		n = n - 1;

		if(n == 0) 	ultimo = NULL;
		else primeiro->setAnt(NULL);
	}
	else
        cout << "ERRO: lista vazia" << endl;
}

void ListaDupla::imprime()
{
    //cout << "lista:" << endl;
    for(NoDuplo *p=primeiro; p!=NULL; p=p->getProx())
    {
        cout << p->getInfo() << " ";
    }
    cout << endl;
}

void ListaDupla::imprimeReverso()
{
    cout << "lista Reversa:" << endl;
    for(NoDuplo *p=ultimo; p!=NULL; p=p->getAnt())
    {
        cout << p->getInfo() << " ";
    }
    cout << endl;
}

void ListaDupla::insereFinal(int val)
{
    NoDuplo *p = new NoDuplo();

    p->setInfo(val);
    p->setProx(NULL);
    p->setAnt(ultimo);


    if(n == 0)
        primeiro = p;
    else
        ultimo->setProx(p);

    ultimo = p;
    n = n + 1;

    //cout << "add no final o valor: " << val << endl;
}

void ListaDupla::removeFinal()
{
    NoDuplo *p;
    if(n==0)
    {
        cout << "Error: lista vazia" << endl;
        exit(1);
    }
    else
    {
        cout << "removendo valor: " << ultimo->getInfo() << endl;
        p = ultimo;
        //NoDuplo *d = ultimo;
        ultimo = p->getAnt();
        delete p;
        n--;
        if(n==0)
        {
            primeiro = NULL;
        }
        else
        {
            ultimo->setProx(NULL);
        }
    }

}

ListaDupla* ListaDupla::concatena(ListaDupla *l2)
{
    ListaDupla *l3 = new ListaDupla();
    /*for(NoDuplo *p=primeiro; p!=NULL; p=p->getProx())
    {
        l3->insereFinal(p->getInfo());
    }

    for(NoDuplo *p=l2->primeiro; p!=NULL; p=p->getProx())
    {
        l3->insereFinal(p->getInfo());
    }
    return l3;*/
    if(n == 0)
    {
        l3->primeiro = l2->primeiro;
    }
    else
    {
        l3->primeiro = primeiro;
        ultimo->setProx(l2->primeiro);
    }
    if(l2->n == 0)
    {
        l3->ultimo = ultimo;
    }
    else
    {
        l2->primeiro->setAnt(ultimo);
    }
    //l3->primeiro = primeiro;
    //ultimo->setProx(l2->primeiro);
    //l2->primeiro->setAnt(ultimo);
    //l3->ultimo = l2->ultimo;
    l3->n = n + l2->n;

    n = 0;
    primeiro = NULL;
    ultimo = NULL;

    l2->n = 0;
    l2->primeiro = NULL;
    l2->ultimo = NULL;

    return l3;
}
