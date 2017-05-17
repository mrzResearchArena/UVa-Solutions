#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    int test;
    int case_c = 0;
    cin >> test;
    while(test --)
    {
        cin >> a >> b >> c;
        if (a > b && a > c)
        {
            printf("Case %d: %d\n", ++case_c, ( (b>c) ? (b) : (c) ) );
        }
        else if (b > a && b > c)
        {
            printf("Case %d: %d\n", ++case_c, ( (a>c) ? (a) : (c) ) );
        }
        else
        {
            printf("Case %d: %d\n", ++case_c, ( (a>b) ? (a) : (b) ) );
        }
    }
    return 0;
}
