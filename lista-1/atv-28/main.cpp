#include <iostream>

using namespace std;

bool ehPalindromo(char a[], int n)
{
    if(n<=1)
        return true;

    if(a[0] == a[n-1])
        return ehPalindromo(a+1, n-2);
    else
        return false;
}

int main()
{
    char teste[5];
    cin >> teste;

    if(ehPalindromo(teste, 5) >= 1)
        cout << "a palavra e palindromo" << endl;
    else
        cout << "a palavra nao e palindromo" << endl;
    return 0;
}
