#include<iostream>
using namespace std;
int main()
{
    //n = cantidad de problemas
    int n ; cin >> n;
    int p1,p2,p3, i, c;
    c = 0;
    for(i = 0; i < n; i++)
    {
        cin >> p1 >> p2 >> p3;

        if(p1 + p2 + p3 == 2 || p1 + p2 + p3 == 3)
        {
            c += 1;
        }
    }
    cout << c << endl;



    return 0;
}
