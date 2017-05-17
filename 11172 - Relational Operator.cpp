Hints :
_________________________________________________________________________________________
There're three basic "Relational Operators" have Mathematics for comparing two operant.

Relational Operators :
1. <
2. >
3. =
_________________________________________________________________________________________

#include <bits/stdc++.h>
#define LL long long

using namespace std;

int main()
{
    int a;
    int b;
    int test;
    cin >> test;
    while(test --)
    {
        cin >> a >> b;
        if (a > b)
        {
            printf(">\n");
        }
        else if (a < b)
        {
            printf("<\n");
        }
        else
        {
            printf("=\n");
        }
    }
    return 0;
}
