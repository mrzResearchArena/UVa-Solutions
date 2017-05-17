
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

Here is general idea of this problem ^^ 

A = original number 
B = Sample input 

A - A/10 = B ( by problem description ) 
therefore , (10A - A)/10 = B, 9A = 10B, A = 10/9 * B 
So we can find one answer. 
And minus value is always made by ( A/10 ), 
so another answer's range is - 10 ~ + 10 at original answer. 
You can find that number by small range searching.

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


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
template <class T> inline T gcd(T a, T b) {if(b == 0) return a; return GCD(b, a%b); }
template <class T> inline T lcm(T a, T b) { return ( a/GCD(a, b) ) * b; }
template <class T> inline T power(T b, T p)
{
    if(p == 0) return 1;
    if(p == 1) return b;
    if(p&1) return b*power(b, p-1);
    return sq(power(b, p>>1));
}

void SEND( )
{
    u ll n;
    while((cin>>n), n)
    {
        ll result = (n*10) / 9;

        if((n%9)==0)
        {
            cout << (result-1) << " " << (result) << nl;
        }
        else
        {
            cout << result << nl;
        }
    }
}

int main(int argc, char **argv)
{

    SEND( );

    return 0;
}

