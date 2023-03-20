#include <iostream>

using namespace std;

bool func(int tam, int vet[], int *par, int *impar, int *negativos)
{
    int qPares = 0;
    int qImpares = 0;
    int qNegativos = 0;

    for(int contaPares = 0; contaPares < tam; contaPares++)
        if(vet[contaPares] % 2 == 0)
            qPares++;

    for(int contaImpares = 0; contaImpares < tam; contaImpares++)
        if(vet[contaImpares] % 2 != 0)
            qImpares++;

    for(int contaNegativos = 0; contaNegativos < tam; contaNegativos++)
        if(vet[contaNegativos] < 0)
            qNegativos++;

    //cout << qPares << endl;
    //cout << qImpares << endl;
    //cout << qNegativos << endl;

    if(qNegativos > 0)
        return 1;
    else
        return 0;

}


int main()
{
    int tam = 0;
    cout << "digite o tamanho do vetor: " << endl;
    cin >> tam;

    int *vet = new int [tam];

    int par = 0;
    int impar = 0;
    int negativos = 0;

    int *ptPar = &par;
    int *ptImpar = &impar;
    int *ptNegativos = &negativos;

    for(int c = 0; c < tam; c++)
        cin >> vet[c];

    bool r = func(tam, vet, ptPar, ptImpar, ptNegativos);

    if(r == 1)
        cout << "o vetor tem elementos negativos" << endl;
    else
        cout << "o vetor nao tem elementos negativos" << endl;

    delete vet;

    return 0;
}
