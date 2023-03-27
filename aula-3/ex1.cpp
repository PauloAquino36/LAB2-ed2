#include <iostream>

using namespace std;

int fatorial(int n)
{
    if(n > 1)
        return n * fatorial(n-1);
    else
        return n;
}


int main()
{
    int n = 0;
    cin >> n;
    int fat = fatorial(n);

    cout << "fatorial = " << fat << endl;
    return 0;
}
