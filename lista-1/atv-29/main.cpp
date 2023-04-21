#include <iostream>
using namespace std;

bool buscaBinaria(int vet[], int n, int chave)
{
    if(n == 0)
        return false;

    if(chave == vet[n-1])
        return true;
    else
        return buscaBinaria(vet, n-1, chave);
}

int main() {
    int vet[10] = {1,2,3,4,5,6,7,8,9,10};
    int x = 0;
    cin >> x;
    if(buscaBinaria(vet,10,x) == false)
        cout << "o numero nao esta presente no vetor" << endl;
    else
        cout << "o numero esta presente no vetor" << endl;
    return 0;
}
