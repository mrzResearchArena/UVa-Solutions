// Style : 1

#include <iostream>
#include <algorithm>

#define ll long long

using namespace std;

ll Count(ll n)
{
    ll C = 0;

    while(n!=1)
    {
        if(n%2 == 0)
        {
            n = n/2;
            C ++;
        }
        else
        {
            n = 3*n+1;
            C ++;
        }
    }
    return C;
}

int main()
{
    ll a;
    ll b;
    ll maxi = 0;
    while(cin >> a >> b)
    {
        int begining = a;
        int ending = b;

        if (a > b) swap(a, b);

        for(int i=a; i<=b; i++)
        {
            ll reserved = Count(i);
            if (reserved > maxi)
            {
                maxi = reserved;
            }
        }
        cout << begining << " " << ending << " " << maxi+1 << "\n";
        maxi = 0;
    }

    return 0;
}



// Style 2 :

#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll n;
    ll begin;
    ll end;
    ll maxi = 0;
    ll C = 0;
    while(cin >> begin >> end)
    {
        ll b = begin;
        ll e = end;

        if (begin > end) swap(begin, end);

        for (int i=begin; i<=end; i++)
        {
            n = i;
            while(n != 1)
            {
                if (n % 2 == 1)
                {
                    n = 3*n+1;
                    ++ C;
                }
                else
                {
                    n = n/2;
                    ++ C;
                }
            }
            C = C+1;
            if (maxi < C) maxi = C;
            C = 0;
        }
        cout << b << " " << e << " " << maxi << endl;
        maxi = 0;
    }
    return 0;
}
