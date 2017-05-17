#include <bits/stdc++.h>
#define LL long long

using namespace std;

int main()
{
    int len;
    
    double green;
    double red;
    double pi = acos(-1);
    
    int test;
    cin >> test;
    while(test --)
    {
        scanf("%d", &len);
        red = pi * (len*0.2)*(len*0.2);     /// circle area = pi x r^2
        green = (len)*(len*0.6) - red;        /// rectangular area = length x width
        printf("%.2lf %.2lf\n", red, green);
    }
    return 0;
}
