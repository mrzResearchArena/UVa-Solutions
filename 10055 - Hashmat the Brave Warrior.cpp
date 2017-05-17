#include <bits/stdc++.h>
#define LL long long int

using namespace std;

int main()
{
    LL a;
    LL b;
    while(cin >> a >> b)
    {
        if (a>b)
        {
            cout << a-b << endl;
        }
        else
        {
            cout << b-a << endl;
        }
    }
    return 0;
}
