#include <iostream>
#include <cstdlib>

#include "MatrizLin.h"

using namespace std;

MatrizLin::MatrizLin(int mm, int nn)
{
    cout << "Criando um objeto MatrizLin" << endl;
    nl = mm;
    nc = nn;
    vet = new float[nl*nc];
}

MatrizLin::~MatrizLin()
{
    cout << "Destruindo um objeto MatrizLin" << endl;
    delete [] vet;
}

int MatrizLin::detInd(int i, int j)
{
    if(i >= 0 && i < nl && j >= 0 && j < nc)
        return nc*i + j;
    else
        return -1;
}

float MatrizLin::get(int i, int j)
{
    int k = detInd(i, j);
    if(k != -1)
        return vet[k];
    else
    {
        cout << "ERRO: Indice invalido!" << endl;
        exit(1);
    }
}

void MatrizLin::set(int i, int j, float val)
{
    int k = detInd(i, j);
    if(k != -1)
        vet[k] = val;
    else
        cout << "ERRO: Indice invalido!" << endl;
}

void MatrizLin::imprimir()
{
    for(int i = 0; i < nl; i++)
    {
        for(int j = 0; j < nc; j++)
        {
            cout << get(i, j) << ", ";
        }
        cout << endl;
    }
}

bool MatrizLin::verifica()
{
    cout << nl << " " << nc << endl;
    if(nl+1 == nc)
        return 1;
    else
        return 0;
}

void MatrizLin::maiorV()
{
    int maior = 0;

    for(int i = 0; i < nl; i++)
        for(int j = 0; j < nc; j++)
           if(maior < get(i,j))
            maior = get(i,j);
    cout << "maior valor e: " << maior << endl;
}

int MatrizLin::getNl()
{
    return nl;
}

int MatrizLin::getNc()
{
    return nl;
}

MatrizLin* MatrizLin::transposta()
{
    MatrizLin *matT = new MatrizLin(nc, nl);
    for(int i = 0; i < nl; i++)
        for(int j = 0; j< nc; j++)
        {
            float valor = get(i,j);
            matT->set(j,i, valor);
        }



    return matT;

}



