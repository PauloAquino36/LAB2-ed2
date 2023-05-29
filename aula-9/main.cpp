#include <iostream>
#include "PilhaEncad.h"
#include "FilaEncad.h"

using namespace std;

int* inverte(int *vet, int n)
{
    int *vet2 = new int [10];

    PilhaEncad p;
    for(int i = 0; i < 10; i++)
        p.empilha(vet[i]);
    for(int i = 0; i < 10; i++)
        vet2[i] = p.desempilha();

    delete [] vet;
    return vet2;
}

void inverteFila(FilaEncad *f)
{
    PilhaEncad pAux;

    while(!f->vazia())
    {
        int val = f->desenfileira();
        pAux.empilha(val);
    }

    while(!pAux.vazia())
    {
        int val = pAux.desempilha();
        f->enfileira(val);
    }
}

FilaEncad* concatena(FilaEncad *f1, FilaEncad *f2)
{
    FilaEncad *f3 = new FilaEncad();
    int n = 0;
    int *vet;

    while(!f1->vazia())
    {
        int val = f1->desenfileira();
        f3->enfileira(val);
        n++;
    }

    vet = new int[n];
    for(int i = 0; i < n; i++)
    {
        vet[i] = f3->desenfileira();
        f3->enfileira(vet[i]);
    }
    while(!f2->vazia())
    {
        int val = f2->desenfileira();
        int i = 0;
        while(i<n && vet[i] != val)
            i++;
        if(i==n)
        {
            f3->enfileira(val);
        }
        f3->enfileira(val);
    }

    return f3;
}

int main()
{
    /// TESTE COM PILHA
    PilhaEncad p;

    for(int i = 0; i < 5; i++) p.empilha(i);
    cout << "Pilha apos inserir 5 valores" << endl;
    p.imprime();

    for(int i = 20; i < 25; i++) p.empilha(i);
    cout << "Pilha apos inserir mais 5 valores" << endl;
    p.imprime();

    /// TESTE COM FILA

    FilaEncad f;
    for(int i=0; i<5; i++) f.enfileira(i);
    cout << "Fila apos inserir 5 valores" << endl;
    f.imprime();

    for(int i = 20; i < 25; i++) f.enfileira(i);
    cout << "Fila apos inserir mais 5 valores" << endl;
    f.imprime();

    cout << "fila original:" << endl;
    f.imprime();
    cout << "fila alterada:" << endl;
    inverteFila(&f);
    f.imprime();

    cout << "vetor:" << endl;
    cout << "tamanho da pilha = " << p.tamanho() << endl;int *vet = new int [10];
    for(int i = 0; i < 10; i++)
    {
        vet[i] = i;
    }
    vet = inverte(vet, 10);
    for(int i = 0; i < 10; i++)
    {
        cout << vet[i] << " ";
    }
    cout << endl;
    return 0;
}
