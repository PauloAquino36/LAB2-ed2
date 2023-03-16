#include <iostream>

using namespace std;

int main()
{
    cout << "Digite um numero:" << endl;

    int n = 0;
    cin >> n;
    int vet[n];

    for(int c = 0; c < n; c++)
        cin >> vet[c];

    float media;

    for(int c = 0; c < n; c++)
        media += vet[c];

    media = media / n;

    cout << "media = " << media << endl;;

    return 0;
}
