#include "Aluno.h"

Aluno::Aluno(string n, string m)
{
    cout << "Criando aluno" << endl;
    nome = n;
    matricula = m;
}

Aluno::~Aluno()
{
    cout << "Destruindo objeto aluno" << endl;
}

// ----------------------------------------------------------------------------
// Exercicio 1
// ----------------------------------------------------------------------------

void Aluno::leNotas()
{
    // Implemente sua solucao aqui
    for(int c = 0; c < 7; c++)
       {
           cout << "digite a nota da " << c+1 << " materia" << endl;
           cin >> notas[c];
       }
}

double Aluno::calculaMedia()
{
    // Implemente sua solucao aqui
    double media = 0;

    for(int c = 0; c < 7; c++)
    {
        media += notas[c];
    }

    media = media / 7;

    return media;
}

// ----------------------------------------------------------------------------

void Aluno::setNome(string novo)
{
    nome = novo;
}

string Aluno::getNome()
{
    return nome;
}

// ----------------------------------------------------------------------------
// Exercicio 2
// ----------------------------------------------------------------------------

// Implemente aqui a sua solucao
void Aluno::setIdade(int novo)
{
    idade = novo;
}

int Aluno::getIdade()
{
    return idade;
}
void Aluno::setMatricula(string novo)
{
    matricula = novo;
}

string Aluno::getMatricula()
{
    return matricula;
}




// ----------------------------------------------------------------------------
// Exercicio 4
// ----------------------------------------------------------------------------

// Implemente aqui sua solucao
void Aluno::leFrequencia()
{
    // Implemente sua solucao aqui
    cout << "digite 1 um para presença ou 0 para ausencia" << endl;
    for(int c = 0; c < 7; c++)
       {
           cout << "dia  " << c+1 << endl;
           cin >> frequencia[c];
       }
}

void Aluno::relatorio()
{
    cout << endl << endl << "Dados do alunos" << endl;
    cout << "Aluno: " << getNome() << endl;
    cout << "Matricula: " << getMatricula() << endl;
    cout << "Idade: " << getIdade() << endl;
    cout << "Media: " << calculaMedia() << endl;

    for(int c = 0; c < 7; c++)
    {
        cout << "materia " << c+1 <<  ", nota = " << notas[c] << ", frequencia = " << frequencia[c] << endl;
        if(notas[c] > 60)
            cout << "Status Aprovado" << endl;
        else
            cout << "Status Reprovado" << endl;
    }
    cout << endl << endl << endl;
}


