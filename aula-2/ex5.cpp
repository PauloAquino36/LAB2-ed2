#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;

    int *vet = new int [n];

    for(int i = 0; i < n; i++)
        cin >> vet[i];

    float media = 0;

    for(int i = 0; i < n; i++)
        media += vet[i];

    media = media / n;
    cout << "media = " << media << endl;

    delete [] vet;
    return 0;
}
