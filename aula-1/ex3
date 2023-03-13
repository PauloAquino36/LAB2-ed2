#include <iostream>

using namespace std;

float leVetorCalculaMedia(int n, float vet[])
{
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
    float vet[n];
    float media = leVetorCalculaMedia(n, vet);

    cout << "media = " << media << endl;

    return 0;
}
