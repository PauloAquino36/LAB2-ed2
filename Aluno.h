#ifndef ALUNO_H
#define ALUNO_H

#include <iostream>
#include <string>

using namespace std;

class Aluno
{
    public:
        Aluno(string n, string m);
        ~Aluno();

        // operacoes
        void setNome(string n);
        string getNome();

        // exercicio 1
        void leNotas();
        double calculaMedia();

        void leFrequencia();

        // exercicio 2
        // implemente aqui
        void setIdade(int n);
        int getIdade();
        void setMatricula(string n);
        string getMatricula();
        // exercicio 5
        // implemente aqui

        //ex6
        void relatorio();

    private:
        int idade;
        string nome, matricula;
        double notas[7];
        // exercicio 3
        // implemente aqui

        // exercicio 4
        // implemente aqui
        bool frequencia[7];

};

#endif // ALUNO_H
