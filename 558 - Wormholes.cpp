/// Algorithms : Bellman & Ford :)

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

class Node
{
    public:

        int u;
        int v;
        int w;

        Node(int u, int v, int w)
        {
            this->u = u;
            this->v = v;
            this->w = w;
        }

};

vector<Node> Graph;

bool Bellman_Ford(int nodes, int edges)
{
    int d[nodes];
    for (int i=0; i<nodes; i++)
    {
        d[i] = 9999;
    }
    d[0] = 0;

    int i=0;
    while(i< (nodes-1) )
    {
        int j=0;
        while(j<Graph.sz)
        {
            if( (d[Graph[j].u]+ Graph[j].w) < d[Graph[j].v] )
            {
                d[Graph[j].v] = d[Graph[j].u]+ Graph[j].w;
            }
            j++;
        }
        i++;
    }

    for (int i=0; i<Graph.sz; i++)
    {
        if( (d[Graph[i].u]+ Graph[i].w) < d[Graph[i].v] ) return true;
    }
    return false;
}

int main(int argc, char **argv)
{
    faster;

    int tc; cin >> tc;
    while(tc--)
    {
        int nodes; cin >> nodes;
        int edges; cin >> edges;

        int i=0;
        while(i<edges)
        {
            int u; cin >> u;
            int v; cin >> v;
            int w; cin >> w;

            Graph.pb(Node(u, v, w));

            i++;
        }

        bool ensure = Bellman_Ford(nodes, edges);

        if(ensure) cout << "possible" << nl;
        else cout << "not possible" << nl;

        Graph.clr;
    }




    return 0;
}

