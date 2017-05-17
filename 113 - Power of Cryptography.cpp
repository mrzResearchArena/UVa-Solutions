#include <bits/stdc++.h>
#define LL long long

using namespace std;

int main()
{
    double n;
    double p;
    while(cin >> n >> p)
    {
        // double K = exp(log(p) / n);
        double r = pow(p, 1/n);
        printf("%0.0lf\n", r);
    }
    return 0;
}
