#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;

    float *vet = new float [n];

    for(int i = 0; i < n; i++)
        cin >> vet[i];

    int media = 0;

    for(int i = 0; i < n; i++)
        media += vet[i];

    media /= n;

    cout << "media = " << media << endl;

    return 0;
}
