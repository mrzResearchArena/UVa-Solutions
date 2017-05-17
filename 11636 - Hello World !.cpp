#include <bits/stdc++.h>
#define LL long long

using namespace std;

int main()
{
    int n;
    int C = 0;
    double calculation;

    while(cin >> n)
    {
        if (n < 0) break;
        calculation = log2(n);
        printf("Case %d: %.0lf\n",++C, ceil(calculation));
    }
    return 0;
}
