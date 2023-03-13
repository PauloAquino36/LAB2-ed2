#include <iostream>

using namespace std;

bool ehPrimo(int n)
{
    int r = 0;

    for (int c = 2; c <= n / 2; c++)
    {
        if (n % c == 0)
        {
           return 0;
        }
    }
    return 1;
}

int main()
{
    int n = 0;
    cin >> n;

    bool r = ehPrimo(n);

    if(r == 0)
        cout << n << " nao e primo" << endl;
    else
        cout << n << " e primo" << endl;

    return 0;
}
