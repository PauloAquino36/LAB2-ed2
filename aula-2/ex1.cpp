#include <iostream>

using namespace std;

int main()
{
    int x = 0;
    cin >> x;

    int *pt = &x;

    cout << "valor de x     = " << x << endl;
    cout << "endereço de x  = " << &x << endl;

    cout << "conteudo de pt = " << pt << endl;
    cout << "oque pt aponta:  " << *pt << endl;

    *pt = (*pt) * 10;
    cout << "conteudo de pt multiplicado por 10 = " << *pt << endl;

    *pt = (*pt) + 10;
    cout << "conteudo de pt + 10 = " << *pt << endl;

    return 0;
}
