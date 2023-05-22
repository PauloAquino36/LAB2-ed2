#include <iostream>
#include <cstdlib> ///rand()
#include <ctime>   ///time()
#include "ListaDupla.h"

using namespace std;

int numAleatorio(int a, int b)
{
    return a + rand()%(b - a + 1); /// retorna um numero inteiro aleat—rio entre a e b
}

int main()
{
    ListaDupla l; /// cria lista vazia
    int NumNos = 10;

    srand(time(NULL));

    /// ATENCAO: os valores inseridos na lista sao gerados
    /// aleatoriamente e mudam em cada execucao do programa!!!
    cout << "Inserindo valores: ";
    for(int i = 1; i <= NumNos; i++)
    {
        int val =  numAleatorio(0, 50); /// cria um valor aleat—rio entre 0 e 50
        cout << val << ", ";
        l.insereInicio(val);
    }
    cout << endl;
    cout << "l1: " << endl;
    l.imprime();
    //l.imprimeReverso();
    //l.insereFinal(36);
    //l.imprime();
    //l.removeFinal();
    //l.imprime();


    ListaDupla l2;
    srand(time(NULL));
    cout << "Inserindo valores: ";
    for(int i = 1; i <= NumNos; i++)
    {
        int val =  numAleatorio(100, 150); /// cria um valor aleat—rio entre 0 e 50
        cout << val << ", ";
        l2.insereInicio(val);
    }
    cout << endl;
    cout << "l2: " << endl;
    l2.imprime();

    ListaDupla *l3 = l.concatena(&l2);
    cout << "l3: " << endl;
    l3->imprime();
    cout << "l: " << endl;
    l.imprime();
    cout << "l2: " << endl;
    l2.imprime();



    bool existe = l.busca(20);
    cout << "O valor 20 esta na lista? ";
    if(existe)
        cout << "Sim" << endl;
    else
        cout << "Nao" << endl;
    //delete l3;
    return 0;
};

