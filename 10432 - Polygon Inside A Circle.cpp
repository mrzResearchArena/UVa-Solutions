#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>

#define PI acos(-1.0)
#define ll long long
#define dd double
#define pb push_back

using namespace std;

int main()
{
    dd r;
    dd n;
    while(cin >> r >> n)
    {
        dd result = n * 0.5 * r*r * sin( (2*PI) / n );

        printf("%0.3lf\n", result);
    }
    return 0;
}

