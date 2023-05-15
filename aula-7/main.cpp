#include <iostream>
#include <cstdlib> ///rand()
#include <ctime>   ///time()
#include "ListaEncad.h"

using namespace std;

int numAleatorio(int a, int b)
{
    return a + rand()%(b - a + 1) ; /// retorna um numero inteiro aleatório entre a e b
}

int main()
{
    ListaEncad l; /// cria lista vazia
    int NumNos = 4;

    srand(time(NULL));
    /// ATENCAO: os valores inseridos na lista sao gerados
    /// aleatoriamente e mudam em cada execucao do programa!!!
    cout << "Inserindo valores: ";
    for(int i = 1; i <= NumNos; i++)
    {
        int val =  numAleatorio(0, 50); /// cria um valor aleatório entre 0 e 50
        cout << val << ", ";
        //l.insereInicio(val);
        l.insereFinal(val);
    }
    cout << endl;

    l.imprime();

    cout << "numero de nos: " << l.numNos() << endl;

    cout << "O valor maior que 20 esta na posicao: " << l.buscaMaior(20) << endl;
    cout << "media: " << l.calculaMedia() << endl;



    bool existe = l.busca(20);
    cout << "O valor 20 esta na lista? ";
    if(existe)
        cout << "Sim" << endl;
    else
        cout << "Nao" << endl;


    //questao de coocatenar
    /*
    ListaEncad l2; /// cria lista vazia

    srand(time(NULL));
    /// ATENCAO: os valores inseridos na lista sao gerados
    /// aleatoriamente e mudam em cada execucao do programa!!!
    cout << "Inserindo valores: ";
    for(int i = 1; i <= NumNos; i++)
    {
        int val =  numAleatorio(0, 50); /// cria um valor aleatório entre 0 e 50
        cout << val << ", ";
        l2.insereInicio(val);
        //l2.insereFinal(val);
    }
    cout << endl;

    l2.imprime();
    l.concatena(&l2);
    cout << "lista coocatenadas: ";
    l.imprime();
    */

    cout << "limpar lista" << endl;
    l.limpar();
    l.imprime();
    l.calculaMedia();

    return 0;
};

