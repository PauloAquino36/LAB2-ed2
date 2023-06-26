#include <iostream>
#include "ArvBin.h"
using namespace std;

int main()
{
    ArvBin arv;
    /*
    arv.montaArvore();
    arv.insere(15);
    arv.insere(25);
    arv.insere(10);
    */

    ArvBin *nula = new ArvBin();
    ArvBin *arv1 = new ArvBin();
    ArvBin *arv2 = new ArvBin();
    ArvBin *arv3 = new ArvBin();
    ArvBin *arv4 = new ArvBin();
    ArvBin *arv5 = new ArvBin();
    ArvBin *arv6 = new ArvBin();

    arv1->cria(3, nula, nula);
    arv2->cria(7, nula, nula);
    arv3->cria(6, nula, nula);

    arv4->cria(10, arv1, nula);
    arv1->anulaRaiz();

    arv5->cria(8, arv2, arv3);
    arv3->anulaRaiz();
    arv2->anulaRaiz();

    arv6->cria(5, arv4, arv5);
    arv4->anulaRaiz();
    arv5->anulaRaiz();

    arv6->preOrdem();

    cout << endl << "numero de nos = " << arv6->contaNos() << endl;
    cout << "numero de nos folhas = " << arv6->contaNosFolhas() << endl;
    cout << "altura = " << arv6->altura() << endl;
    cout << "Nos impares = " << arv6->contaImpar() << endl;
    cout << "Nos folhas impares = " << arv6->contaFolhaImpar() << endl;

    cout << "Nos do nivel 1: ";
    arv6->imprimeNivel(2);
    cout << endl;

    cout << "media do nivel 1 = " << arv6->mediaNivel(2) << endl;

    return 0;
}
