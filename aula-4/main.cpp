#include <iostream>
#include "Aluno.h"
#include "Prova.h"

using namespace std;

int main()
{
    cout << "LABORATORIO DE PROGRAMACAO II - AULA 04\n" << endl;

    // ------------------------------------------------------------------------
    // EXERCICIO 1
    // ------------------------------------------------------------------------
    Aluno a("Carlos", "201566123AB");

    // leitura das notas do aluno
    a.leNotas();
    double m = a.calculaMedia();

    cout << "Media do aluno: " << m << endl;

    //ex2 teste
    a.setIdade(22);
    /*

    cout << "idade antiga: " << a.getIdade() << endl;
    int novaIdade = 0;
    cout << "digite a nova idade: " << endl;
    cin >> novaIdade;
    a.setIdade(novaIdade);
    cout << "nova idade: " << a.getIdade() << endl;

    cout << "Matricula antiga: " << a.getMatricula() << endl;
    string novaMatricula;
    cout << "digite a nova Matricula: " << endl;
    cin >> novaMatricula;
    a.setMatricula(novaMatricula);
    cout << "nova Matricula: " << a.getMatricula() << endl;
    */

    // ------------------------------------------------------------------------
    // EXERCICIO 3
    // ------------------------------------------------------------------------

    // Implemente aqui
    cout << endl << endl << "Dados do alunos" << endl;
    cout << "Aluno: " << a.getNome() << endl;
    cout << "Matricula: " << a.getMatricula() << endl;
    cout << "Idade: " << a.getIdade() << endl;
    cout << "Media: " << a.calculaMedia() << endl << endl << endl;

    //ex4
    a.leFrequencia();



    // ------------------------------------------------------------------------
    // EXERCICIO 5
    // ------------------------------------------------------------------------

    // Implemente aqui


    // ------------------------------------------------------------------------
    // EXERCICIO 6
    // ------------------------------------------------------------------------

    // Implemente aqui
    a.relatorio();

    // ------------------------------------------------------------------------
    // EXERCICIO 7
    // ------------------------------------------------------------------------

    Prova p(3);
    p.leNotas();
    p.calculaNotaFinal();
    cout << "Nota final: " << p.obtemNotaFinal() << endl << endl << endl;


    return 0;
}
