#include <iostream>

using namespace std;

float** alocaMatrizF(int m, int n)
{
    float **mat = new float *[m];

    for(int i = 0; i<m; i++)
        mat[i] = new float [n];

    for(int i = 0; i<m; i++)
        for(int j = 0; j<n; j++)
            mat[i][j] = 0;

    cout << "Matriz normal" << endl;
    for(int i = 0; i<m; i++)
    {
        for(int j = 0; j<n; j++)
            cout << mat[i][j] << " ";
       cout << endl;
    }
    return mat;
}


float** transposta(int m, int n, float **mat)
{
    float **matT = new float *[m];

    for(int i = 0; i<m; i++)
        matT[i] = new float [n];

    for(int i = 0; i<m; i++)
        for(int j = 0; j<n; j++)
            matT[i][j] = 0;

    cout << "Matriz transposta" << endl;
    for(int i = 0; i<m; i++)
    {
        for(int j = 0; j<n; j++)
            cout << matT[i][j] << " ";
       cout << endl;
    }
    return matT;
}

int main()
{
    int m = 0;
    cin >> m;

    int n = 0;
    cin >> n;

    float **mat = nullptr;
    mat = alocaMatrizF(m,n);

    float **matTrans = transposta(n,m, mat);

        // Liberando a memória alocada para as linhas
    for(int i = 0; i < m; i++)
        delete[] mat[i];

    // Liberando a memória alocada para o vetor de ponteiros
    delete[] mat;

            // Liberando a memória alocada para as linhas
    for(int i = 0; i < n; i++)
        delete[] matTrans[i];

    // Liberando a memória alocada para o vetor de ponteiros
    delete[] matTrans;

    return 0;
}
