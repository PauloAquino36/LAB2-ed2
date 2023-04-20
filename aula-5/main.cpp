#include <iostream>
#include "MatrizLin.h"

using namespace std;

float* prodMatVetor(MatrizLin *m, float *v)
{
    float *vet = new float[m->getNl()]
    for(int i = 0; i < m->getNl(); i++)
    {
        vet[i] = 0;
        for(int j = 0; j < m->getNc(); j++)
        {
            vet[i] += m->get(i,j) * j;
        }
    }
}

bool olha(MatrizLin &mat)
{
    for(int i = 0; i < mat.getNl(); i++)
        for(int j = i+1; j < mat.getNc(); j++){
             if(mat.get(i,j) != mat.get(j,i))
                return false;
        }

    return true;
}

int main()
{
    int m = 7, n = 8;
    MatrizLin mat(m, n);

    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
        {
            float val = j + n*i; /// sequencia numerica no intervalo 0..(m*n-1)
            mat.set(i, j, val);
        }

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            float val = mat.get(i, j);
            cout << val << "\t";
        }
        cout << endl;
    }

    cout << endl << endl;
    mat.imprimir();

    cout << endl << endl;
    int x = olha(mat);
    if(x == 1)
        cout << "E simetrica!" << endl;
    else
        cout << "Nao simetrica!" << endl;
    cout << endl << endl;

    //mat.set(5,5,90);
    mat.maiorV();

    MatrizLin *matTrans = mat.transposta();
    matTrans->imprimir();
    delete matTrans;

    return 0;
}
