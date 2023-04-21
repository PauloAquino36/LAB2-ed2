#include <iostream>

using namespace std;

int soma(int n)
{
    if(n > 1)
    {
        int o = n + soma(n-1);
    }
    else
        return n;
}

int main()
{
   int x = 4;
   int r = soma(x);

   cout << "a soma de 1 a " << x << " = " << r << endl;
    return 0;
}
