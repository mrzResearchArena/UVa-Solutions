#include <bits/stdc++.h>
#define pb push_back
#define nl '\n'
#define ll long long
#define all(x) x.begin(), x.end()

using namespace std;

struct Node
{
    int u;
    int v;
    int w;
};

vector<Node> graph;
int parent[200001];

bool compare(Node a, Node b)
{
    return a.w < b.w;
}


int disjointSet(int n)
{
    if(parent[n]==n) return n;
    return disjointSet(parent[n]);
}

void SEND()
{
    ios_base::sync_with_stdio(0);

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
                int u;
                cin >> u;
                int v;
                cin >> v;
                int w;
                cin >> w;

                totalCost=totalCost+w;

                Node gets;
                gets.u = u;
                gets.v = v;
                gets.w = w;
                graph.pb(gets);

                i++;
            }
            sort(all(graph), compare);
            for(int i=0; i<node; i++)
            {
                parent[i]=i;
            }

            i=0;
            ll minimumCost=0;
            int C=0;

            while(i<link)
            {
                int u=disjointSet(graph[i].u);
                int v=disjointSet(graph[i].v);

                if(u!=v)
                {
                    parent[u]=v;
                    minimumCost=minimumCost+graph[i].w;
                    C++;

                    if(C==(node-1)) break;
                }
                i++;
            }

            cout << (totalCost-minimumCost) << nl;
            //cout << minimumCost << nl;
            graph.clear();

        }
    }
}

int main(int argc, char **argv)
{

    SEND();

    return 0;
}

