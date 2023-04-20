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

int main()
{
    float *vetF = alocaVetorF(100);
    double *vetD = alocaVetorD(1000);

    delete [] vetF;
    delete [] vetD;
    return 0;
}
