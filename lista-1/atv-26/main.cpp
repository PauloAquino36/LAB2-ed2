#include <iostream>

using namespace std;

int soma(int a, int b)
{
    int c = a;

    if(a < b)
        c = a + soma(a+1, b);
    else
        return c;
}

int main()
{
   int x = 0;
   cin >> x;
   int y = 0;
   cin >> y;

   int r = soma(x, y);

   cout << "a soma de " << x << " ate " << y <<  " = " << r << endl;
    return 0;
}
