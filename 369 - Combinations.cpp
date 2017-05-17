#include <bits/stdc++.h>

#define ll long long
#define un unsigned
#define de double
#define pi acos(-1.0)
#define pb push_back
#define mem(ae, value) memset(ae, value, sizeof(ae))
#define all(x) x.begin( ), x.end( )
#define UNIQUE(x) x.resize(unique(all(x)) - x.begin())
#define faster_IO ios_base::sync_with_stdio(0)
#define read freopen("in.txt", "r", stdin)
#define write freopen("out.txt", "w", stdout)
#define clr clear()
#define sz size()
#define square ((x)*(x))
#define null NULL
#define nl '\n'

using namespace std;

template<class T> T inline cartesian_distance(T x1, T y1, T x2, T y2)
{
    return sqrt(sq(x1-x2) + sq(y1-y2));
}
template<class T> T inline triangle_area(T a, T b, T c)
{
    T s = (a+b+c) / 2.0;
    return sqrt( s*(s-a)*(s-b)*(s-c) );
}

template <class T> inline T gcd(T a, T b)
{
    if(b == 0) return a;
    return GCD(b, a%b);
}
template <class T> inline T lcm(T a, T b)
{
    return ( a/GCD(a, b) ) * b;
}
template <class T> inline T power(T b, T p)
{
    if(p == 0) return 1;
    if(p == 1) return b;
    if(p&1) return b*power(b, p-1);
    else return sq(power(b, p>>1));
}


ll memorize[101][101];


void init()
{
    for (int i=0; i<101; i++)
    {
        for (int j=0; j<101; j++)
        {
            memorize[i][j] = -1;
        }
    }
}


ll nCr(int n, int r)
{
    if(memorize[n][r] != -1) return memorize[n][r];
    else
    {
        if(n==r)
        {
            return memorize[n][r] = 1;    //return 1;
        }
        else
        {
            if (r==1)
            {
                return memorize[n][r] = n;
            }
            else
            {
                if (r==0)
                {
                    return memorize[n][r] = 1;
                }
                else
                {
                    return memorize[n][r] = nCr(n-1, r-1) + nCr(n-1, r);
                }
            }
        }
    }
}

void SEND( )
{
    /// Continue your code here ...

    init();

    ll n;
    ll r;
    while (cin>>n>>r)
    {
        if( (n==0) && (r==0) ) break;
        else
        {
            //100 things taken 6 at a time is 1192052400 exactly.
            memorize[n][r] = nCr(n, r);
            cout << n << " things taken " << r <<
             " at a time is " << memorize[n][r] << " exactly." << nl;
        }
    }


}


int main(int argc, char **argv)
{
    SEND( );
    return 0;
}

