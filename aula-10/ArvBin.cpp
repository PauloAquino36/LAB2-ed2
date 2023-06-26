#include <iostream>
#include <cstdlib>
#include <cstring>
#include <sstream>
#include "ArvBin.h"

using namespace std;

ArvBin::ArvBin()
{
    raiz = NULL;
}

int ArvBin::getRaiz()
{
    if (raiz != NULL)
        return raiz->getInfo();
    else
    {
        cout << "Árvore vazia!" << endl;
        exit(1);
    }
}

void ArvBin::cria(int x, ArvBin *sae, ArvBin *sad)
{
    NoArv *p = new NoArv();
    p->setInfo(x);
    p->setEsq(sae->raiz);
    p->setDir(sad->raiz);
    raiz = p;
}

void ArvBin::anulaRaiz()
{
    raiz = NULL;
}

void ArvBin::montaArvore()
{
    if(!vazia())
        cout << "Arvore jah montada. So eh possivel a insercao de nos." << endl;
    else
    {
        cout << "Montagem da arvore em pre-ordem:" << endl;
        raiz = auxMontaArvore();
    }
}

NoArv* ArvBin::auxMontaArvore()
{
    string linha;
    cout << "Valor: ";
    cin >> linha;
    if(linha != "NULL" && linha != "null")
    {
        istringstream ent(linha);
        int valor;
        ent >> valor;
        NoArv *p = new NoArv();
        p->setInfo(valor);
        cout << "Esquerda" << endl;
        p->setEsq(auxMontaArvore());
        cout << "Volta no noh " << p->getInfo() << endl;
        cout << "Direita" << endl;
        p->setDir(auxMontaArvore());
        cout << "Volta no noh " << p->getInfo() << endl;
        return p;
    }
    else
        return NULL;
}

void ArvBin::insere(int x)
{
    raiz = auxInsere(raiz, x);
}

NoArv* ArvBin::auxInsere(NoArv *p, int x)
{
    if(p == NULL)
    {
        p = new NoArv();
        p->setInfo(x);
        p->setEsq(NULL);
        p->setDir(NULL);
    }
    else
    {
        char direcao;
        cout << x << " a esquerda (e) ou direita (d) de " << p->getInfo() << ": ";
        cin >> direcao;
        if(direcao == 'e' || direcao == 'E')
            p->setEsq(auxInsere(p->getEsq(), x));
        else
            p->setDir(auxInsere(p->getDir(), x));
    }
    return p;
}

bool ArvBin::vazia()
{
    return (raiz == NULL);
}

bool ArvBin::busca(int x)
{
    return auxBusca(raiz, x);
}

bool ArvBin::auxBusca(NoArv *p, int x)
{
    if (p == NULL)
        return false;
    else if (p->getInfo() == x)
        return true;
    else if (auxBusca(p->getEsq(), x))
        return true;
    else
        return auxBusca(p->getDir(), x);
}

ArvBin::~ArvBin()
{
    raiz = libera(raiz);
}

NoArv* ArvBin::libera(NoArv *p)
{
    if (p != NULL)
    {
        p->setEsq(libera(p->getEsq()));
        p->setDir(libera(p->getDir()));
        delete p;
        p = NULL;
    }
    return NULL;
}

void ArvBin::preOrdem()
{
    cout << "Arvore Binaria em Pre-Ordem: ";
    auxPreOrdem(raiz);
}

void ArvBin::auxPreOrdem(NoArv *p)
{
    if (p != NULL)
    {
        cout << p->getInfo() << " ";
        auxPreOrdem(p->getEsq());
        auxPreOrdem(p->getDir());
    }
}

int ArvBin::contaNos()
{
    return auxContaNos(raiz);
}

int ArvBin::auxContaNos(NoArv *p)
{
    if(p==NULL)
    {
        return 0;
    }
    else
    {
        int contEsq = auxContaNos(p->getEsq());
        int contDir = auxContaNos(p->getDir());
        return contDir + contEsq + 1;
    }
}

int ArvBin::contaNosFolhas()
{
    return auxContaNosFolhas(raiz);
}

int ArvBin::auxContaNosFolhas(NoArv *p)
{
    if(p==NULL)
    {
        return 0;
    }
    else if(p->getEsq() == NULL && p->getDir() == NULL)
    {
        return 1;
    }
    else
    {
        int contFolhaEsq = auxContaNosFolhas(p->getEsq());
        int contFolhDir = auxContaNosFolhas(p->getDir());
        return contFolhaEsq + contFolhDir;
    }
}

int ArvBin::altura()
{
    return auxContaNosFolhas(raiz) - 1;
}

int ArvBin::auxAltura(NoArv * p)
{
    if(p==NULL)
    {
        return -1;
    }
    else
    {
        int contEsq = auxContaNos(p->getEsq());
        int contDir = auxContaNos(p->getDir());

        if(contDir > contEsq)
            return contDir+1;
        else
            return contEsq+1;
    }
}

int ArvBin::contaImpar()
{
    return auxContaImpar(raiz);
}

int ArvBin::auxContaImpar(NoArv * p)
{
    if(p==NULL)
    {
        return 0;
    }
    else
    {
        int contEsq = auxContaImpar(p->getEsq());
        int contDir = auxContaImpar(p->getDir());

        if(p->getInfo() % 2 == 0)
        {

            return contDir + contEsq + 0;
        }
        else
        {
            return contDir + contEsq + 1;
        }

    }
}

int ArvBin::contaFolhaImpar()
{
    return auxContaFolhaImpar(raiz);
}

int ArvBin::auxContaFolhaImpar(NoArv *p)
{
    if(p==NULL)
    {
        return 0;
    }
    else if(p->getEsq() == NULL && p->getDir() == NULL)
    {
        if(p->getInfo() % 2 == 0)
            return 0;
        else
            return 1;
    }
    else
    {
        int contFolhaEsq = auxContaFolhaImpar(p->getEsq());
        int contFolhDir = auxContaFolhaImpar(p->getDir());
        return contFolhaEsq + contFolhDir + 0;
    }
}

void ArvBin::imprimeNivel(int k)
{
    auxImprimeNivel(raiz, k, 0);
}

void ArvBin::auxImprimeNivel(NoArv * p, int k, int nivel)
{
    if(p != NULL)
    {
        if(k==nivel)
        {
            cout << p->getInfo() << " ";
        }
        else
        {
            auxImprimeNivel(p->getEsq(), k, nivel+1);
            auxImprimeNivel(p->getDir(), k, nivel+1);
        }
    }
}

float ArvBin::mediaNivel(int k)
{
    int cont = 0;
    int soma = auxMediaNivel(raiz, k, 0, &cont);
    if(cont == 0)
    {
        cout << "nao a nos neste nivel!" << endl;
        return 0;
    }
    else
    {
        return soma / (float)cont;
    }
}

int ArvBin::auxMediaNivel(NoArv * p, int k, int nivel, int *cont)
{
    if(p != NULL)
    {
        if(k==nivel)
        {
            *cont = *cont + 1;
            return p->getInfo();
        }
        else
        {
            return auxMediaNivel(p->getEsq(), k, nivel+1, cont) + auxMediaNivel(p->getDir(), k, nivel+1, cont);
        }
    }
    else
        return 0;
}
