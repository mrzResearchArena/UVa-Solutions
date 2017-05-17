

#include <bits/stdc++.h>

#define ll long long
#define u unsigned
#define de double
#define pi acos(-1.0)
#define FF first
#define SS second
#define pb push_back
#define mp make_pair
#define mem(ae, value) memset(ae, value, sizeof(ae))
#define all(x) x.begin( ), x.end( )
#define UNIQUE(x) x.resize(unique(all(x)) - x.begin())
#define FASTER ios_base::sync_with_stdio(0)
#define loop(begin, end) for(u int i=begin; i<=end; i++)
#define Read freopen("in.txt", "r", stdin)
#define Write freopen("out.txt", "w", stdout)
#define nl '\n'

using namespace std;

template<class T> inline T sq(T x) { return x*x; }
template <class T> inline T gcd(T a, T b) { if(b == 0) return a; return GCD(b, a%b); }
template <class T> inline T lcm(T a, T b) { return ( a/GCD(a, b) ) * b; }
template <class T> inline T power(T b, T p)
{
    if(p == 0) return 1;
    if(p == 1) return b;
    if(p&1) return b*power(b, p-1);
    else return sq(power(b, p>>1));
}

int main(int argc, char **argv)
{
    int H1;
    int M1;
    int H2;
    int M2;
    while( (cin >> H1 >> M1 >> H2 >> M2), (H1 or M1 or H2 or M2) )
    {
        int Time1 = H1*60 + M1;
        int Time2 = H2*60 + M2;
        int C;

        if(Time1 == Time2) C = 0;
        else
        {
            if(Time1 < Time2)
            {
                C = (60 - M1) + M2 + ((H2-H1)-1) * 60;
            }
            else C = ( ((24-H1)-1) * 60 ) + (60-M1) + H2 * 60 + M2;
        }
        cout << C << nl;
    }
    return 0;
}

