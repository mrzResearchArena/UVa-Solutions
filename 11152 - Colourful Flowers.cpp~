/// SEE my Geometry NOTES ...

#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define pi acos(-1.0)
#define sq(x) ((x)*(x))

using namespace std;

void SEND( )
{
    ios_base::sync_with_stdio(0);
    int a;
    int b;
    int c;
    while(cin >> a >> b >> c)
    {
        double s = (a+b+c)/2.0;
        double triangle_area = sqrt(s*(s-a)*(s-b)*(s-c));
        double r = triangle_area / s;
        double R = (a*b*c)/(4.0*triangle_area);

        double red = pi * sq(r);
        double blue = triangle_area - red;
        double yellow = (pi * sq(R)) - (red+blue);

        cout << fixed << setprecision(4) << yellow << " " << blue << " " << red << nl;
    }
}

int main(int argc, char **argv)
{

    SEND( );
    return 0;
}

