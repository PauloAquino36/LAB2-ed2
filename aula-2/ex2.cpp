#include <iostream>

using namespace std;

void troca(int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}

int main()
{
    int x = 0;
    int y = 0;

    cin >> x;
    cin >> y;

    int *ptx = &x;
    int *pty = &y;

    cout << "valor de x = " << x << endl;
    cout << "valor de y = " << y << endl;

    troca(ptx, pty);

    cout << endl;
    cout << "apos a troca" << endl;
    cout << endl;

    cout << "valor de x = " << x << endl;
    cout << "valor de y = " << y << endl;

    return 0;
}
