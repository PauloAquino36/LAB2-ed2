#include <iostream>

using namespace std;

float* calculaSoma(int n, float vetA[], float vetB[])
{
    float *result = new float [n];
    for(int i = 0; i<n; i++)
        result[i] = vetA[i] + vetB[i];
    return result;
}

int main()
{
    int n = 0;
    cin >> n;

    float *vetA = new float [n];
    float *vetB = new float [n];

    for(int i = 0; i < n; i++)
        cin >> vetA[i];
    for(int i = 0; i < n; i++)
        cin >> vetB[i];

    float *result = calculaSoma(n, vetA, vetB);

    for(int i = 0; i < n; i++)
        cout << "vetA[" << i << "] = " << vetA[i] << " + vetB[" << i << "] = " << vetB[i] << " = result[" << i << "] = " << result[i] << endl;

    delete [] result;
    delete [] vetA;
    delete [] vetB;

    return 0;
}
