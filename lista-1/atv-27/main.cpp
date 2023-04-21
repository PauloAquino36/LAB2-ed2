#include <iostream>

using namespace std;

int numDigitos(int n)
{
    if(n > 10)
        return 1 + numDigitos(n/10);
    else
        return 1;
}

int main()
{
    int x = 20;
    //cin >> x;
    int r = numDigitos(x);

    cout << "numero de digitos = " << r << endl;
    return 0;
}
