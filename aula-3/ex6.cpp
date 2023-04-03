#include <iostream>

using namespace std;

int par(int n, int vet[])
{
    if(n == 0)
        return 0;

    int pares = par(n-1, vet);

    if (vet[n - 1] % 2 == 0)
      return pares + 1;
    else
      return pares;


}


int main()
{
    int n = 0;
    cin >> n;

    int vet[n];

    for(int i = 0; i < n; i++)
        cin >> vet[i];

    int x = par(n, vet);
    cout << "numero de pares = " << x << endl;

    return 0;
}
