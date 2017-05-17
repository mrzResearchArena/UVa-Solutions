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
#define UNIQUE(x) x.resize(unique(all(x)) - x.begin( ))
#define FASTER ios_base::sync_with_stdio(0)
#define loop(begin, end) for(u int i=begin; i<=end; i++)
#define Read freopen("in.txt", "r", stdin)
#define Write freopen("out.txt", "w", stdout)
#define nl '\n'
#define square(x) ((x)*(x))

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
    long de a;
    long de b;
    while((cin >> a >> b), (a, b))
    {
        int C=0;
        for(long de i=a; i<=b; i++)
        {
            int value = sqrt(i);
            if(sq(value) == i) C ++;
        }
        cout << C << nl;
        
    }
    return 0;
}

