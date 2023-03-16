#include <iostream>

using namespace std;

float leCalculaMedia(int n)
{
    int vet[n];
    for(int c = 0; c < n; c++)
        cin >> vet[c];

    float aux = 0;

    for(int c = 0; c < n; c++)
        aux += vet[c];

    aux = aux / n;

    return aux;
}

int main()
{
    cout << "Digite um numero:" << endl;

    int n = 0;
    cin >> n;
    float media = 0;

    media = leCalculaMedia(n);
    cout << "media = " << media << endl;

    return 0;
}
