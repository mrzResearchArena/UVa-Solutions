#include <bits/stdc++.h>
#define LL long long int

using namespace std;

int main()
{
    LL a;
    LL b;
    LL test;
    LL counter = 0;
    LL sum = 0;

    cin >> test;
    while(test--)
    {
        scanf("%lld\n%lld", &a, &b);
        for (int i=a; i<=b; i++)
        {
            if (i % 2 == 1)
            {
                sum = sum + i;
            }
        }
        printf("Case %lld: %lld\n", ++counter, sum);
        sum = 0;
    }

    return 0;
}

/// Another way to Solved ::

/*
#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    int a;
    int b;
    int sum = 0;
    int C=0;
    while(T --)
    {
        cin >> a >> b;
        if( (a&1) and (b&1) )
        {
            int i=a;
            while(i<=b)
            {
                sum = sum + i;
                i = i+2;
            }
        }
        else
        {
            if( (a&1) and !(b&1) )
            {
                int i=a;
                while(i<b)
                {
                    sum = sum + i;
                    i = i+2;
                }
            }
            else
            {
                if( !(a&1) and (b&1) )
                {
                    int i=a+1;
                    while(i<=b)
                    {
                        sum = sum + i;
                        i = i+2;
                    }
                }
                else
                {
                    int i=a+1;
                    while(i<b)
                    {
                        sum = sum+i;
                        i = i+2;
                    }
                }
            }
        }
        C ++;
        cout << "Case " << C << ": " << sum << "\n";
        sum = 0;
    }

    return 0;
}

*/
