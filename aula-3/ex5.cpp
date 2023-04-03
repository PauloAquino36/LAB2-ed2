#include <iostream>

using namespace std;

float menor(int n, float vet[])
{
    if(n == 1)
        return vet[0];
    else
    {
        float menorValor = menor(n-1, vet);

        if(vet[n-1] < menorValor)
            return vet[n-1];
        else
            return menorValor;

    }
}


int main()
{
    int n = 0;
    cin >> n;

    float *vet = new float [n];

    for(int i = 0; i < n; i++)
        cin >> vet[i];

    float x = menor(n, vet);
    cout << "a menor valor do vetor e = " << x << endl;

    delete [] vet;
    return 0;
}
