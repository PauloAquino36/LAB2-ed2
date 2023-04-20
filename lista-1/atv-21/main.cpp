#include <iostream>

using namespace std;

float* alocaVetorF(int n)
{
    if(n >= 0)
        return new float [n];
    else
        cout << "Nao foi possivel alocar seu vetor float" << endl;
    return NULL;
}

double* alocaVetorD(int n)
{
    if(n >= 0)
        return new double [n];
    else
        cout << "Nao foi possivel alocar seu vetor double" << endl;
    return NULL;
}

void preencheVetorF(int n, float *vet)
{
    for(int i = 0; i < n; i++)
    {
       cout << "Vetor float, posiçao: " << i+1 << endl;
       cin >> vet[i];
    }
}

void preencheVetorD(int n, double *vet)
{
    for(int i = 0; i < n; i++)
    {
       cout << "Vetor double, posiçao: " << i+1 << endl;
       cin >> vet[i];
    }
}

int main()
{
    float *vetF = alocaVetorF(4);
    double *vetD = alocaVetorD(8);

    preencheVetorF(4, vetF);
    preencheVetorD(8, vetD);

    delete [] vetF;
    delete [] vetD;
    return 0;
}
