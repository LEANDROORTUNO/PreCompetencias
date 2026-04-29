#include<iostream>
#include<string>
using namespace std;
int main()
{
    // Lo que se usa: cadena de caracteres
    short n; cin >>n;
    string s;
    short x = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> s;

        if(s[1] == '+')
        {
            x++;
        }else
        {
            x--;
        }

    }
     cout << x << endl;

}
