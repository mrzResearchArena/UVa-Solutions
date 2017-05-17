

#include <bits/stdc++.h>

#define ll long long
#define de double
#define Pi acos(-1.0)
#define FF first
#define SS second
#define pb push_back
#define mp make_pair
#define mem(ae, value) memset(ae, value, sizeof(ae))
#define FASTER ios_base::sync_with_stdio(0)
#define all(x) x.begin(), x.end()
#define loop(begin, end) for(int i=begin; i<=end; i++)
#define Read freopen("in.txt", "r", stdin)
#define Write freopen("out.txt", "w", stdout)

using namespace std;

int box[10];

void SEND(int n)
{
    while(n!=0)
    {
        int reminder = n%10;
        box[reminder] ++;
        n /= 10;
    }
}

void display( )
{
    for(int i=0; i<9; i++)
    {
        cout << box[i] << " ";
    }
    cout << box[9] << '\n';
}

int main(int argc, char **argv)
{
    int T; cin >> T;
    while(T --)
    {
        int N; cin >> N;
        int i=1;
        while(i<=N)
        {
            SEND(i);
            i ++;
        }
        display( );

        mem(box, 0);     // এটা অনেক গুরুত্বপূর্ণ নাইন ...
    }
    return 0;
}

