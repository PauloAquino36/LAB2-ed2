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

    for(int i = 0; i<m; i++)
    {
        for(int j = 0; j<n; j++)
            cout << mat[i][j] << " ";
       cout << endl;
    }
    return mat;
}

int main()
{
    int m = 0;
    cin >> m;

    int n = 0;
    cin >> n;

    float **mat = nullptr;
    mat = alocaMatrizF(m,n);

    return 0;
}
