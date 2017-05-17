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
#define ex return
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

bool isValid(str input)
{
    int len = input.sz;

    int n = sqrt(len);

    if( n*n == len ) ex true;
    else ex false;
}

void SEND()
{
    int tc; cin >> tc;
    getchar();

    while(tc--)
    {
        str input; getline(cin, input);
        bool ensure = isValid(input);
        if(!ensure) cout << "INVALID" << nl;
        else
        {
            //cout << "valid" << nl;

            int len = input.sz;

            int n = sqrt(len);

            int i=0;
            while(i<n)
            {
                int j=0;
                int C=i;
                while(j<n)
                {
                    //cout << input[C];
                    printf("%c", input[C]);
                    C=C+n;
                    j ++;
                }
                i ++;
            }
            cout << nl;

        }
    }
}

int main(int argc, char **argv)
{
    SEND();
    return 0;
}

