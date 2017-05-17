#include <bits/stdc++.h>

#define ll long long
#define un unsigned
#define de double
#define pi acos(-1.0)
#define pb push_back
#define mp make_pair
#define mem(ae, value) memset(ae, value, sizeof(ae))
#define all(x) x.begin( ), x.end( )
#define UNIQUE(x) x.resize(unique(all(x)) - x.begin())
#define faster ios_base::sync_with_stdio(0)
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


map<string, int> m;
vector<string> v;

void SEND( )
{
    /// Continue your code here ...
    bool ensure=false;

    int n;
    while (cin>>n)
    {
        int i=0;
        while(i<n)
        {
            string name; cin>>name;
            m.insert(mp(name, 0));
            v.pb(name);
            i++;

            //cout << name << nl;
        }

        i=0;
        while(i<n)
        {
            string name;
            cin>>name; // cout << name << nl;
            int total;
            cin >> total; // cout << total << nl;
            int people;
            cin >> people; // cout << people << nl;

            int divide;
            int per;

            if(people!=0)
            {
                divide = -((total/people)*people); // cout << divide << nl;
                ///cout << divide << nl;
                per = (total/people); // cout << per << nl;
                ///cout << per << nl;
            }

            else
            {
                i++;
                continue;
            }

            int j=0;
            m[name]+= divide;
            while (j<people)
            {
                string name;
                cin>>name;
                m[name]+=per;

                j++;
            }
            i++;
        }


        if(!ensure)
        {
            ;
        }
        else cout << nl;
        ensure = true;

        i=0;
        for(un int i=0; i<v.sz; i++)
        {
            cout << v[i] << " " << m[v[i]] << nl;
        }
        m.clr;
        v.clr;


    }
}


int main(int argc, char **argv)
{
    //freopen("/home/rafsanjani/Documents/in.txt", "r", stdin);

    SEND( );
    return 0;
}

