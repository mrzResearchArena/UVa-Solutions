#include <bits/stdc++.h>
#define LL long long

using namespace std;

int main()
{
    LL n;
    while(cin >> n)
    {
        if (n < 0) break;
        LL piece = ( n*(n+1)/2 ) + 1;
        cout << piece << "\n";
    }
    return 0;
}