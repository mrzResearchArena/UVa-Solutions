#include <bits/stdc++.h>
#define pb push_back
#define nl '\n'
#define ll long long
#define all(x) x.begin(), x.end()

using namespace std;

struct Node
{
    string u;
    string v;
    int w;
};

vector<Node> graph;
map<string, string> parent;

bool compare(Node a, Node b)
{
    return a.w < b.w;
}

string disjointSet(string n)
{
    if(parent[n]==n) return n;
    return disjointSet(parent[n]);
}

void SEND()
{
    ios_base::sync_with_stdio(0);

    bool confirm=true;

    int TC;
    cin >> TC;
    while(TC-- > 0)
    {
        int node;
        int link;

        while(cin >> node >> link)
        {
            if(node==0 && link ==0) break;
            else
            {
                int i=0;
                ll totalCost=0;
                while(i<link)
                {
                    string u;
                    cin >> u;
                    string v;
                    cin >> v;
                    int w;
                    cin >> w;

                    Node gets;
                    gets.u = u;
                    gets.v = v;
                    gets.w = w;
                    graph.pb(gets);

                    parent[u]=u;
                    parent[v]=v;

                    i++;
                }
                sort(all(graph), compare);

                i=0;
                ll minimumCost=0;
                int C=0;

                while(i<link)
                {
                    string u=disjointSet(graph[i].u);
                    string v=disjointSet(graph[i].v);

                    if(u!=v)
                    {
                        parent[u]=v;
                        minimumCost=minimumCost+graph[i].w;
                        C++;

                        if(C==(node-1)) break;
                    }
                    i++;
                }

                if(!confirm) cout << nl;

                cout << (minimumCost) << nl;
                confirm=false;
                //cout << minimumCost << nl;
                graph.clear();

            }
        }
    }

}

int main(int argc, char **argv)
{

    SEND();

    return 0;
}

