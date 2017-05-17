#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int x;
    int y;
    int r;

    int T;
    cin >> T;
    while(T --)
    {
        cin >> x >> y >> r;
        double reserved = sqrt( x*x + y*y );      /// sqtr ( (x-0)^2 + (y-2)^2 );

        printf("%0.2lf %0.2lf\n", r-reserved, r+reserved);

    }
    return 0;
}
