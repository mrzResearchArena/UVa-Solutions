#include <bits/stdc++.h>
#define nl '\n'
#define all(x) x.begin(), x.end()
#define un unsigned
#define ll long long

using namespace std;

void SEND()
{
    string s;
    while(getline(cin, s))
    {
        un int i=0;
        while(s[i])
        {
            cout << char(s[i]-7);
            i++;
        }
        cout << nl;
    }
}


int main(int argc, char **argv)
{
    SEND();
    //un ll a;
    return 0;
}

