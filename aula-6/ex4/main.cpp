#include <iostream>
#include "Ponto.h"
#include "ListaCont.h"

using namespace std;

int main()
{
    Ponto a(4,0);

    Ponto b(2,0);

    cout << "distancia entre o ponto A e o ponto B: " << a.distancia(&b) << endl;

    return 0;
}
