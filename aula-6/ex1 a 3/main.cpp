#include <iostream>
#include "Ponto.h"
#include "ListaCont.h"

using namespace std;

int main()
{
    ListaCont l(10);

    l.insereFinal(24);
    l.insereFinal(3);
    l.insereFinal(2);
    l.insereFinal(-1);
    l.insereFinal(99);
    l.imprime();

    cout << "valor maior que o pedido: " << l.buscaMaior(20) << endl;

    l.limpar();
    l.imprime();

    int x[5] = {1,2,3,4,5};
    l.insereValores(11, x);
    l.imprime();

    ListaCont l1(50);

    for(int i = 0; i < 50; i++)
        l1.insereFinal(i+1);
    l1.imprime();

    ListaCont l2(25);
    for(int i = 0; i < 25; i++)
    {
        l2.insereFinal(l1.get(0));
        l1.removeInicio();
    }
    cout << "lista 1" << endl;
    l1.imprime();
    cout << "lista 2" << endl;
    l2.imprime();

    ListaCont l3(25);
    for(int i = 0; i < 25; i++)
    {
        l3.insereFinal(l1.get(0));
        l1.removeInicio();
    }
    cout << "lista 1" << endl;
    l1.imprime();
    cout << "lista 3" << endl;
    l3.imprime();

    return 0;
}
