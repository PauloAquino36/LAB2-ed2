#include <iostream>

using namespace std;

float soma(int n, float vet[])
{
    if(n == 0)
        return 0;
    else
    return vet[n-1] + soma(n-1, vet);
}


int main()
{
    int n = 0;
    cin >> n;

    float *vet = new float [n];

    for(int i = 0; i < n; i++)
        cin >> vet[i];

    float x = soma(n, vet);
    cout << "a soma do vetor e = " << x << endl;

    delete [] vet;
    return 0;
}
