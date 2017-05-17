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
#define square(x) ((x)*(x))
#define null NULL
#define nl '\n'

using namespace std;

template<class T> T inline cartesian_distance(T x1, T y1, T x2, T y2)
{
    return sqrt(square(x1-x2) + square(y1-y2));
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

bool isDigit(char c)
{
    int n = (c-48);
    if(n>=1 && n<=9) return true;
    return false;
}

void SEND( )
{
    /// Case 1: 2.6

    int C=0;

    int tc;
    cin >> tc;
    while (tc--)
    {
        int a; cin >> a;
        string mandarin; getline(cin, mandarin);

        de result = a*0.5;
        int i=1;
        while (i< (mandarin.size()-1) )
        {
            if(isDigit(mandarin[i]))
            {
                result = result + (mandarin[i]-48)*0.05;
                break;
            }
            i++;
        }
        cout << "Case " << ++C << ": ";
        cout << result << nl;
    }
}

int main(int argc, char **argv)
{
    SEND( );
    return 0;
}

