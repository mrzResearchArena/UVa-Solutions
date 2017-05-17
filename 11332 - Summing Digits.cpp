#include <bits/stdc++.h>
#define LL long long

using namespace std;

LL f(LL n)
{
    LL sum = 0;
    int rem;
    while(n != 0)
    {
        rem = n % 10;
        n = n / 10;
        sum = sum + rem;
    }
    return sum;
}

int main()
{
    LL n;
    while(1)
    {
        cin >> n;
        if (n == 0) break;

        cout << f(f(f(n))) << "\n";
    }
    return 0;
}
