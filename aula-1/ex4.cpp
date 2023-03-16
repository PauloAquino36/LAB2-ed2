#include <iostream>

using namespace std;

int procuraCharNaString(string str, char ch)
{
    int t = str.size();

    for(int c = 0; c < t; c++)
        if(str[c] == ch)
        {
            cout << "esta string possui este carracter na posiçao " << c + 1 << endl;
            return 0;
        }
    return -1;
}

int main()
{
    string str = "";
    char ch;

    cin >> str;
    cin >> ch;

    int r = procuraCharNaString(str, ch);

    if(r == -1)
        cout << "esta string nao possui este carracter" << endl;
    else

    return 0;
}
