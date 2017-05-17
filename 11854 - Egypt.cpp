#include <bits/stdc++.h>
#define LL long long

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    while(cin >> a >> b >> c)
    {
        if (a == 0 && b == 0 && c == 0) break;
        else if ( (a*a + b*b == c*c) || (a*a + c*c == b*b) || (b*b + c*c == a*a) )
        {
            printf("right\n");
        }
        else
        {
            printf("wrong\n");
        }
    }
    return 0;
}
