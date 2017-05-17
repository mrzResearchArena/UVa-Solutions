#include <bits/stdc++.h>
#define nl '\n'
#define all(x) x.begin(), x.end()
#define un unsigned
#define ll long long

#define sq(x) ((x)*(x))
#define rz return

using namespace std;

vector<int> v;

string confimation()
{
    int i=0;
    while(i<v.size())
    {
        if((i+1)!=v[i]) return "Not jolly";
        i++;
    }
    return "Jolly";
}

void SEND()
{
    int n;
    while(cin>>n)
    {
        int a[n];
        for(int i=0; i<n; i++)
        {
            int in; cin >> in;
            a[i]=in;
        }

        int i=0;
        while(i<n-1)
        {
            int value = abs(a[i]-a[i+1]);
            v.push_back(value);
            i++;
        }
        sort(all(v));
        string ensure = confimation();
        cout << ensure << nl;
        v.clear();
    }
}

int main(int argc, char **argv)
{
    SEND();
    return 0;
}

