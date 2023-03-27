#include <iostream>

using namespace std;

void imprimeDecrescente(int n)
{
    cout << n << " ";
    if(n > 0)
        imprimeDecrescente(n-1);
    else if(n < 0)
        imprimeDecrescente(n+1);
}


int main()
{
    int n = 0;
    cin >> n;

    imprimeDecrescente(n);

    return 0;
}
