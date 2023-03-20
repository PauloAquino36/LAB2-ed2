#include <iostream>

using namespace std;

void divisao(int num, int div, int *q, int *r)
{
    int resposta = 0;
    int resto = 0;

    resposta = num / div;
    resto = num % div;

    *q = resposta;
    *r = resto;

    //cout << "resposta: " << resposta << endl;
    //cout << "resto: " << resto << endl;
}

int main()
{
    int num = 0;
    int div = 0;

    cin >> num;
    cin >> div;

    int q0 = 0;
    int r0 = 0;

    int *q = &q0;
    int *r = &r0;

    divisao(num, div, q, r);

    cout << "resposta: " << *q << endl;
    cout << "resto: " << *r << endl;

    return 0;
}
