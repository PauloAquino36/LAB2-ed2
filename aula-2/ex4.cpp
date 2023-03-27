#include <iostream>

using namespace std;

bool func(int tam, int vet[], int *par, int *impar, int *negativos)
{
    *par = 0;
    *impar = 0;
    *negativos = 0;

    for(int contaPares = 0; contaPares < tam; contaPares++)
        {
            if(vet[contaPares] % 2 == 0)
                (*par)++;
            else
                (*impar)++;
        }

    for(int contaNegativos = 0; contaNegativos < tam; contaNegativos++)
        if(vet[contaNegativos] < 0)
            (*negativos)++;

    if(*negativos > 0)
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

    bool r = func(tam, vet, &par, &impar, &negativos);

    cout << "numero de pares: " << par << endl;
    cout << "numero de impares: " << impar << endl;
    cout << "numero de negativos: " << negativos << endl;

    if(r == 1)
        cout << "o vetor tem elementos negativos" << endl;
    else
        cout << "o vetor nao tem elementos negativos" << endl;

    delete [] vet;

    return 0;
}
