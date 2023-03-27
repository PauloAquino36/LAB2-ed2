#include <iostream>

using namespace std;

float soma(int n, float vet[])
{
    vet[0] += vet[n];
    return soma((n-1), vet);
}


int main()
{
    int n = 0;
    cin >> n;

    float *vet = new float [n];

    for(int i = 0; i < n; i++)
        cin >> vet[i];

    float x = soma(n, vet);

    delete [] vet;
    return 0;
}
