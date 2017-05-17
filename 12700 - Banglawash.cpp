#include <bits/stdc++.h>

#define ll long long
#define un unsigned
#define de double
#define pi acos(-1.0)
#define pb push_back
#define mem(ae, value) memset(ae, value, sizeof(ae))
#define all(x) x.begin( ), x.end( )
#define UNIQUE(x) x.resize(unique(all(x)) - x.begin())
#define faster ios_base::sync_with_stdio(0)
#define read freopen("in.txt", "r", stdin)
#define write freopen("out.txt", "w", stdout)
#define clr clear()
#define sz size()
#define square ((x)*(x))
#define str string
#define null NULL
#define re return
#define nl '\n'

using namespace std;

template<class T> T inline cartesian_distance(T x1, T y1, T x2, T y2) { return sqrt(sq(x1-x2) + sq(y1-y2)); }
template<class T> T inline triangle_area(T a, T b, T c) { T s = (a+b+c) / 2.0; return sqrt( s*(s-a)*(s-b)*(s-c) ); }

template <class T> inline T gcd(T a, T b) { if(b == 0) return a; return GCD(b, a%b); }
template <class T> inline T lcm(T a, T b) { return ( a/GCD(a, b) ) * b; }
template <class T> inline T power(T b, T p)
{
    if(p == 0) return 1;
    if(p == 1) return b;
    if(p&1) return b*power(b, p-1);
    else return sq(power(b, p>>1));
}

void SEND()
{
    int C=0;
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        str result;
        cin >> result;

        int B=0;
        int W=0;
        int T=0;
        int A=0;

        for (int i=0; i<n; i++)
        {
            if(result[i] == 'B') B++;
            else
            {
                if(result[i] == 'W') W++;
                else
                {
                    if(result[i] == 'T') T++;
                    else A++;
                }

            }
        }

        /*
        cout << B << nl;
        cout << W << nl;
        cout << T << nl;
        cout << A << nl;
        */

        cout << "Case " << ++C << ": ";
        if(B>0 && W==0 && T==0) cout <<"BANGLAWASH";
        else
        {
            if(W>0 && B==0 && T==0) cout <<"WHITEWASH";
            else
            {
                if(A>0 && B==0 && W ==0 && T==0) cout << "ABANDONED";
                else
                {
                    if(B>W) cout << "BANGLADESH " << B <<" - " << W;
                    else
                    {
                        if(W>B) cout << "WWW " << W <<" - " << B;
                        else cout << "DRAW " << B <<" " << T;
                    }

                }

            }

        }
        cout << nl;

    }
}

int main(int argc, char **argv)
{
    faster;
    SEND();

    return 0;
}

