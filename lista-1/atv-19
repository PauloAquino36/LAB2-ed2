#include <iostream>

using namespace std;

float calculaMedia(int n, float *vet)
{
    float media = 0;
    for(int i = 0; i < n; i++)
        media += vet[i];
    media /= n;

    return media;
}

int main()
{
    int n = 0;
    cin >> n;

    float *vet = new float [n];

    for(int i = 0; i < n; i++)
        cin >> vet[i];


    cout << "media = " << calculaMedia(n, vet) << endl;

    delete [] vet;
    return 0;
}
