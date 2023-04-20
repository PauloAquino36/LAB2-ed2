#include "Prova.h"

Prova::Prova(int nq)
{
    // implemente o construtor aqui
    cout << "Criando uma prova" << endl;
    n = nq;
    notasQuestoes = new double [nq];
}

Prova::~Prova()
{
    // implemente o destrutor aqui
    cout << "Destruindo objeto prova" << endl;
    delete [] notasQuestoes;
}

// exercicio 7
// implemente aqui
void Prova::leNotas()
{
    for(int c = 0; c < n; c++)
    {
        cout << "nota da " << c+1 << "º questao" << endl;
        cin >> notasQuestoes[c];
    }
}

void Prova::calculaNotaFinal()
{
    notaFinal = 0;
    for(int c = 0; c < n; c++)
    {
        notaFinal += notasQuestoes[c];
    }
}

double Prova::obtemNotaFinal()
{
    return notaFinal;
}
