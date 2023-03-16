#include <iostream>

using namespace std;

float pot(float x, float y)
{
    int r = x;
    
    for(int c = 1; c < y; c++)
    {
        r = r * x;
    }
    
    return r;
}

void somatorio(int n, float x)
{
    float r = 0;
    float conjunto[n];
    
    for(int c = 0; c < n; c++)
    {
        conjunto[c] = pot(x, c);
        cout << conjunto[c] << " ";
    }
    cout << endl;
    
    for(int c = 0; c < n; c++)
    {
        r += conjunto[c];
    }
    cout << "resultado: " << r << endl;
}

int main()
{
    int n = 0;
    cin >> n;
    
    float x = 0;
    cin >> x;

    somatorio(n, x);

    return 0;
}
    
