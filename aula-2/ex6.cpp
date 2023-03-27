#include <iostream>

using namespace std;

float prodEscalar(int n, float x[], float y[])
{
    float r = 0;

    for(int i = 0; i < n; i++)
    {
        r += (x[i]) * (y[i]);
    }

    cout << "soma = " << r;

    return r;
}


int main()
{
    int n = 0;
    cout << "digite tamanho dos vetores" << endl;
    cin >> n;

    float *vet1 = new float [n];
    float *vet2 = new float [n];

    cout << "digite numeros do primeiro vetor" << endl;
    for(int i = 0; i < n; i++)
        cin >> vet1[i];
    cout << "digite numeros do segundo vetor" << endl;
    for(int i = 0; i < n; i++)
        cin >> vet2[i];

    float pe = prodEscalar(n, vet1, vet2);

    delete [] vet1;
    delete [] vet2;
    return 0;
}
