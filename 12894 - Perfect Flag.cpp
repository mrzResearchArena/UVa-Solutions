#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    cin >> test;
    
    double x0, y0, x1, y1, c1, c2, r;
    while(test --)
    {
        cin >> x0 >> y0 >> x1 >> y1 >> c1 >> c2 >> r;
        double calculation = x1 - x0;

        double l = calculation;
        double width  = l * 0.60;
        double circle1 = l *0.45;
        double circle2 = l *0.30;
        double radius = l *0.20;

        if ( width == y1-y0 && radius == r && circle1 == c1-x0 && circle2 == c2-y0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
