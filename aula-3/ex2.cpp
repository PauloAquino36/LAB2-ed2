#include <iostream>

using namespace std;

void imprimeIntervalo(int a, int b, int inc)
{
    if(a < b)
    {
        cout << a << " ";
        imprimeIntervalo((a + inc), b, inc);
    }
    else if(a == b)
        cout << a;
}


int main()
{
    int a = 0;
    int b = 0;
    int inc = 0;

    cin >> a;
    cin >> b;
    cin >> inc;

    imprimeIntervalo(a, b, inc);

    return 0;
}
