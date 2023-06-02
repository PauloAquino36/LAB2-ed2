#include <iostream>
#include "Ponto.h"
#include "ListaCont.h"

using namespace std;

int main()
{
    ListaCont l(10);

    l.insereFinal(24);
    l.insereFinal(36);
    l.insereFinal(2);
    l.insereFinal(-1);
    l.insereFinal(99);
    l.imprime();

    cout << "Numero de nos: " << l.numNos() << endl;

    //int x = 0;
    //cout << "Digite um valor para procurar se tem valor maior:" << endl;
    //cin >> x;
    //cout << "Procurando valor maior que " << x << " na lista: " << l.buscaMaior(x) << endl;

    int vet[4] = {1,2,3,4};
    l.insereValores(4, vet);

    bool trocaBool = l.troca(1, 7);
    if(trocaBool == 1)
    {
        cout << "lista apos a troca: " << endl;
        l.imprime();
    }
    else
        cout << "nao foi possivel fazer a troca" << endl;

    bool novoMaxBool = l.aumentaCapacidade(15);
    if(novoMaxBool == 1)
        cout << "capacidade aumentada" << endl;

    l.limpar();
    return 0;
}
